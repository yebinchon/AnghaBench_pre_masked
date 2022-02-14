
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int pa; } ;
struct TYPE_5__ {TYPE_1__ desc_buf; int bal; int bah; int len; int tail; int head; } ;
struct TYPE_6__ {int num_asq_entries; TYPE_2__ asq; } ;
struct iavf_hw {TYPE_3__ aq; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iavf_hw*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iavf_hw*,int ,int) ;

__attribute__((used)) static enum iavf_status FUNC_4(struct iavf_hw *VAR_2)
{
 enum iavf_status VAR_3 = 0;
 u32 VAR_4 = 0;


 FUNC_3(VAR_2, VAR_2->aq.asq.head, 0);
 FUNC_3(VAR_2, VAR_2->aq.asq.tail, 0);


 FUNC_3(VAR_2, VAR_2->aq.asq.len, (VAR_2->aq.num_asq_entries |
      VAR_1));
 FUNC_3(VAR_2, VAR_2->aq.asq.bal, FUNC_0(VAR_2->aq.asq.desc_buf.pa));
 FUNC_3(VAR_2, VAR_2->aq.asq.bah, FUNC_2(VAR_2->aq.asq.desc_buf.pa));


 VAR_4 = FUNC_1(VAR_2, VAR_2->aq.asq.bal);
 if (VAR_4 != FUNC_0(VAR_2->aq.asq.desc_buf.pa))
  VAR_3 = VAR_0;

 return VAR_3;
}
