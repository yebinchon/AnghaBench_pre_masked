
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ count; scalar_t__ next_to_clean; scalar_t__ next_to_use; } ;
struct ice_ctl_q_info {scalar_t__ num_sq_entries; TYPE_1__ sq; int sq_buf_size; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ice_hw*,struct ice_ctl_q_info*) ;
 int FUNC_1 (struct ice_hw*,struct ice_ctl_q_info*) ;
 int FUNC_2 (struct ice_hw*,struct ice_ctl_q_info*) ;
 int FUNC_3 (struct ice_hw*,TYPE_1__*) ;

__attribute__((used)) static enum ice_status FUNC_4(struct ice_hw *VAR_2, struct ice_ctl_q_info *VAR_3)
{
 enum ice_status VAR_4;

 if (VAR_3->sq.count > 0) {

  VAR_4 = VAR_1;
  goto init_ctrlq_exit;
 }


 if (!VAR_3->num_sq_entries || !VAR_3->sq_buf_size) {
  VAR_4 = VAR_0;
  goto init_ctrlq_exit;
 }

 VAR_3->sq.next_to_use = 0;
 VAR_3->sq.next_to_clean = 0;


 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4)
  goto init_ctrlq_exit;


 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  goto init_ctrlq_free_rings;


 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4)
  goto init_ctrlq_free_rings;


 VAR_3->sq.count = VAR_3->num_sq_entries;
 goto init_ctrlq_exit;

init_ctrlq_free_rings:
 FUNC_3(VAR_2, &VAR_3->sq);

init_ctrlq_exit:
 return VAR_4;
}
