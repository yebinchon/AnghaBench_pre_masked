
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct TYPE_4__ {scalar_t__ g450dac; } ;
struct matrox_fb_info {TYPE_3__ altout; TYPE_2__* outputs; TYPE_1__ devflags; } ;
struct TYPE_5__ {void* mode; int * data; int * output; void* src; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct matrox_fb_info *VAR_2)
{
 if (VAR_2->devflags.g450dac) {
  FUNC_0(&VAR_2->altout.lock);
  VAR_2->outputs[1].src = VAR_1;
  VAR_2->outputs[1].output = ((void*)0);
  VAR_2->outputs[1].data = ((void*)0);
  VAR_2->outputs[1].mode = VAR_0;
  VAR_2->outputs[2].src = VAR_1;
  VAR_2->outputs[2].output = ((void*)0);
  VAR_2->outputs[2].data = ((void*)0);
  VAR_2->outputs[2].mode = VAR_0;
  FUNC_1(&VAR_2->altout.lock);
 }
}
