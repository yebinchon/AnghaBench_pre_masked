
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct atmel_pmecc_user {int isr; struct atmel_pmecc* pmecc; } ;
struct TYPE_2__ {scalar_t__ base; } ;
struct atmel_pmecc {TYPE_1__ regs; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int,int ,int) ;

int FUNC_3(struct atmel_pmecc_user *VAR_4)
{
 struct atmel_pmecc *VAR_5 = VAR_4->pmecc;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5->regs.base +
      VAR_1,
      VAR_6, !(VAR_6 & VAR_3), 0,
      VAR_2 * 1000);
 if (VAR_7) {
  FUNC_0(VAR_5->dev,
   "Timeout while waiting for PMECC ready.\n");
  return VAR_7;
 }

 VAR_4->isr = FUNC_1(VAR_5->regs.base + VAR_0);

 return 0;
}
