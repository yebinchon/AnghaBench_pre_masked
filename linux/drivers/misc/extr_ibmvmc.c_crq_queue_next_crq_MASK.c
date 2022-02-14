
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvmc_crq_msg {int valid; } ;
struct crq_queue {size_t cur; size_t size; int lock; struct ibmvmc_crq_msg* msgs; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct ibmvmc_crq_msg *FUNC_3(struct crq_queue *VAR_0)
{
 struct ibmvmc_crq_msg *VAR_1;
 unsigned long VAR_2;

 FUNC_1(&VAR_0->lock, VAR_2);
 VAR_1 = &VAR_0->msgs[VAR_0->cur];
 if (VAR_1->valid & 0x80) {
  if (++VAR_0->cur == VAR_0->size)
   VAR_0->cur = 0;




  FUNC_0();
 } else {
  VAR_1 = ((void*)0);
 }

 FUNC_2(&VAR_0->lock, VAR_2);

 return VAR_1;
}
