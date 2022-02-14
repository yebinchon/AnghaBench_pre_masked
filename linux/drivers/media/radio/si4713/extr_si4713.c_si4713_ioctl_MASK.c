
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct si4713_rnl {int rnl; int frequency; } ;
struct si4713_device {int tune_rnl; int power_state; } ;


 long VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct si4713_device*,int ,int ) ;
 int FUNC_1 (struct si4713_device*) ;
 struct si4713_device* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static long FUNC_4(struct v4l2_subdev *VAR_2, unsigned int VAR_3, void *VAR_4)
{
 struct si4713_device *VAR_5 = FUNC_2(VAR_2);
 struct si4713_rnl *VAR_6 = VAR_4;
 u16 VAR_7;
 int VAR_8 = 0;

 if (!VAR_4)
  return -VAR_0;

 switch (VAR_3) {
 case 128:
  VAR_7 = FUNC_3(VAR_6->frequency);

  if (VAR_5->power_state) {

   VAR_8 = FUNC_0(VAR_5, VAR_7, 0);
   if (VAR_8 < 0)
    return VAR_8;

   VAR_8 = FUNC_1(VAR_5);
   if (VAR_8 < 0)
    return VAR_8;
  }
  VAR_6->rnl = VAR_5->tune_rnl;
  break;

 default:

  VAR_8 = -VAR_1;
 }

 return VAR_8;
}
