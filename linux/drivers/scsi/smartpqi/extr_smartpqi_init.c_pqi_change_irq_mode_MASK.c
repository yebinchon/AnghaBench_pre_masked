
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int irq_mode; } ;
typedef enum pqi_irq_mode { ____Placeholder_pqi_irq_mode } pqi_irq_mode ;





 int FUNC_0 (struct pqi_ctrl_info*,int) ;
 int FUNC_1 (struct pqi_ctrl_info*) ;
 int FUNC_2 (struct pqi_ctrl_info*) ;

__attribute__((used)) static void FUNC_3(struct pqi_ctrl_info *VAR_0,
 enum pqi_irq_mode VAR_1)
{
 switch (VAR_0->irq_mode) {
 case 129:
  switch (VAR_1) {
  case 129:
   break;
  case 130:
   FUNC_0(VAR_0, 1);
   FUNC_1(VAR_0);
   break;
  case 128:
   break;
  }
  break;
 case 130:
  switch (VAR_1) {
  case 129:
   FUNC_0(VAR_0, 0);
   FUNC_2(VAR_0);
   break;
  case 130:
   break;
  case 128:
   FUNC_0(VAR_0, 0);
   break;
  }
  break;
 case 128:
  switch (VAR_1) {
  case 129:
   FUNC_2(VAR_0);
   break;
  case 130:
   FUNC_0(VAR_0, 1);
   FUNC_1(VAR_0);
   break;
  case 128:
   break;
  }
  break;
 }

 VAR_0->irq_mode = VAR_1;
}
