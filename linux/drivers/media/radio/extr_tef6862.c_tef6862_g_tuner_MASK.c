
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int signal; int audmode; int capability; int rxsubchans; int rangehigh; int rangelow; int type; int name; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_7, struct v4l2_tuner *VAR_8)
{
 if (VAR_8->index > 0)
  return -VAR_0;


 FUNC_0(VAR_8->name, "FM", sizeof(VAR_8->name));
 VAR_8->type = VAR_5;
 VAR_8->rangelow = VAR_2;
 VAR_8->rangehigh = VAR_1;
 VAR_8->rxsubchans = VAR_6;
 VAR_8->capability = VAR_3;
 VAR_8->audmode = VAR_4;
 VAR_8->signal = FUNC_1(FUNC_2(VAR_7));

 return 0;
}
