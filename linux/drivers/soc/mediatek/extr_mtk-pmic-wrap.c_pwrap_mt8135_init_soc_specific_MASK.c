
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmic_wrapper {int dev; TYPE_1__* slave; scalar_t__ bridge_base; } ;
struct TYPE_2__ {int * dew_regs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct pmic_wrapper*,int ,int) ;
 int FUNC_2 (struct pmic_wrapper*,int,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pmic_wrapper *VAR_12)
{

 FUNC_2(VAR_12, 0x1, VAR_4);
 FUNC_2(VAR_12, 0xffff, VAR_3);
 FUNC_3(0x7f, VAR_12->bridge_base + VAR_6);
 FUNC_3(0x1, VAR_12->bridge_base + VAR_8);
 FUNC_3(0x1, VAR_12->bridge_base + VAR_9);
 FUNC_3(0x1, VAR_12->bridge_base + VAR_11);
 FUNC_3(0xffff, VAR_12->bridge_base + VAR_10);
 FUNC_3(0x1, VAR_12->bridge_base + VAR_7);
 FUNC_3(0x7ff, VAR_12->bridge_base + VAR_5);


 if (FUNC_1(VAR_12, VAR_12->slave->dew_regs[VAR_1],
   0x1) ||
     FUNC_1(VAR_12, VAR_12->slave->dew_regs[VAR_2],
   0xffff)) {
  FUNC_0(VAR_12->dev, "enable dewrap fail\n");
  return -VAR_0;
 }

 return 0;
}
