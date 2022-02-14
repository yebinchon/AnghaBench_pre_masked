
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_queue_group {struct pqi_ctrl_info* ctrl_info; } ;
struct pqi_ctrl_info {int event_irq; int num_interrupts; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_2 (struct pqi_ctrl_info*) ;
 unsigned int FUNC_3 (struct pqi_ctrl_info*,struct pqi_queue_group*) ;
 int FUNC_4 (struct pqi_ctrl_info*,struct pqi_queue_group*,int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct pqi_ctrl_info *VAR_6;
 struct pqi_queue_group *VAR_7;
 unsigned int VAR_8;

 VAR_7 = VAR_5;
 VAR_6 = VAR_7->ctrl_info;

 if (!FUNC_1(VAR_6))
  return VAR_2;

 VAR_8 = FUNC_3(VAR_6, VAR_7);

 if (VAR_4 == VAR_6->event_irq)
  VAR_8 += FUNC_2(VAR_6);

 if (VAR_8)
  FUNC_0(&VAR_6->num_interrupts);

 FUNC_4(VAR_6, VAR_7, VAR_3, ((void*)0));
 FUNC_4(VAR_6, VAR_7, VAR_0, ((void*)0));

 return VAR_1;
}
