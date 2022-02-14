
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_can_priv {int ndev; TYPE_1__* regs; } ;
typedef enum pch_can_mode { ____Placeholder_pch_can_mode } pch_can_mode ;
struct TYPE_2__ {int cont; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct pch_can_priv *VAR_2,
        enum pch_can_mode VAR_3)
{
 switch (VAR_3) {
 case 129:
  FUNC_1(&VAR_2->regs->cont, VAR_0);
  break;

 case 130:
  FUNC_2(&VAR_2->regs->cont, VAR_1);
  break;

 case 128:
  FUNC_1(&VAR_2->regs->cont, VAR_1);
  break;

 default:
  FUNC_0(VAR_2->ndev, "Invalid interrupt number.\n");
  break;
 }
}
