
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum s3c2410_udc_cmd_e { ____Placeholder_s3c2410_udc_cmd_e } s3c2410_udc_cmd_e ;
struct TYPE_2__ {int pullup_pin_inverted; int pullup_pin; int (* udc_command ) (int) ;} ;




 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(enum s3c2410_udc_cmd_e VAR_1)
{
 if (!VAR_0)
  return;

 if (VAR_0->udc_command) {
  VAR_0->udc_command(VAR_1);
 } else if (FUNC_0(VAR_0->pullup_pin)) {
  int VAR_2;

  switch (VAR_1) {
  case 128:
   VAR_2 = 1;
   break;
  case 129:
   VAR_2 = 0;
   break;
  default:
   return;
  }
  VAR_2 ^= VAR_0->pullup_pin_inverted;

  FUNC_1(VAR_0->pullup_pin, VAR_2);
 }
}
