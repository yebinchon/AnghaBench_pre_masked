
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct sun6i_video {struct v4l2_format fmt; } ;


 int FUNC_0 (struct sun6i_video*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_1(struct sun6i_video *VAR_0, struct v4l2_format *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_0->fmt = *VAR_1;

 return 0;
}
