
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_hw {int dummy; } ;
struct ice_pf {size_t oicr_idx; int num_avail_sw_msix; int irq_tracker; TYPE_2__* msix_entries; TYPE_1__* pdev; struct ice_hw hw; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct ice_pf*) ;
 int FUNC_1 (struct ice_hw*) ;
 int FUNC_2 (struct ice_hw*) ;
 int FUNC_3 (int ,size_t,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ice_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct ice_pf *VAR_2)
{
 struct ice_hw *VAR_3 = &VAR_2->hw;

 FUNC_1(VAR_3);


 FUNC_5(VAR_3, VAR_1, 0);
 FUNC_2(VAR_3);

 if (VAR_2->msix_entries) {
  FUNC_4(VAR_2->msix_entries[VAR_2->oicr_idx].vector);
  FUNC_0(&VAR_2->pdev->dev,
         VAR_2->msix_entries[VAR_2->oicr_idx].vector, VAR_2);
 }

 VAR_2->num_avail_sw_msix += 1;
 FUNC_3(VAR_2->irq_tracker, VAR_2->oicr_idx, VAR_0);
}
