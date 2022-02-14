
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_audioout {scalar_t__ index; } ;
struct ivtv {TYPE_1__* card; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct ivtv* itv; } ;
struct TYPE_3__ {int * video_outputs; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, const struct v4l2_audioout *VAR_3)
{
 struct ivtv *VAR_4 = FUNC_0(VAR_2)->itv;

 if (VAR_4->card->video_outputs == ((void*)0) || VAR_3->index != 0)
  return -VAR_0;
 return 0;
}
