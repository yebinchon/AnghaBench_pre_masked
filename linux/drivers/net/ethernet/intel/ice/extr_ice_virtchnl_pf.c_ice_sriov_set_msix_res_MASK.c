
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ice_res_tracker {int num_entries; int end; } ;
struct TYPE_4__ {scalar_t__ num_msix_vectors; } ;
struct TYPE_5__ {TYPE_1__ common_cap; } ;
struct TYPE_6__ {TYPE_2__ func_caps; } ;
struct ice_pf {int sriov_base_vector; int num_avail_sw_msix; struct ice_res_tracker* irq_tracker; TYPE_3__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ice_res_tracker*) ;

__attribute__((used)) static int FUNC_1(struct ice_pf *VAR_1, u16 VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1->irq_tracker);
 u16 VAR_4 =
  VAR_1->hw.func_caps.common_cap.num_msix_vectors;
 struct ice_res_tracker *VAR_5 = VAR_1->irq_tracker;
 int VAR_6;

 if (VAR_3 < 0)
  return VAR_3;

 VAR_6 = VAR_4 - VAR_2;




 if (VAR_6 <= VAR_3)
  return -VAR_0;

 VAR_1->sriov_base_vector = VAR_6;


 if (VAR_2 > (VAR_4 - VAR_5->num_entries)) {
  VAR_1->num_avail_sw_msix -=
   VAR_5->num_entries - VAR_1->sriov_base_vector;
  VAR_5->end = VAR_1->sriov_base_vector;
 }

 return 0;
}
