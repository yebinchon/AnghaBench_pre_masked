
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3, int VAR_4)
{
 FUNC_1(1, VAR_2, VAR_3, "s_stream(%d)\n", VAR_4);
 if (VAR_4) {

  FUNC_0(VAR_3, VAR_1, 0xcf, 0x30);

  FUNC_0(VAR_3, VAR_0, 0x7f, 0x00);
 } else {

  FUNC_0(VAR_3, VAR_1, 0xcf, 0x00);

  FUNC_0(VAR_3, VAR_0, 0x7f, 0x80);
 }
 return 0;
}
