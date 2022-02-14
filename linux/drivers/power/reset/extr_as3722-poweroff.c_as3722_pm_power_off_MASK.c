
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int as3722; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_3;

 if (!VAR_2) {
  FUNC_2("AS3722 poweroff is not initialised\n");
  return;
 }

 VAR_3 = FUNC_0(VAR_2->as3722,
  VAR_1, VAR_0, VAR_0);
 if (VAR_3 < 0)
  FUNC_1(VAR_2->dev,
   "RESET_CONTROL_REG update failed, %d\n", VAR_3);
}
