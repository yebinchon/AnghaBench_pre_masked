
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct netup_unidvb_dev {struct netup_spi* spi; } ;
struct netup_spi {int master; int lock; TYPE_1__* regs; } ;
struct TYPE_2__ {int control_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int *) ;

void FUNC_5(struct netup_unidvb_dev *VAR_2)
{
 u16 VAR_3;
 unsigned long VAR_4;
 struct netup_spi *VAR_5 = VAR_2->spi;

 if (!VAR_5)
  return;

 FUNC_2(&VAR_5->lock, VAR_4);
 VAR_3 = FUNC_0(&VAR_5->regs->control_stat);
 FUNC_4(VAR_3 | VAR_1, &VAR_5->regs->control_stat);
 VAR_3 = FUNC_0(&VAR_5->regs->control_stat);
 FUNC_4(VAR_3 & ~VAR_0, &VAR_5->regs->control_stat);
 FUNC_3(&VAR_5->lock, VAR_4);
 FUNC_1(VAR_5->master);
 VAR_2->spi = ((void*)0);
}
