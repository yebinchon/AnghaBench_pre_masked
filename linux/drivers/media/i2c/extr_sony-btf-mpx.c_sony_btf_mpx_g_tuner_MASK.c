
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int capability; int rxsubchans; int audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct sony_btf_mpx {int audmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sony_btf_mpx* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_8, struct v4l2_tuner *VAR_9)
{
 struct sony_btf_mpx *VAR_10 = FUNC_0(VAR_8);

 VAR_9->capability = VAR_2 |
  VAR_3 | VAR_0 |
  VAR_1;
 VAR_9->rxsubchans = VAR_6 |
  VAR_7 | VAR_4 |
  VAR_5;
 VAR_9->audmode = VAR_10->audmode;
 return 0;
}
