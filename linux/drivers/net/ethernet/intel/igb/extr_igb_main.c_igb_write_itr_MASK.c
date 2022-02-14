
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct igb_q_vector {int itr_val; scalar_t__ set_itr; int itr_register; struct igb_adapter* adapter; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct igb_adapter {TYPE_2__ hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct igb_q_vector *VAR_2)
{
 struct igb_adapter *VAR_3 = VAR_2->adapter;
 u32 VAR_4 = VAR_2->itr_val & 0x7FFC;

 if (!VAR_2->set_itr)
  return;

 if (!VAR_4)
  VAR_4 = 0x4;

 if (VAR_3->hw.mac.type == VAR_1)
  VAR_4 |= VAR_4 << 16;
 else
  VAR_4 |= VAR_0;

 FUNC_0(VAR_4, VAR_2->itr_register);
 VAR_2->set_itr = 0;
}
