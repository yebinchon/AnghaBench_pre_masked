
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ivtv {int v4l2_cap; unsigned int active_output; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct ivtv* itv; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, unsigned int *VAR_4)
{
 struct ivtv *VAR_5 = FUNC_0(VAR_3)->itv;

 if (!(VAR_5->v4l2_cap & VAR_1))
  return -VAR_0;

 *VAR_4 = VAR_5->active_output;

 return 0;
}
