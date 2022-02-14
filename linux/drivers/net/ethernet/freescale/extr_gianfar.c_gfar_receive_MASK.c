
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gfar_priv_grp {TYPE_1__* regs; int napi_rx; int grplock; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int ievent; int imask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_4, void *VAR_5)
{
 struct gfar_priv_grp *VAR_6 = (struct gfar_priv_grp *)VAR_5;
 unsigned long VAR_7;
 u32 VAR_8, VAR_9;

 VAR_9 = FUNC_1(&VAR_6->regs->ievent);

 if (FUNC_7(VAR_9 & VAR_0)) {
  FUNC_2(&VAR_6->regs->ievent, VAR_0);
  return VAR_3;
 }

 if (FUNC_3(FUNC_4(&VAR_6->napi_rx))) {
  FUNC_5(&VAR_6->grplock, VAR_7);
  VAR_8 = FUNC_1(&VAR_6->regs->imask);
  VAR_8 &= VAR_2;
  FUNC_2(&VAR_6->regs->imask, VAR_8);
  FUNC_6(&VAR_6->grplock, VAR_7);
  FUNC_0(&VAR_6->napi_rx);
 } else {



  FUNC_2(&VAR_6->regs->ievent, VAR_1);
 }

 return VAR_3;
}
