
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_dev {int dummy; } ;
struct TYPE_2__ {struct saa7146_dev* dev; } ;
struct budget_ci {int ca; TYPE_1__ budget; int ciintf_irq_tasklet; scalar_t__ ci_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct saa7146_dev*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct saa7146_dev*,int,int ) ;
 int FUNC_4 (struct saa7146_dev*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int,int ,int,int ) ;

__attribute__((used)) static void FUNC_7(struct budget_ci *VAR_7)
{
 struct saa7146_dev *VAR_8 = VAR_7->budget.dev;


 if (VAR_7->ci_irq) {
  FUNC_0(VAR_8, VAR_3);
  FUNC_3(VAR_8, 0, VAR_6);
  FUNC_5(&VAR_7->ciintf_irq_tasklet);
 }


 FUNC_6(&VAR_7->budget, VAR_2, VAR_1, 1, 0, 1, 0);
 FUNC_2(1);
 FUNC_6(&VAR_7->budget, VAR_2, VAR_1, 1,
          VAR_0, 1, 0);


 FUNC_3(VAR_8, 1, VAR_6);


 FUNC_1(&VAR_7->ca);


 FUNC_4(VAR_8, VAR_5, VAR_4);
}
