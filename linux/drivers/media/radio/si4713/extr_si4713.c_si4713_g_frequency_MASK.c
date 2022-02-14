
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency {int frequency; scalar_t__ tuner; } ;
struct si4713_device {int frequency; scalar_t__ power_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct si4713_device*,int,int *,int *,int *,int *) ;
 struct si4713_device* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, struct v4l2_frequency *VAR_2)
{
 struct si4713_device *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = 0;

 if (VAR_2->tuner)
  return -VAR_0;

 if (VAR_3->power_state) {
  u16 VAR_5;
  u8 VAR_6, VAR_7, VAR_8;

  VAR_4 = FUNC_1(VAR_3, 0x00, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_3->frequency = VAR_5;
 }

 VAR_2->frequency = FUNC_0(VAR_3->frequency);

 return VAR_4;
}
