
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; scalar_t__ next_to_clean; scalar_t__ next_to_use; } ;
struct TYPE_4__ {scalar_t__ num_asq_entries; scalar_t__ asq_buf_size; TYPE_1__ asq; } ;
struct iavf_hw {TYPE_2__ aq; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iavf_hw*) ;
 int FUNC_1 (struct iavf_hw*) ;
 int FUNC_2 (struct iavf_hw*) ;
 int FUNC_3 (struct iavf_hw*) ;

__attribute__((used)) static enum iavf_status FUNC_4(struct iavf_hw *VAR_2)
{
 enum iavf_status VAR_3 = 0;

 if (VAR_2->aq.asq.count > 0) {

  VAR_3 = VAR_1;
  goto init_adminq_exit;
 }


 if ((VAR_2->aq.num_asq_entries == 0) ||
     (VAR_2->aq.asq_buf_size == 0)) {
  VAR_3 = VAR_0;
  goto init_adminq_exit;
 }

 VAR_2->aq.asq.next_to_use = 0;
 VAR_2->aq.asq.next_to_clean = 0;


 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  goto init_adminq_exit;


 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  goto init_adminq_free_rings;


 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto init_adminq_free_rings;


 VAR_2->aq.asq.count = VAR_2->aq.num_asq_entries;
 goto init_adminq_exit;

init_adminq_free_rings:
 FUNC_3(VAR_2);

init_adminq_exit:
 return VAR_3;
}
