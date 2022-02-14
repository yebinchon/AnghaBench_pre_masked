
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int code; } ;
union fjes_device_command_res {TYPE_2__ info; } ;
union fjes_device_command_req {TYPE_2__ info; } ;
struct TYPE_3__ {int * max_epid; int res_buf_size; int req_buf_size; union fjes_device_command_res* res_buf; union fjes_device_command_res* req_buf; } ;
struct fjes_hw {TYPE_1__ hw_info; } ;
typedef enum fjes_dev_command_response_e { ____Placeholder_fjes_dev_command_response_e } fjes_dev_command_response_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;


 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct fjes_hw*,int ) ;
 int FUNC_2 (union fjes_device_command_res*,int ,int ) ;
 int FUNC_3 (struct fjes_hw*,union fjes_device_command_res*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct fjes_hw *VAR_6)
{
 union fjes_device_command_req *VAR_7 = VAR_6->hw_info.req_buf;
 union fjes_device_command_res *VAR_8 = VAR_6->hw_info.res_buf;
 enum fjes_dev_command_response_e VAR_9;
 int VAR_10;

 FUNC_2(VAR_7, 0, VAR_6->hw_info.req_buf_size);
 FUNC_2(VAR_8, 0, VAR_6->hw_info.res_buf_size);

 VAR_7->info.length = VAR_5;

 VAR_8->info.length = 0;
 VAR_8->info.code = 0;

 VAR_9 = FUNC_1(VAR_6, VAR_3);
 FUNC_3(VAR_6, VAR_8);

 VAR_10 = 0;

 if (FUNC_0((*VAR_6->hw_info.max_epid)) !=
  VAR_8->info.length) {
  FUNC_4("Invalid res_buf");
  VAR_10 = -VAR_1;
 } else if (VAR_9 == VAR_4) {
  switch (VAR_8->info.code) {
  case 132:
   VAR_10 = 0;
   break;
  default:
   VAR_10 = -VAR_2;
   break;
  }
 } else {
  switch (VAR_9) {
  case 128:
   VAR_10 = -VAR_2;
   break;
  case 129:
   FUNC_4("Timeout");
   VAR_10 = -VAR_0;
   break;
  case 131:
   VAR_10 = -VAR_2;
   break;
  case 130:
   VAR_10 = -VAR_2;
   break;
  default:
   VAR_10 = -VAR_2;
   break;
  }
 }

 return VAR_10;
}
