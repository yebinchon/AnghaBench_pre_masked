
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ type; scalar_t__ audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct sony_btf_mpx {scalar_t__ audmode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sony_btf_mpx*) ;
 struct sony_btf_mpx* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2, const struct v4l2_tuner *VAR_3)
{
 struct sony_btf_mpx *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3->type != VAR_1)
  return -VAR_0;

 if (VAR_3->audmode != VAR_4->audmode) {
  VAR_4->audmode = VAR_3->audmode;
  FUNC_0(VAR_4);
 }
 return 0;
}
