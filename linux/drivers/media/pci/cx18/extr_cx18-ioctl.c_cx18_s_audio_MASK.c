
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_audio {scalar_t__ index; } ;
struct file {int dummy; } ;
struct cx18 {scalar_t__ nof_audio_inputs; scalar_t__ audio_input; } ;
struct TYPE_2__ {struct cx18* cx; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx18*) ;
 TYPE_1__* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2, const struct v4l2_audio *VAR_3)
{
 struct cx18 *VAR_4 = FUNC_1(VAR_2)->cx;

 if (VAR_3->index >= VAR_4->nof_audio_inputs)
  return -VAR_0;
 VAR_4->audio_input = VAR_3->index;
 FUNC_0(VAR_4);
 return 0;
}
