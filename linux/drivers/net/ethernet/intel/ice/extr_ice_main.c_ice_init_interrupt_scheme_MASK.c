
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ice_pf {int num_avail_sw_msix; TYPE_2__* irq_tracker; TYPE_1__* pdev; } ;
struct TYPE_4__ {int num_entries; int end; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct ice_pf*) ;
 int FUNC_2 (struct ice_pf*) ;

__attribute__((used)) static int FUNC_3(struct ice_pf *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2);

 if (VAR_3 < 0)
  return VAR_3;


 VAR_2->irq_tracker =
  FUNC_0(&VAR_2->pdev->dev, sizeof(*VAR_2->irq_tracker) +
        (sizeof(u16) * VAR_3), VAR_1);
 if (!VAR_2->irq_tracker) {
  FUNC_1(VAR_2);
  return -VAR_0;
 }


 VAR_2->num_avail_sw_msix = VAR_3;
 VAR_2->irq_tracker->num_entries = VAR_3;
 VAR_2->irq_tracker->end = VAR_2->irq_tracker->num_entries;

 return 0;
}
