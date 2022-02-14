
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int verify_mprime_out ;
typedef int verify_mprime_in ;
typedef int u8 ;
struct TYPE_10__ {scalar_t__ status; } ;
struct TYPE_7__ {int member_0; } ;
struct wired_cmd_repeater_auth_stream_req_out {TYPE_5__ header; TYPE_2__ member_0; } ;
struct TYPE_9__ {int physical_port; int integrated_port_type; } ;
struct TYPE_8__ {int buffer_len; scalar_t__ status; int command_id; int api_version; } ;
struct TYPE_6__ {int member_0; } ;
struct wired_cmd_repeater_auth_stream_req_in {int k; int streams; int seq_num_m; int m_prime; TYPE_4__ port; TYPE_3__ header; TYPE_1__ member_0; } ;
struct mei_cl_device {int dummy; } ;
struct hdcp_port_data {int k; int streams; int seq_num_m; int port; int port_type; } ;
struct hdcp2_streamid_type {int dummy; } ;
struct hdcp2_rep_stream_ready {int m_prime; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,scalar_t__,...) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct mei_cl_device*,int *,int) ;
 scalar_t__ FUNC_4 (struct mei_cl_device*,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 struct mei_cl_device* FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_7,
      struct hdcp_port_data *VAR_8,
      struct hdcp2_rep_stream_ready *VAR_9)
{
 struct wired_cmd_repeater_auth_stream_req_in
     VAR_10 = { 0 };
 struct wired_cmd_repeater_auth_stream_req_out
     VAR_11 = { { 0 } };
 struct mei_cl_device *VAR_12;
 ssize_t VAR_13;

 if (!VAR_7 || !VAR_9 || !VAR_8)
  return -VAR_0;

 VAR_12 = FUNC_7(VAR_7);

 VAR_10.header.api_version = VAR_3;
 VAR_10.header.command_id = VAR_6;
 VAR_10.header.status = VAR_4;
 VAR_10.header.buffer_len =
   VAR_5;

 VAR_10.port.integrated_port_type = VAR_8->port_type;
 VAR_10.port.physical_port = FUNC_5(VAR_8->port);

 FUNC_6(VAR_10.m_prime, VAR_9->m_prime,
        VAR_2);
 FUNC_2(VAR_10.seq_num_m, VAR_8->seq_num_m);
 FUNC_6(VAR_10.streams, VAR_8->streams,
        (VAR_8->k * sizeof(struct hdcp2_streamid_type)));

 VAR_10.k = FUNC_0(VAR_8->k);

 VAR_13 = FUNC_4(VAR_12, (u8 *)&VAR_10,
         sizeof(VAR_10));
 if (VAR_13 < 0) {
  FUNC_1(VAR_7, "mei_cldev_send failed. %zd\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_3(VAR_12, (u8 *)&VAR_11,
         sizeof(VAR_11));
 if (VAR_13 < 0) {
  FUNC_1(VAR_7, "mei_cldev_recv failed. %zd\n", VAR_13);
  return VAR_13;
 }

 if (VAR_11.header.status != VAR_4) {
  FUNC_1(VAR_7, "ME cmd 0x%08X failed. status: 0x%X\n",
   VAR_6,
   VAR_11.header.status);
  return -VAR_1;
 }

 return 0;
}
