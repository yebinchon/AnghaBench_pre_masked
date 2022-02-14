
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ionic_queue {TYPE_2__* head; TYPE_1__* tail; } ;
struct TYPE_4__ {unsigned int index; int left; } ;
struct TYPE_3__ {unsigned int index; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct ionic_queue *VAR_0)
{
 unsigned int VAR_1 = VAR_0->tail->index;

 if (VAR_0->head->index >= VAR_1)
  VAR_1 += VAR_0->head->left - 1;
 else
  VAR_1 -= VAR_0->head->index + 1;

 return VAR_1;
}
