
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct CHIPSTATE*) ;
 int VAR_6 ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct CHIPSTATE *VAR_7)
{
 struct v4l2_subdev *VAR_8 = &VAR_7->sd;
 int VAR_9,VAR_10;

 VAR_10 = VAR_4;

 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9 < 0)
  return VAR_10;

 if (VAR_9 & VAR_1)
  VAR_10 = VAR_5;
 if (VAR_9 & VAR_0)
  VAR_10 |= VAR_2 | VAR_3;
 FUNC_1(1, VAR_6, VAR_8,
  "tda9873_getrxsubchans(): raw chip read: %d, return: %d\n",
  VAR_9, VAR_10);
 return VAR_10;
}
