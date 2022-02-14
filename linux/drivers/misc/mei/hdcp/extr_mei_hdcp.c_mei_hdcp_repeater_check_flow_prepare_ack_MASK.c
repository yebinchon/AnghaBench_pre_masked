
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int verify_repeater_out ;
typedef int verify_repeater_in ;
typedef int u8 ;
struct TYPE_10__ {scalar_t__ status; } ;
struct TYPE_7__ {int member_0; } ;
struct wired_cmd_verify_repeater_out {int v; TYPE_5__ header; TYPE_2__ member_0; } ;
struct TYPE_9__ {int physical_port; int integrated_port_type; } ;
struct TYPE_8__ {int buffer_len; scalar_t__ status; int command_id; int api_version; } ;
struct TYPE_6__ {int member_0; } ;
struct wired_cmd_verify_repeater_in {int receiver_ids; int v_prime; int seq_num_v; int rx_info; TYPE_4__ port; TYPE_3__ header; TYPE_1__ member_0; } ;
struct mei_cl_device {int dummy; } ;
struct hdcp_port_data {int port; int port_type; } ;
struct hdcp2_rep_send_receiverid_list {int receiver_ids; int v_prime; int seq_num_v; int rx_info; } ;
struct hdcp2_rep_send_ack {int msg_id; int v; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct device*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (struct mei_cl_device*,int *,int) ;
 scalar_t__ FUNC_2 (struct mei_cl_device*,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 struct mei_cl_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int
FUNC_6(struct device *VAR_11,
      struct hdcp_port_data *VAR_12,
      struct hdcp2_rep_send_receiverid_list
       *VAR_13,
      struct hdcp2_rep_send_ack
       *VAR_14)
{
 struct wired_cmd_verify_repeater_in VAR_15 = { 0 };
 struct wired_cmd_verify_repeater_out VAR_16 = { 0 };
 struct mei_cl_device *VAR_17;
 ssize_t VAR_18;

 if (!VAR_11 || !VAR_13 || !VAR_14 || !VAR_12)
  return -VAR_0;

 VAR_17 = FUNC_5(VAR_11);

 VAR_15.header.api_version = VAR_7;
 VAR_15.header.command_id = VAR_10;
 VAR_15.header.status = VAR_8;
 VAR_15.header.buffer_len =
     VAR_9;

 VAR_15.port.integrated_port_type = VAR_12->port_type;
 VAR_15.port.physical_port = FUNC_3(VAR_12->port);

 FUNC_4(VAR_15.rx_info, VAR_13->rx_info,
        VAR_4);
 FUNC_4(VAR_15.seq_num_v, VAR_13->seq_num_v,
        VAR_5);
 FUNC_4(VAR_15.v_prime, VAR_13->v_prime,
        VAR_6);
 FUNC_4(VAR_15.receiver_ids, VAR_13->receiver_ids,
        VAR_2);

 VAR_18 = FUNC_2(VAR_17, (u8 *)&VAR_15,
         sizeof(VAR_15));
 if (VAR_18 < 0) {
  FUNC_0(VAR_11, "mei_cldev_send failed. %zd\n", VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_1(VAR_17, (u8 *)&VAR_16,
         sizeof(VAR_16));
 if (VAR_18 < 0) {
  FUNC_0(VAR_11, "mei_cldev_recv failed. %zd\n", VAR_18);
  return VAR_18;
 }

 if (VAR_16.header.status != VAR_8) {
  FUNC_0(VAR_11, "ME cmd 0x%08X failed. status: 0x%X\n",
   VAR_10,
   VAR_16.header.status);
  return -VAR_1;
 }

 FUNC_4(VAR_14->v, VAR_16.v,
        VAR_6);
 VAR_14->msg_id = VAR_3;

 return 0;
}
