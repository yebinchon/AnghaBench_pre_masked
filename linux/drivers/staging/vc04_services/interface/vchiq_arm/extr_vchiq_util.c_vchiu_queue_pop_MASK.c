
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiu_queue {int write; int read; int size; int pop; struct vchiq_header** storage; int push; } ;
struct vchiq_header {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

struct vchiq_header *FUNC_3(struct vchiu_queue *VAR_1)
{
 struct vchiq_header *VAR_2;

 while (VAR_1->write == VAR_1->read) {
  if (FUNC_2(&VAR_1->push))
   FUNC_1(VAR_0);
 }

 VAR_2 = VAR_1->storage[VAR_1->read & (VAR_1->size - 1)];
 VAR_1->read++;

 FUNC_0(&VAR_1->pop);

 return VAR_2;
}
