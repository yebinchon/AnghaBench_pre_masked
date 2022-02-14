
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
struct wired_cmd_ake_send_pairing_info_out {TYPE_5__ header; TYPE_2__ member_0; } ;
struct TYPE_9__ {int physical_port; int integrated_port_type; } ;
struct TYPE_8__ {int buffer_len; scalar_t__ status; int command_id; int api_version; } ;
struct TYPE_6__ {int member_0; } ;
struct wired_cmd_ake_send_pairing_info_in {int e_kh_km; TYPE_4__ port; TYPE_3__ header; TYPE_1__ member_0; } ;
struct mei_cl_device {int dummy; } ;
struct hdcp_port_data {int port; int port_type; } ;
struct hdcp2_ake_send_pairing_info {int e_kh_km; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int pairing_info_out ;
typedef int pairing_info_in ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (struct mei_cl_device*,int *,int) ;
 scalar_t__ FUNC_2 (struct mei_cl_device*,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 struct mei_cl_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int
FUNC_6(struct device *VAR_7, struct hdcp_port_data *VAR_8,
       struct hdcp2_ake_send_pairing_info *VAR_9)
{
 struct wired_cmd_ake_send_pairing_info_in VAR_10 = { 0 };
 struct wired_cmd_ake_send_pairing_info_out VAR_11 = { { 0 } };
 struct mei_cl_device *VAR_12;
 ssize_t VAR_13;

 if (!VAR_7 || !VAR_8 || !VAR_9)
  return -VAR_0;

 VAR_12 = FUNC_5(VAR_7);

 VAR_10.header.api_version = VAR_3;
 VAR_10.header.command_id = VAR_5;
 VAR_10.header.status = VAR_4;
 VAR_10.header.buffer_len =
     VAR_6;

 VAR_10.port.integrated_port_type = VAR_8->port_type;
 VAR_10.port.physical_port = FUNC_3(VAR_8->port);

 FUNC_4(VAR_10.e_kh_km, VAR_9->e_kh_km,
        VAR_2);

 VAR_13 = FUNC_2(VAR_12, (u8 *)&VAR_10,
         sizeof(VAR_10));
 if (VAR_13 < 0) {
  FUNC_0(VAR_7, "mei_cldev_send failed. %zd\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_1(VAR_12, (u8 *)&VAR_11,
         sizeof(VAR_11));
 if (VAR_13 < 0) {
  FUNC_0(VAR_7, "mei_cldev_recv failed. %zd\n", VAR_13);
  return VAR_13;
 }

 if (VAR_11.header.status != VAR_4) {
  FUNC_0(VAR_7, "ME cmd 0x%08X failed. Status: 0x%X\n",
   VAR_5,
   VAR_11.header.status);
  return -VAR_1;
 }

 return 0;
}
