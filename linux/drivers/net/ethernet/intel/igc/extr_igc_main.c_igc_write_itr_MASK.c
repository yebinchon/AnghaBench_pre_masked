
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct igc_q_vector {int itr_val; scalar_t__ set_itr; int itr_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct igc_q_vector *VAR_3)
{
 u32 VAR_4 = VAR_3->itr_val & VAR_2;

 if (!VAR_3->set_itr)
  return;

 if (!VAR_4)
  VAR_4 = VAR_1;

 VAR_4 |= VAR_0;

 FUNC_0(VAR_4, VAR_3->itr_register);
 VAR_3->set_itr = 0;
}
