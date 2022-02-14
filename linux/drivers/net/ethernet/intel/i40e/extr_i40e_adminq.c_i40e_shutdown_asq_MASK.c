
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; int bah; int bal; int len; int tail; int head; } ;
struct TYPE_4__ {int asq_mutex; TYPE_1__ asq; } ;
struct i40e_hw {TYPE_2__ aq; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static i40e_status FUNC_4(struct i40e_hw *VAR_1)
{
 i40e_status VAR_2 = 0;

 FUNC_1(&VAR_1->aq.asq_mutex);

 if (VAR_1->aq.asq.count == 0) {
  VAR_2 = VAR_0;
  goto shutdown_asq_out;
 }


 FUNC_3(VAR_1, VAR_1->aq.asq.head, 0);
 FUNC_3(VAR_1, VAR_1->aq.asq.tail, 0);
 FUNC_3(VAR_1, VAR_1->aq.asq.len, 0);
 FUNC_3(VAR_1, VAR_1->aq.asq.bal, 0);
 FUNC_3(VAR_1, VAR_1->aq.asq.bah, 0);

 VAR_1->aq.asq.count = 0;


 FUNC_0(VAR_1);

shutdown_asq_out:
 FUNC_2(&VAR_1->aq.asq_mutex);
 return VAR_2;
}
