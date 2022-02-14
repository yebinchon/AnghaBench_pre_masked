
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_ecc {int sectors; int done; TYPE_1__* caps; scalar_t__ regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__* ecc_regs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct mtk_ecc *VAR_8 = VAR_7;
 u32 VAR_9, VAR_10;

 VAR_9 = FUNC_2(VAR_8->regs + VAR_8->caps->ecc_regs[VAR_1])
      & VAR_3;
 if (VAR_9) {
  VAR_9 = FUNC_2(VAR_8->regs + VAR_8->caps->ecc_regs[VAR_0]);
  if (VAR_9 & VAR_8->sectors) {




   FUNC_2(VAR_8->regs + VAR_8->caps->ecc_regs[VAR_1]);
   VAR_8->sectors = 0;
   FUNC_0(&VAR_8->done);
  } else {
   return VAR_4;
  }
 } else {
  VAR_10 = FUNC_1(VAR_8->regs + VAR_8->caps->ecc_regs[VAR_2])
        & VAR_3;
  if (VAR_10)
   FUNC_0(&VAR_8->done);
  else
   return VAR_5;
 }

 return VAR_4;
}
