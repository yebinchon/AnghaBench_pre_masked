
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {scalar_t__ num_tx_qp; scalar_t__ num_msix_vectors; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_4__ {scalar_t__ offset; size_t elements; size_t mask; size_t stride; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct i40e_hw*,size_t,size_t) ;
 TYPE_2__* VAR_0 ;

i40e_status FUNC_5(struct i40e_hw *VAR_1)
{
 i40e_status VAR_2 = 0;
 u32 VAR_3, VAR_4;
 u32 VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_0[VAR_5].offset != 0 &&
          !VAR_2; VAR_5++) {


  if (VAR_0[VAR_5].offset == FUNC_3(0) &&
      VAR_1->func_caps.num_tx_qp != 0)
   VAR_0[VAR_5].elements = VAR_1->func_caps.num_tx_qp;
  if ((VAR_0[VAR_5].offset == FUNC_0(0, 0) ||
       VAR_0[VAR_5].offset == FUNC_0(1, 0) ||
       VAR_0[VAR_5].offset == FUNC_0(2, 0) ||
       VAR_0[VAR_5].offset == FUNC_2(0) ||
       VAR_0[VAR_5].offset == FUNC_1(0)) &&
      VAR_1->func_caps.num_msix_vectors != 0)
   VAR_0[VAR_5].elements =
    VAR_1->func_caps.num_msix_vectors - 1;


  VAR_4 = VAR_0[VAR_5].mask;
  for (VAR_6 = 0; VAR_6 < VAR_0[VAR_5].elements && !VAR_2; VAR_6++) {
   VAR_3 = VAR_0[VAR_5].offset +
         (VAR_6 * VAR_0[VAR_5].stride);
   VAR_2 = FUNC_4(VAR_1, VAR_3, VAR_4);
  }
 }

 return VAR_2;
}
