
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ionic_queue {int num_descs; TYPE_2__* head; TYPE_1__* tail; } ;
struct TYPE_4__ {unsigned int index; } ;
struct TYPE_3__ {unsigned int index; } ;



__attribute__((used)) static bool FUNC_0(struct ionic_queue *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;

 VAR_2 = VAR_0->num_descs - 1;
 VAR_3 = VAR_0->tail->index;
 VAR_4 = VAR_0->head->index;

 return ((VAR_1 - VAR_3) & VAR_2) < ((VAR_4 - VAR_3) & VAR_2);
}
