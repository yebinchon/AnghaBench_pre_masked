
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
struct TYPE_5__ {void* mode; int * output; struct matrox_fb_info* data; int default_src; int src; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct matrox_fb_info*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct matrox_fb_info *VAR_3)
{
 if (VAR_3->devflags.g450dac) {
  FUNC_0(&VAR_3->altout.lock);
  FUNC_1(VAR_3);
  VAR_3->outputs[1].src = VAR_3->outputs[1].default_src;
  VAR_3->outputs[1].data = VAR_3;
  VAR_3->outputs[1].output = &VAR_1;
  VAR_3->outputs[1].mode = VAR_0;
  VAR_3->outputs[2].src = VAR_3->outputs[2].default_src;
  VAR_3->outputs[2].data = VAR_3;
  VAR_3->outputs[2].output = &VAR_2;
  VAR_3->outputs[2].mode = VAR_0;
  FUNC_2(&VAR_3->altout.lock);
 }
}
