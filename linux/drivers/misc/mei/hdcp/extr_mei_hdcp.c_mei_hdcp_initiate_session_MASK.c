
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
struct wired_cmd_initiate_hdcp2_session_out {int r_tx; int tx_caps; TYPE_5__ header; TYPE_2__ member_0; } ;
struct TYPE_9__ {int physical_port; int integrated_port_type; } ;
struct TYPE_8__ {int buffer_len; scalar_t__ status; int command_id; int api_version; } ;
struct TYPE_6__ {int member_0; } ;
struct wired_cmd_initiate_hdcp2_session_in {int protocol; TYPE_4__ port; TYPE_3__ header; TYPE_1__ member_0; } ;
struct mei_cl_device {int dummy; } ;
struct hdcp_port_data {int protocol; int port; int port_type; } ;
struct hdcp2_ake_init {int r_tx; int tx_caps; int msg_id; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int session_init_out ;
typedef int session_init_in ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (struct mei_cl_device*,int *,int) ;
 scalar_t__ FUNC_2 (struct mei_cl_device*,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 struct mei_cl_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int
FUNC_6(struct device *VAR_8, struct hdcp_port_data *VAR_9,
     struct hdcp2_ake_init *VAR_10)
{
 struct wired_cmd_initiate_hdcp2_session_in VAR_11 = { 0 };
 struct wired_cmd_initiate_hdcp2_session_out
      VAR_12 = { 0 };
 struct mei_cl_device *VAR_13;
 ssize_t VAR_14;

 if (!VAR_8 || !VAR_9 || !VAR_10)
  return -VAR_0;

 VAR_13 = FUNC_5(VAR_8);

 VAR_11.header.api_version = VAR_4;
 VAR_11.header.command_id = VAR_7;
 VAR_11.header.status = VAR_5;
 VAR_11.header.buffer_len =
    VAR_6;

 VAR_11.port.integrated_port_type = VAR_9->port_type;
 VAR_11.port.physical_port = FUNC_3(VAR_9->port);
 VAR_11.protocol = VAR_9->protocol;

 VAR_14 = FUNC_2(VAR_13, (u8 *)&VAR_11,
         sizeof(VAR_11));
 if (VAR_14 < 0) {
  FUNC_0(VAR_8, "mei_cldev_send failed. %zd\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_1(VAR_13, (u8 *)&VAR_12,
         sizeof(VAR_12));
 if (VAR_14 < 0) {
  FUNC_0(VAR_8, "mei_cldev_recv failed. %zd\n", VAR_14);
  return VAR_14;
 }

 if (VAR_12.header.status != VAR_5) {
  FUNC_0(VAR_8, "ME cmd 0x%08X Failed. Status: 0x%X\n",
   VAR_7,
   VAR_12.header.status);
  return -VAR_1;
 }

 VAR_10->msg_id = VAR_2;
 VAR_10->tx_caps = VAR_12.tx_caps;
 FUNC_4(VAR_10->r_tx, VAR_12.r_tx, VAR_3);

 return 0;
}
