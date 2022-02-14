
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency_band {scalar_t__ tuner; scalar_t__ index; } ;
struct max2175 {struct v4l2_frequency_band* bands_rf; } ;


 int VAR_0 ;
 struct max2175* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
       struct v4l2_frequency_band *VAR_2)
{
 struct max2175 *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2->tuner != 0 || VAR_2->index != 0)
  return -VAR_0;

 *VAR_2 = *VAR_3->bands_rf;

 return 0;
}
