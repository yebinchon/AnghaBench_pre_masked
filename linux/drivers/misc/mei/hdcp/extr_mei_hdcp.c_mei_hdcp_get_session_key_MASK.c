
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {scalar_t__ status; } ;
struct TYPE_7__ {int member_0; } ;
struct wired_cmd_get_session_key_out {int r_iv; int e_dkey_ks; TYPE_5__ header; TYPE_2__ member_0; } ;
struct TYPE_9__ {int physical_port; int integrated_port_type; } ;
struct TYPE_8__ {int buffer_len; scalar_t__ status; int command_id; int api_version; } ;
struct TYPE_6__ {int member_0; } ;
struct wired_cmd_get_session_key_in {TYPE_4__ port; TYPE_3__ header; TYPE_1__ member_0; } ;
struct mei_cl_device {int dummy; } ;
struct hdcp_port_data {int port; int port_type; } ;
struct hdcp2_ske_send_eks {int riv; int e_dkey_ks; int msg_id; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int get_skey_out ;
typedef int get_skey_in ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (struct mei_cl_device*,int *,int) ;
 scalar_t__ FUNC_2 (struct mei_cl_device*,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 struct mei_cl_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_9,
        struct hdcp_port_data *VAR_10,
        struct hdcp2_ske_send_eks *VAR_11)
{
 struct wired_cmd_get_session_key_in VAR_12 = { { 0 } };
 struct wired_cmd_get_session_key_out VAR_13 = { 0 };
 struct mei_cl_device *VAR_14;
 ssize_t VAR_15;

 if (!VAR_9 || !VAR_10 || !VAR_11)
  return -VAR_0;

 VAR_14 = FUNC_5(VAR_9);

 VAR_12.header.api_version = VAR_5;
 VAR_12.header.command_id = VAR_8;
 VAR_12.header.status = VAR_6;
 VAR_12.header.buffer_len = VAR_7;

 VAR_12.port.integrated_port_type = VAR_10->port_type;
 VAR_12.port.physical_port = FUNC_3(VAR_10->port);

 VAR_15 = FUNC_2(VAR_14, (u8 *)&VAR_12, sizeof(VAR_12));
 if (VAR_15 < 0) {
  FUNC_0(VAR_9, "mei_cldev_send failed. %zd\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_1(VAR_14, (u8 *)&VAR_13, sizeof(VAR_13));

 if (VAR_15 < 0) {
  FUNC_0(VAR_9, "mei_cldev_recv failed. %zd\n", VAR_15);
  return VAR_15;
 }

 if (VAR_13.header.status != VAR_6) {
  FUNC_0(VAR_9, "ME cmd 0x%08X failed. status: 0x%X\n",
   VAR_8, VAR_13.header.status);
  return -VAR_1;
 }

 VAR_11->msg_id = VAR_4;
 FUNC_4(VAR_11->e_dkey_ks, VAR_13.e_dkey_ks,
        VAR_2);
 FUNC_4(VAR_11->riv, VAR_13.r_iv, VAR_3);

 return 0;
}
