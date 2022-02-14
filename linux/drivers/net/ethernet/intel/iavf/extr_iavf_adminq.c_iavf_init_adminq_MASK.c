
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num_arq_entries; scalar_t__ num_asq_entries; scalar_t__ arq_buf_size; scalar_t__ asq_buf_size; int asq_cmd_timeout; } ;
struct iavf_hw {TYPE_1__ aq; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iavf_hw*) ;
 int FUNC_1 (struct iavf_hw*) ;
 int FUNC_2 (struct iavf_hw*) ;
 int FUNC_3 (struct iavf_hw*) ;

enum iavf_status FUNC_4(struct iavf_hw *VAR_2)
{
 enum iavf_status VAR_3;


 if ((VAR_2->aq.num_arq_entries == 0) ||
     (VAR_2->aq.num_asq_entries == 0) ||
     (VAR_2->aq.arq_buf_size == 0) ||
     (VAR_2->aq.asq_buf_size == 0)) {
  VAR_3 = VAR_1;
  goto init_adminq_exit;
 }


 FUNC_0(VAR_2);


 VAR_2->aq.asq_cmd_timeout = VAR_0;


 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto init_adminq_destroy_locks;


 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  goto init_adminq_free_asq;


 goto init_adminq_exit;

init_adminq_free_asq:
 FUNC_3(VAR_2);
init_adminq_destroy_locks:

init_adminq_exit:
 return VAR_3;
}
