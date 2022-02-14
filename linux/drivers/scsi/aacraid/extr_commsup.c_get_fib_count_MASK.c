
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {struct list_head* next; } ;
struct hw_fib {int dummy; } ;
struct aac_dev {int fib_lock; struct list_head fib_list; TYPE_2__* init; } ;
struct TYPE_3__ {int adapter_fibs_size; } ;
struct TYPE_4__ {TYPE_1__ r7; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct aac_dev *VAR_0)
{
 unsigned int VAR_1 = 0;
 struct list_head *VAR_2;
 unsigned long VAR_3;







 VAR_1 = FUNC_0(VAR_0->init->r7.adapter_fibs_size)
   / sizeof(struct hw_fib);
 FUNC_1(&VAR_0->fib_lock, VAR_3);
 VAR_2 = VAR_0->fib_list.next;
 while (VAR_2 != &VAR_0->fib_list) {
  VAR_2 = VAR_2->next;
  ++VAR_1;
 }
 FUNC_2(&VAR_0->fib_lock, VAR_3);

 return VAR_1;
}
