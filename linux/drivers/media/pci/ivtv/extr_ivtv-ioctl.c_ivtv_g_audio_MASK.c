
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_audio {int index; } ;
struct ivtv {int audio_input; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct ivtv* itv; } ;


 TYPE_1__* FUNC_0 (void*) ;
 int FUNC_1 (struct ivtv*,int ,struct v4l2_audio*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_audio *VAR_2)
{
 struct ivtv *VAR_3 = FUNC_0(VAR_1)->itv;

 VAR_2->index = VAR_3->audio_input;
 return FUNC_1(VAR_3, VAR_2->index, VAR_2);
}
