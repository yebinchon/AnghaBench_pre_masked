
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct i40e_vsi {int base_vector; int irqs_ready; int num_q_vectors; struct i40e_pf** q_vectors; struct i40e_pf* back; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {int flags; TYPE_2__* pdev; int num_ringpairs; TYPE_1__* msix_entries; struct i40e_hw hw; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int,struct i40e_pf*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (struct i40e_hw*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct i40e_vsi *VAR_19)
{
 struct i40e_pf *VAR_20 = VAR_19->back;
 struct i40e_hw *VAR_21 = &VAR_20->hw;
 int VAR_22 = VAR_19->base_vector;
 u32 VAR_23, VAR_24;
 int VAR_25;

 if (VAR_20->flags & VAR_0) {
  if (!VAR_19->q_vectors)
   return;

  if (!VAR_19->irqs_ready)
   return;

  VAR_19->irqs_ready = 0;
  for (VAR_25 = 0; VAR_25 < VAR_19->num_q_vectors; VAR_25++) {
   int VAR_26;
   u16 VAR_27;

   VAR_27 = VAR_25 + VAR_22;
   VAR_26 = VAR_20->msix_entries[VAR_27].vector;


   if (!VAR_19->q_vectors[VAR_25] ||
       !VAR_19->q_vectors[VAR_25]->num_ringpairs)
    continue;


   FUNC_5(VAR_26, ((void*)0));

   FUNC_4(VAR_26, ((void*)0));
   FUNC_7(VAR_26);
   FUNC_3(VAR_26, VAR_19->q_vectors[VAR_25]);
   VAR_23 = FUNC_6(VAR_21, FUNC_0(VAR_27 - 1));
   VAR_24 = (VAR_23 & VAR_3)
    >> VAR_4;
   VAR_23 |= VAR_18
    << VAR_4;
   FUNC_8(VAR_21, FUNC_0(VAR_27 - 1), VAR_23);

   while (VAR_24 != VAR_18) {
    u32 VAR_28;

    VAR_23 = FUNC_6(VAR_21, FUNC_1(VAR_24));

    VAR_23 &= ~(VAR_9 |
      VAR_8 |
      VAR_5 |
      VAR_6);

    VAR_23 |= (VAR_7 |
      VAR_10);

    FUNC_8(VAR_21, FUNC_1(VAR_24), VAR_23);

    VAR_23 = FUNC_6(VAR_21, FUNC_2(VAR_24));

    VAR_28 = (VAR_23 & VAR_16)
     >> VAR_17;

    VAR_23 &= ~(VAR_15 |
      VAR_14 |
      VAR_11 |
      VAR_12);

    VAR_23 |= (VAR_13 |
      VAR_16);

    FUNC_8(VAR_21, FUNC_2(VAR_24), VAR_23);
    VAR_24 = VAR_28;
   }
  }
 } else {
  FUNC_3(VAR_20->pdev->irq, VAR_20);

  VAR_23 = FUNC_6(VAR_21, VAR_1);
  VAR_24 = (VAR_23 & VAR_3)
   >> VAR_4;
  VAR_23 |= VAR_18
   << VAR_2;
  FUNC_8(VAR_21, VAR_1, VAR_23);

  VAR_23 = FUNC_6(VAR_21, FUNC_1(VAR_24));
  VAR_23 &= ~(VAR_9 |
    VAR_8 |
    VAR_5 |
    VAR_6);

  VAR_23 |= (VAR_7 |
   VAR_10);

  FUNC_8(VAR_21, FUNC_1(VAR_24), VAR_23);

  VAR_23 = FUNC_6(VAR_21, FUNC_2(VAR_24));

  VAR_23 &= ~(VAR_15 |
    VAR_14 |
    VAR_11 |
    VAR_12);

  VAR_23 |= (VAR_13 |
   VAR_16);

  FUNC_8(VAR_21, FUNC_2(VAR_24), VAR_23);
 }
}
