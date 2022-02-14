
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int code; } ;
union fjes_device_command_res {TYPE_2__ stop_trace; } ;
union fjes_device_command_req {TYPE_2__ stop_trace; } ;
struct TYPE_3__ {int res_buf_size; int req_buf_size; int trace; union fjes_device_command_res* res_buf; union fjes_device_command_res* req_buf; } ;
struct fjes_hw {int debug_mode; TYPE_1__ hw_info; } ;
typedef enum fjes_dev_command_response_e { ____Placeholder_fjes_dev_command_response_e } fjes_dev_command_response_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;


 int VAR_4 ;


 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct fjes_hw*,int ) ;
 int FUNC_1 (union fjes_device_command_res*,int ,int ) ;
 int FUNC_2 (union fjes_device_command_res*) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct fjes_hw *VAR_7)
{
 union fjes_device_command_req *VAR_8 = VAR_7->hw_info.req_buf;
 union fjes_device_command_res *VAR_9 = VAR_7->hw_info.res_buf;
 enum fjes_dev_command_response_e VAR_10;
 int VAR_11 = 0;

 if (!VAR_7->hw_info.trace)
  return -VAR_2;

 FUNC_1(VAR_8, 0, VAR_7->hw_info.req_buf_size);
 FUNC_1(VAR_9, 0, VAR_7->hw_info.res_buf_size);
 VAR_8->stop_trace.length = VAR_5;

 VAR_9->stop_trace.length = 0;
 VAR_9->stop_trace.code = 0;

 VAR_10 = FUNC_0(VAR_7, VAR_3);
 FUNC_2(VAR_9);

 if (VAR_9->stop_trace.length != VAR_6) {
  FUNC_3("Invalid res_buf");
  VAR_11 = -VAR_1;
 } else if (VAR_10 == VAR_4) {
  switch (VAR_9->stop_trace.code) {
  case 132:
   VAR_11 = 0;
   VAR_7->debug_mode = 0;
   break;
  default:
   VAR_11 = -VAR_2;
   break;
  }
 } else {
  switch (VAR_10) {
  case 128:
   VAR_11 = -VAR_2;
   break;
  case 129:
   VAR_11 = -VAR_0;
   FUNC_3("Busy Timeout");
   break;
  case 131:
  case 130:
  default:
   VAR_11 = -VAR_2;
   break;
  }
 }

 return VAR_11;
}
