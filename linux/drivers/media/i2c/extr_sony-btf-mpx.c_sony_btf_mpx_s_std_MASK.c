
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct sony_btf_mpx {int mpxmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sony_btf_mpx*) ;
 struct sony_btf_mpx* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4, v4l2_std_id VAR_5)
{
 struct sony_btf_mpx *VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = 0;

 if (VAR_5 & VAR_0)
  VAR_7 = 1;
 else if (VAR_5 & VAR_2)
  VAR_7 = 4;
 else if (VAR_5 & VAR_1)
  VAR_7 = 6;
 else if (VAR_5 & VAR_3)
  VAR_7 = 11;

 if (VAR_7 != VAR_6->mpxmode) {
  VAR_6->mpxmode = VAR_7;
  FUNC_0(VAR_6);
 }
 return 0;
}
