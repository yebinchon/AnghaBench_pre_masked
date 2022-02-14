
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_pf {int num_alloc_vsi; scalar_t__* vsi; int irq_pile; int iwarp_base_vector; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct i40e_pf*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (struct i40e_pf*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct i40e_pf *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2);

 FUNC_1(VAR_2->irq_pile, VAR_2->iwarp_base_vector,
        VAR_0);

 FUNC_1(VAR_2->irq_pile, 0, VAR_1-1);
 for (VAR_3 = 0; VAR_3 < VAR_2->num_alloc_vsi; VAR_3++)
  if (VAR_2->vsi[VAR_3])
   FUNC_3(VAR_2->vsi[VAR_3]);
 FUNC_2(VAR_2);
}
