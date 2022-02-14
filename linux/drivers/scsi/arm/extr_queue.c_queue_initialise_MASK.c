
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int list; int * SCpnt; } ;
struct TYPE_6__ {TYPE_2__* alloc; int free; int head; int queue_lock; } ;
typedef TYPE_1__ Queue_t ;
typedef TYPE_2__ QE_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

int FUNC_5 (Queue_t *VAR_3)
{
 unsigned int VAR_4 = VAR_1;
 QE_t *VAR_5;

 FUNC_4(&VAR_3->queue_lock);
 FUNC_0(&VAR_3->head);
 FUNC_0(&VAR_3->free);







 VAR_3->alloc = VAR_5 = FUNC_2(VAR_4, sizeof(QE_t), VAR_0);
 if (VAR_5) {
  for (; VAR_4; VAR_5++, VAR_4--) {
   FUNC_1(VAR_5, VAR_2);
   VAR_5->SCpnt = ((void*)0);
   FUNC_3(&VAR_5->list, &VAR_3->free);
  }
 }

 return VAR_3->alloc != ((void*)0);
}
