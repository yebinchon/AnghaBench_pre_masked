
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct cx18 {TYPE_2__* card; } ;
struct TYPE_3__ {int radio; int mask; } ;
struct TYPE_4__ {TYPE_1__ gpio_audio_input; } ;


 int FUNC_0 (struct cx18*,int ,int ) ;
 struct cx18* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct cx18 *VAR_1 = FUNC_1(VAR_0);






 FUNC_0(VAR_1, VAR_1->card->gpio_audio_input.mask,
   VAR_1->card->gpio_audio_input.radio);
 return 0;
}
