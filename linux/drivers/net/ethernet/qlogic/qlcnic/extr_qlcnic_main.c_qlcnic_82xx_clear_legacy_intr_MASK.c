
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {int isr_int_vec; int tgt_status_reg; int crb_int_state_reg; TYPE_1__* ahw; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int int_vec_bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(struct qlcnic_adapter *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2->isr_int_vec);

 if (!(VAR_3 & VAR_2->ahw->int_vec_bit))
  return VAR_1;


 VAR_3 = FUNC_1(VAR_2->crb_int_state_reg);
 if (!FUNC_0(VAR_3))
  return VAR_1;

 FUNC_2(0xffffffff, VAR_2->tgt_status_reg);

 FUNC_1(VAR_2->isr_int_vec);
 FUNC_1(VAR_2->isr_int_vec);

 return VAR_0;
}
