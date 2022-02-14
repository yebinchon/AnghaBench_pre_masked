
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {scalar_t__ status; } ;
struct TYPE_8__ {int member_0; } ;
struct wired_cmd_enable_auth_out {TYPE_6__ header; TYPE_2__ member_0; } ;
struct TYPE_10__ {int physical_port; int integrated_port_type; } ;
struct TYPE_9__ {int buffer_len; scalar_t__ status; int command_id; int api_version; } ;
struct TYPE_7__ {int member_0; } ;
struct wired_cmd_enable_auth_in {int stream_type; TYPE_4__ port; TYPE_3__ header; TYPE_1__ member_0; } ;
struct mei_cl_device {int dummy; } ;
struct hdcp_port_data {TYPE_5__* streams; int port; int port_type; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int enable_auth_out ;
typedef int enable_auth_in ;
struct TYPE_11__ {int stream_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (struct mei_cl_device*,int *,int) ;
 scalar_t__ FUNC_2 (struct mei_cl_device*,int *,int) ;
 int FUNC_3 (int ) ;
 struct mei_cl_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6,
       struct hdcp_port_data *VAR_7)
{
 struct wired_cmd_enable_auth_in VAR_8 = { 0 };
 struct wired_cmd_enable_auth_out VAR_9 = { { 0 } };
 struct mei_cl_device *VAR_10;
 ssize_t VAR_11;

 if (!VAR_6 || !VAR_7)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_6);

 VAR_8.header.api_version = VAR_2;
 VAR_8.header.command_id = VAR_5;
 VAR_8.header.status = VAR_3;
 VAR_8.header.buffer_len = VAR_4;

 VAR_8.port.integrated_port_type = VAR_7->port_type;
 VAR_8.port.physical_port = FUNC_3(VAR_7->port);
 VAR_8.stream_type = VAR_7->streams[0].stream_type;

 VAR_11 = FUNC_2(VAR_10, (u8 *)&VAR_8,
         sizeof(VAR_8));
 if (VAR_11 < 0) {
  FUNC_0(VAR_6, "mei_cldev_send failed. %zd\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_1(VAR_10, (u8 *)&VAR_9,
         sizeof(VAR_9));
 if (VAR_11 < 0) {
  FUNC_0(VAR_6, "mei_cldev_recv failed. %zd\n", VAR_11);
  return VAR_11;
 }

 if (VAR_9.header.status != VAR_3) {
  FUNC_0(VAR_6, "ME cmd 0x%08X failed. status: 0x%X\n",
   VAR_5, VAR_9.header.status);
  return -VAR_1;
 }

 return 0;
}
