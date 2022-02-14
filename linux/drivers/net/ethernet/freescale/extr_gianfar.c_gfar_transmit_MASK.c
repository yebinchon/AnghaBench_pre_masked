
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gfar_priv_grp {TYPE_1__* regs; int napi_tx; int grplock; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int ievent; int imask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct gfar_priv_grp *VAR_5 = (struct gfar_priv_grp *)VAR_4;
 unsigned long VAR_6;
 u32 VAR_7;

 if (FUNC_3(FUNC_4(&VAR_5->napi_tx))) {
  FUNC_5(&VAR_5->grplock, VAR_6);
  VAR_7 = FUNC_1(&VAR_5->regs->imask);
  VAR_7 &= VAR_1;
  FUNC_2(&VAR_5->regs->imask, VAR_7);
  FUNC_6(&VAR_5->grplock, VAR_6);
  FUNC_0(&VAR_5->napi_tx);
 } else {



  FUNC_2(&VAR_5->regs->ievent, VAR_0);
 }

 return VAR_2;
}
