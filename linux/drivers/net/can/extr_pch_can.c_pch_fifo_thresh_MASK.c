
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pch_can_priv {TYPE_2__* regs; } ;
struct TYPE_4__ {TYPE_1__* ifregs; } ;
struct TYPE_3__ {int creq; int mcont; int id2; int cmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct pch_can_priv*,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(struct pch_can_priv *VAR_6, int VAR_7)
{
 if (VAR_7 < VAR_3) {
  FUNC_0(VAR_2 | VAR_1 |
     VAR_0, &VAR_6->regs->ifregs[0].cmask);


  FUNC_1(&VAR_6->regs->ifregs[0].id2, VAR_4);


  FUNC_1(&VAR_6->regs->ifregs[0].mcont,
      VAR_5);
  FUNC_3(&VAR_6->regs->ifregs[0].creq, VAR_7);
 } else if (VAR_7 > VAR_3) {
  FUNC_2(VAR_6, VAR_7);
 } else if (VAR_7 == VAR_3) {
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
   FUNC_2(VAR_6, VAR_8 + 1);
 }
}
