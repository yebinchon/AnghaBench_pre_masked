
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pch_can_priv {TYPE_2__* regs; } ;
struct TYPE_4__ {TYPE_1__* ifregs; } ;
struct TYPE_3__ {int creq; int cmask; int * data; int mcont; int id2; int id1; int mask2; int mask1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct pch_can_priv *VAR_7)
{
 int VAR_8;

 for (VAR_8 = VAR_5; VAR_8 <= VAR_6; VAR_8++) {
  FUNC_0(VAR_4, &VAR_7->regs->ifregs[0].cmask);
  FUNC_0(0xffff, &VAR_7->regs->ifregs[0].mask1);
  FUNC_0(0xffff, &VAR_7->regs->ifregs[0].mask2);
  FUNC_0(0x0, &VAR_7->regs->ifregs[0].id1);
  FUNC_0(0x0, &VAR_7->regs->ifregs[0].id2);
  FUNC_0(0x0, &VAR_7->regs->ifregs[0].mcont);
  FUNC_0(0x0, &VAR_7->regs->ifregs[0].data[0]);
  FUNC_0(0x0, &VAR_7->regs->ifregs[0].data[1]);
  FUNC_0(0x0, &VAR_7->regs->ifregs[0].data[2]);
  FUNC_0(0x0, &VAR_7->regs->ifregs[0].data[3]);
  FUNC_0(VAR_3 | VAR_2 |
     VAR_0 | VAR_1,
     &VAR_7->regs->ifregs[0].cmask);
  FUNC_1(&VAR_7->regs->ifregs[0].creq, VAR_8);
 }
}
