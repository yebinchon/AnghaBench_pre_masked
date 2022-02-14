
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_fg {int ab8500_fg_complete; scalar_t__ nbr_cceoc_irq_cnt; int ab8500_fg_started; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct ab8500_fg *VAR_3 = VAR_2;
 if (!VAR_3->nbr_cceoc_irq_cnt) {
  VAR_3->nbr_cceoc_irq_cnt++;
  FUNC_0(&VAR_3->ab8500_fg_started);
 } else {
  VAR_3->nbr_cceoc_irq_cnt = 0;
  FUNC_0(&VAR_3->ab8500_fg_complete);
 }
 return VAR_0;
}
