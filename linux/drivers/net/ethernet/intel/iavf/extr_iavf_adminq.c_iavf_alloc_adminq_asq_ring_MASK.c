
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int desc_buf; int cmd_buf; } ;
struct TYPE_4__ {int num_asq_entries; TYPE_1__ asq; } ;
struct iavf_hw {TYPE_2__ aq; } ;
struct iavf_asq_cmd_details {int dummy; } ;
struct iavf_aq_desc {int dummy; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;


 int VAR_0 ;
 int FUNC_0 (struct iavf_hw*,int *,int ,int,int ) ;
 int FUNC_1 (struct iavf_hw*,int *,int) ;
 int FUNC_2 (struct iavf_hw*,int *) ;
 int VAR_1 ;

__attribute__((used)) static enum iavf_status FUNC_3(struct iavf_hw *VAR_2)
{
 enum iavf_status VAR_3;

 VAR_3 = FUNC_0(VAR_2, &VAR_2->aq.asq.desc_buf,
      VAR_1,
      (VAR_2->aq.num_asq_entries *
      sizeof(struct iavf_aq_desc)),
      VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2, &VAR_2->aq.asq.cmd_buf,
       (VAR_2->aq.num_asq_entries *
       sizeof(struct iavf_asq_cmd_details)));
 if (VAR_3) {
  FUNC_2(VAR_2, &VAR_2->aq.asq.desc_buf);
  return VAR_3;
 }

 return VAR_3;
}
