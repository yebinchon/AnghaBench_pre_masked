
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; int bah; int bal; int len; int tail; int head; } ;
struct TYPE_4__ {int arq_mutex; TYPE_1__ arq; } ;
struct iavf_hw {TYPE_2__ aq; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;


 int VAR_0 ;
 int FUNC_0 (struct iavf_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iavf_hw*,int ,int ) ;

__attribute__((used)) static enum iavf_status FUNC_4(struct iavf_hw *VAR_1)
{
 enum iavf_status VAR_2 = 0;

 FUNC_1(&VAR_1->aq.arq_mutex);

 if (VAR_1->aq.arq.count == 0) {
  VAR_2 = VAR_0;
  goto shutdown_arq_out;
 }


 FUNC_3(VAR_1, VAR_1->aq.arq.head, 0);
 FUNC_3(VAR_1, VAR_1->aq.arq.tail, 0);
 FUNC_3(VAR_1, VAR_1->aq.arq.len, 0);
 FUNC_3(VAR_1, VAR_1->aq.arq.bal, 0);
 FUNC_3(VAR_1, VAR_1->aq.arq.bah, 0);

 VAR_1->aq.arq.count = 0;


 FUNC_0(VAR_1);

shutdown_arq_out:
 FUNC_2(&VAR_1->aq.arq_mutex);
 return VAR_2;
}
