
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pch_can_priv {TYPE_2__* regs; } ;
struct TYPE_4__ {TYPE_1__* ifregs; } ;
struct TYPE_3__ {int creq; int mcont; int id1; int id2; int cmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct pch_can_priv *VAR_11, u32 VAR_12)
{

 if ((VAR_12 >= VAR_8) && (VAR_12 <= VAR_7)) {

  FUNC_0(VAR_2 | VAR_1 | VAR_0,
     &VAR_11->regs->ifregs[0].cmask);


  FUNC_1(&VAR_11->regs->ifregs[0].id2, VAR_3);


  FUNC_1(&VAR_11->regs->ifregs[0].mcont,
      VAR_5 | VAR_4);

  FUNC_3(&VAR_11->regs->ifregs[0].creq, VAR_12);
 } else if ((VAR_12 >= VAR_10) && (VAR_12 <= VAR_9)) {



  FUNC_0(VAR_2 | VAR_1 | VAR_0,
     &VAR_11->regs->ifregs[1].cmask);


  FUNC_2(&VAR_11->regs->ifregs[1].id2,
          VAR_3 | (0x7ff << 2));
  FUNC_0(0x0, &VAR_11->regs->ifregs[1].id1);


  FUNC_1(&VAR_11->regs->ifregs[1].mcont,
      VAR_5 | VAR_4 |
      VAR_6);
  FUNC_3(&VAR_11->regs->ifregs[1].creq, VAR_12);
 }
}
