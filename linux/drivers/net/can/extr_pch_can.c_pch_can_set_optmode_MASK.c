
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int ctrlmode; } ;
struct pch_can_priv {TYPE_2__* regs; TYPE_1__ can; } ;
struct TYPE_4__ {int opt; int cont; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct pch_can_priv *VAR_5)
{
 u32 VAR_6 = FUNC_0(&VAR_5->regs->opt);

 if (VAR_5->can.ctrlmode & VAR_0)
  VAR_6 |= VAR_4;

 if (VAR_5->can.ctrlmode & VAR_1)
  VAR_6 |= VAR_3;

 FUNC_2(&VAR_5->regs->cont, VAR_2);
 FUNC_1(VAR_6, &VAR_5->regs->opt);
}
