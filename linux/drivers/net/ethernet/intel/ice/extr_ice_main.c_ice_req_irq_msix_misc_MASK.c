
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_hw {int dummy; } ;
struct ice_pf {int num_avail_sw_msix; int oicr_idx; int irq_tracker; int * int_name; TYPE_2__* pdev; TYPE_1__* msix_entries; int state; struct ice_hw hw; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int vector; } ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int *,int) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ,int *,struct ice_pf*) ;
 int FUNC_6 (struct ice_hw*,size_t) ;
 int FUNC_7 (struct ice_pf*) ;
 int FUNC_8 (struct ice_hw*) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (struct ice_pf*,int ,int,int ) ;
 int FUNC_11 (struct ice_hw*,int *,int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_4 ;
 int FUNC_13 (int *,int,char*,char*,char*) ;
 int FUNC_14 (struct ice_hw*,int ,int) ;

__attribute__((used)) static int FUNC_15(struct ice_pf *VAR_5)
{
 struct ice_hw *VAR_6 = &VAR_5->hw;
 int VAR_7, VAR_8 = 0;

 if (!VAR_5->int_name[0])
  FUNC_13(VAR_5->int_name, sizeof(VAR_5->int_name) - 1, "%s-%s:misc",
    FUNC_2(&VAR_5->pdev->dev),
    FUNC_4(&VAR_5->pdev->dev));





 if (FUNC_12(VAR_5->state))
  goto skip_req_irq;


 VAR_7 = FUNC_10(VAR_5, VAR_5->irq_tracker, 1, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5->num_avail_sw_msix -= 1;
 VAR_5->oicr_idx = VAR_7;

 VAR_8 = FUNC_5(&VAR_5->pdev->dev,
          VAR_5->msix_entries[VAR_5->oicr_idx].vector,
          VAR_4, 0, VAR_5->int_name, VAR_5);
 if (VAR_8) {
  FUNC_3(&VAR_5->pdev->dev,
   "devm_request_irq for %s failed: %d\n",
   VAR_5->int_name, VAR_8);
  FUNC_9(VAR_5->irq_tracker, 1, VAR_2);
  VAR_5->num_avail_sw_msix += 1;
  return VAR_8;
 }

skip_req_irq:
 FUNC_7(VAR_5);

 FUNC_6(VAR_6, VAR_5->oicr_idx);
 FUNC_14(VAR_6, FUNC_0(VAR_3, VAR_5->oicr_idx),
      FUNC_1(VAR_0) >> VAR_1);

 FUNC_8(VAR_6);
 FUNC_11(VAR_6, ((void*)0), ((void*)0));

 return 0;
}
