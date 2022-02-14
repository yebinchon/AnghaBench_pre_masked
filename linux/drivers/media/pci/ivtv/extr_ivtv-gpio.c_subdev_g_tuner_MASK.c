
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_tuner {int rxsubchans; } ;
struct v4l2_subdev {int dummy; } ;
struct ivtv {TYPE_2__* card; } ;
struct TYPE_3__ {int mask; } ;
struct TYPE_4__ {TYPE_1__ gpio_audio_detect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct ivtv* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_5, struct v4l2_tuner *VAR_6)
{
 struct ivtv *VAR_7 = FUNC_1(VAR_5);
 u16 VAR_8;

 VAR_8 = VAR_7->card->gpio_audio_detect.mask;
 if (VAR_8 == 0 || (FUNC_0(VAR_0) & VAR_8))
  VAR_6->rxsubchans = VAR_4 |
   VAR_1 | VAR_2;
 else
  VAR_6->rxsubchans = VAR_3;
 return 0;
}
