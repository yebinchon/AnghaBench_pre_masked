
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viosrp_crq {scalar_t__ valid; } ;
struct crq_queue {size_t cur; size_t size; int lock; struct viosrp_crq* msgs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct viosrp_crq *FUNC_3(struct crq_queue *VAR_1)
{
 struct viosrp_crq *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_3);
 VAR_2 = &VAR_1->msgs[VAR_1->cur];
 if (VAR_2->valid != VAR_0) {
  if (++VAR_1->cur == VAR_1->size)
   VAR_1->cur = 0;




  FUNC_0();
 } else
  VAR_2 = ((void*)0);
 FUNC_2(&VAR_1->lock, VAR_3);

 return VAR_2;
}
