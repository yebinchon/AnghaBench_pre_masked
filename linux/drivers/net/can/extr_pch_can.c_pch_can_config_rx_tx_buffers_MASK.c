
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pch_can_priv {TYPE_2__* regs; } ;
struct TYPE_4__ {TYPE_1__* ifregs; } ;
struct TYPE_3__ {int creq; int cmask; int mask2; int mask1; int mcont; int id2; int id1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(struct pch_can_priv *VAR_13)
{
 int VAR_14;

 for (VAR_14 = VAR_10; VAR_14 <= VAR_9; VAR_14++) {
  FUNC_0(VAR_4, &VAR_13->regs->ifregs[0].cmask);
  FUNC_3(&VAR_13->regs->ifregs[0].creq, VAR_14);

  FUNC_0(0x0, &VAR_13->regs->ifregs[0].id1);
  FUNC_0(0x0, &VAR_13->regs->ifregs[0].id2);

  FUNC_2(&VAR_13->regs->ifregs[0].mcont,
    VAR_7);


  if (VAR_14 == VAR_9)
   FUNC_2(&VAR_13->regs->ifregs[0].mcont,
     VAR_6);
  else
   FUNC_1(&VAR_13->regs->ifregs[0].mcont,
       VAR_6);

  FUNC_0(0, &VAR_13->regs->ifregs[0].mask1);
  FUNC_1(&VAR_13->regs->ifregs[0].mask2,
      0x1fff | VAR_8);


  FUNC_0(VAR_3 | VAR_2 | VAR_0 |
     VAR_1, &VAR_13->regs->ifregs[0].cmask);

  FUNC_3(&VAR_13->regs->ifregs[0].creq, VAR_14);
 }

 for (VAR_14 = VAR_12; VAR_14 <= VAR_11; VAR_14++) {
  FUNC_0(VAR_4, &VAR_13->regs->ifregs[1].cmask);
  FUNC_3(&VAR_13->regs->ifregs[1].creq, VAR_14);


  FUNC_0(0x0, &VAR_13->regs->ifregs[1].id1);
  FUNC_0(VAR_5, &VAR_13->regs->ifregs[1].id2);


  FUNC_0(VAR_6 | VAR_7,
     &VAR_13->regs->ifregs[1].mcont);

  FUNC_0(0, &VAR_13->regs->ifregs[1].mask1);
  FUNC_1(&VAR_13->regs->ifregs[1].mask2, 0x1fff);


  FUNC_0(VAR_3 | VAR_2 | VAR_0 |
     VAR_1, &VAR_13->regs->ifregs[1].cmask);

  FUNC_3(&VAR_13->regs->ifregs[1].creq, VAR_14);
 }
}
