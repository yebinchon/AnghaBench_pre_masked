
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int complete; } ;
union REG_CS {TYPE_1__ bits; void* reg; } ;
struct TYPE_4__ {int req_start; int req_code; scalar_t__ error; int err_info; } ;
union REG_CR {TYPE_2__ bits; void* reg; } ;
struct fjes_hw {int dummy; } ;
typedef enum fjes_dev_command_response_e { ____Placeholder_fjes_dev_command_response_e } fjes_dev_command_response_e ;
typedef enum fjes_dev_command_request_type { ____Placeholder_fjes_dev_command_request_type } fjes_dev_command_request_type ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (union REG_CR*,union REG_CS*,int,int) ;
 int FUNC_3 (int ,void*) ;

__attribute__((used)) static enum fjes_dev_command_response_e
FUNC_4(struct fjes_hw *VAR_8,
         enum fjes_dev_command_request_type VAR_9)
{
 enum fjes_dev_command_response_e VAR_10 = VAR_4;
 union REG_CR VAR_11;
 union REG_CS VAR_12;
 int VAR_13 = VAR_5 * 1000;

 VAR_11.reg = 0;
 VAR_11.bits.req_start = 1;
 VAR_11.bits.req_code = VAR_9;
 FUNC_3(VAR_6, VAR_11.reg);
 VAR_11.reg = FUNC_1(VAR_6);

 if (VAR_11.bits.error == 0) {
  VAR_13 = VAR_5 * 1000;
  VAR_12.reg = FUNC_1(VAR_7);

  while ((VAR_12.bits.complete != 1) && VAR_13 > 0) {
   FUNC_0(1000);
   VAR_12.reg = FUNC_1(VAR_7);
   VAR_13 -= 1000;
  }

  if (VAR_12.bits.complete == 1)
   VAR_10 = VAR_2;
  else if (VAR_13 <= 0)
   VAR_10 = VAR_3;

 } else {
  switch (VAR_11.bits.err_info) {
  case 129:
   VAR_10 = VAR_0;
   break;
  case 128:
   VAR_10 = VAR_1;
   break;
  default:
   VAR_10 = VAR_4;
   break;
  }
 }

 FUNC_2(&VAR_11, &VAR_12, VAR_13, VAR_10);

 return VAR_10;
}
