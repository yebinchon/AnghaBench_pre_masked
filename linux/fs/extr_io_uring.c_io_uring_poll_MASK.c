
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct io_ring_ctx {scalar_t__ cached_sq_head; scalar_t__ cached_cq_tail; TYPE_3__* rings; int cq_wait; } ;
struct file {struct io_ring_ctx* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_5__ {int head; } ;
struct TYPE_4__ {int tail; } ;
struct TYPE_6__ {scalar_t__ sq_ring_entries; TYPE_2__ cq; TYPE_1__ sq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_4, poll_table *VAR_5)
{
 struct io_ring_ctx *VAR_6 = VAR_4->private_data;
 __poll_t VAR_7 = 0;

 FUNC_1(VAR_4, &VAR_6->cq_wait, VAR_5);




 FUNC_2();
 if (FUNC_0(VAR_6->rings->sq.tail) - VAR_6->cached_sq_head !=
     VAR_6->rings->sq_ring_entries)
  VAR_7 |= VAR_1 | VAR_3;
 if (FUNC_0(VAR_6->rings->cq.head) != VAR_6->cached_cq_tail)
  VAR_7 |= VAR_0 | VAR_2;

 return VAR_7;
}
