
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_res_tracker {scalar_t__ num_entries; scalar_t__ end; } ;
struct ice_pf {scalar_t__ sriov_base_vector; int num_avail_sw_msix; struct ice_res_tracker* irq_tracker; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ice_pf *VAR_1)
{
 struct ice_res_tracker *VAR_2;

 if (!VAR_1)
  return -VAR_0;

 VAR_2 = VAR_1->irq_tracker;
 if (!VAR_2)
  return -VAR_0;


 if (VAR_1->sriov_base_vector < VAR_2->num_entries) {
  VAR_2->end = VAR_2->num_entries;
  VAR_1->num_avail_sw_msix +=
   VAR_2->num_entries - VAR_1->sriov_base_vector;
 }

 VAR_1->sriov_base_vector = 0;

 return 0;
}
