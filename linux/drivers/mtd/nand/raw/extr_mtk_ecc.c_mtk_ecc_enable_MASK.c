
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mtk_ecc_config {int op; scalar_t__ mode; } ;
struct mtk_ecc {scalar_t__ regs; TYPE_1__* caps; int done; int lock; int dev; } ;
typedef enum mtk_ecc_operation { ____Placeholder_mtk_ecc_operation } mtk_ecc_operation ;
struct TYPE_2__ {scalar_t__* ecc_regs; scalar_t__ pg_irq_sel; } ;


 scalar_t__ FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mtk_ecc*,struct mtk_ecc_config*) ;
 int FUNC_4 (struct mtk_ecc*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;

int FUNC_8(struct mtk_ecc *VAR_7, struct mtk_ecc_config *VAR_8)
{
 enum mtk_ecc_operation VAR_9 = VAR_8->op;
 u16 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_5(&VAR_7->lock);
 if (VAR_11) {
  FUNC_1(VAR_7->dev, "interrupted when attempting to lock\n");
  return VAR_11;
 }

 FUNC_4(VAR_7, VAR_9);

 VAR_11 = FUNC_3(VAR_7, VAR_8);
 if (VAR_11) {
  FUNC_6(&VAR_7->lock);
  return VAR_11;
 }

 if (VAR_8->mode != VAR_4 || VAR_9 != VAR_2) {
  FUNC_2(&VAR_7->done);
  VAR_10 = VAR_3;





  if (VAR_7->caps->pg_irq_sel && VAR_8->mode == VAR_4)
   VAR_10 |= VAR_6;
  if (VAR_9 == VAR_2)
   FUNC_7(VAR_10, VAR_7->regs +
          VAR_7->caps->ecc_regs[VAR_1]);
  else
   FUNC_7(VAR_10, VAR_7->regs +
          VAR_7->caps->ecc_regs[VAR_0]);
 }

 FUNC_7(VAR_5, VAR_7->regs + FUNC_0(VAR_9));

 return 0;
}
