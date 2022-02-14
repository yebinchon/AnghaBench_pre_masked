
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency {scalar_t__ tuner; int frequency; int type; } ;
struct max2175 {int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct max2175* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
          struct v4l2_frequency *VAR_3)
{
 struct max2175 *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = 0;

 if (VAR_3->tuner != 0)
  return -VAR_0;


 VAR_3->type = VAR_1;
 VAR_3->frequency = VAR_4->freq;

 return VAR_5;
}
