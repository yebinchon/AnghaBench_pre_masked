
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pqi_ctrl_info {int irq_mode; TYPE_1__* pqi_registers; } ;
struct TYPE_2__ {int legacy_intx_status; } ;





 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct pqi_ctrl_info *VAR_1)
{
 bool VAR_2;
 u32 VAR_3;

 switch (VAR_1->irq_mode) {
 case 129:
  VAR_2 = 1;
  break;
 case 130:
  VAR_3 =
   FUNC_0(&VAR_1->pqi_registers->legacy_intx_status);
  if (VAR_3 & VAR_0)
   VAR_2 = 1;
  else
   VAR_2 = 0;
  break;
 case 128:
 default:
  VAR_2 = 0;
  break;
 }

 return VAR_2;
}
