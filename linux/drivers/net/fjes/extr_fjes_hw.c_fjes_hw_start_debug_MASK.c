
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int buffer_len; int code; scalar_t__* buffer; int mode; } ;
union fjes_device_command_res {TYPE_2__ start_trace; } ;
union fjes_device_command_req {TYPE_2__ start_trace; } ;
typedef int u8 ;
struct TYPE_3__ {int trace_size; union fjes_device_command_res* trace; int res_buf_size; int req_buf_size; union fjes_device_command_res* res_buf; union fjes_device_command_res* req_buf; } ;
struct fjes_hw {TYPE_1__ hw_info; int debug_mode; } ;
typedef enum fjes_dev_command_response_e { ____Placeholder_fjes_dev_command_response_e } fjes_dev_command_response_e ;
typedef scalar_t__ __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct fjes_hw*,int ) ;
 int FUNC_2 (union fjes_device_command_res*,int ,int ) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (union fjes_device_command_res*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (union fjes_device_command_res*) ;
 int FUNC_8 (void*) ;

int FUNC_9(struct fjes_hw *VAR_8)
{
 union fjes_device_command_req *VAR_9 = VAR_8->hw_info.req_buf;
 union fjes_device_command_res *VAR_10 = VAR_8->hw_info.res_buf;
 enum fjes_dev_command_response_e VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 void *VAR_14;
 int VAR_15;

 if (!VAR_8->hw_info.trace)
  return -VAR_2;
 FUNC_2(VAR_8->hw_info.trace, 0, VAR_5);

 FUNC_2(VAR_9, 0, VAR_8->hw_info.req_buf_size);
 FUNC_2(VAR_10, 0, VAR_8->hw_info.res_buf_size);

 VAR_9->start_trace.length =
  FUNC_0(VAR_8->hw_info.trace_size);
 VAR_9->start_trace.mode = VAR_8->debug_mode;
 VAR_9->start_trace.buffer_len = VAR_8->hw_info.trace_size;
 VAR_12 = VAR_8->hw_info.trace_size / VAR_6;
 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
  VAR_14 = ((u8 *)VAR_8->hw_info.trace) + VAR_15 * VAR_6;
  VAR_9->start_trace.buffer[VAR_15] =
   (__le64)(FUNC_4(FUNC_8(VAR_14)) +
   FUNC_3(VAR_14));
 }

 VAR_10->start_trace.length = 0;
 VAR_10->start_trace.code = 0;

 FUNC_7(VAR_9);
 VAR_11 = FUNC_1(VAR_8, VAR_3);
 FUNC_5(VAR_10);

 if (VAR_10->start_trace.length !=
  VAR_7) {
  VAR_13 = -VAR_1;
  FUNC_6("Invalid res_buf");
 } else if (VAR_11 == VAR_4) {
  switch (VAR_10->start_trace.code) {
  case 132:
   VAR_13 = 0;
   break;
  default:
   VAR_13 = -VAR_2;
   break;
  }
 } else {
  switch (VAR_11) {
  case 128:
   VAR_13 = -VAR_2;
   break;
  case 129:
   FUNC_6("Busy Timeout");
   VAR_13 = -VAR_0;
   break;
  case 131:
  case 130:
  default:
   VAR_13 = -VAR_2;
   break;
  }
 }

 return VAR_13;
}
