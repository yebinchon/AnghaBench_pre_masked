
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_ecc {int lock; scalar_t__ regs; TYPE_1__* caps; } ;
typedef enum mtk_ecc_operation { ____Placeholder_mtk_ecc_operation } mtk_ecc_operation ;
struct TYPE_2__ {scalar_t__* ecc_regs; } ;


 scalar_t__ FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct mtk_ecc*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(struct mtk_ecc *VAR_7)
{
 enum mtk_ecc_operation VAR_8 = VAR_4;


 if (FUNC_3(VAR_7->regs + FUNC_0(VAR_8)) != VAR_6)
  VAR_8 = VAR_2;


 FUNC_1(VAR_7, VAR_8);
 if (VAR_8 == VAR_2) {




  FUNC_3(VAR_7->regs + VAR_7->caps->ecc_regs[VAR_0]);
  FUNC_4(0, VAR_7->regs + VAR_7->caps->ecc_regs[VAR_1]);
 } else {
  FUNC_4(0, VAR_7->regs + VAR_7->caps->ecc_regs[VAR_3]);
 }

 FUNC_4(VAR_5, VAR_7->regs + FUNC_0(VAR_8));

 FUNC_2(&VAR_7->lock);
}
