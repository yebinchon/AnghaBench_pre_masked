
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int capability; int rxsubchans; } ;
struct v4l2_subdev {int dummy; } ;
struct saa6588 {scalar_t__ sync; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct saa6588* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3, struct v4l2_tuner *VAR_4)
{
 struct saa6588 *VAR_5 = FUNC_0(VAR_3);

 VAR_4->capability |= VAR_0 | VAR_1;
 if (VAR_5->sync)
  VAR_4->rxsubchans |= VAR_2;
 return 0;
}
