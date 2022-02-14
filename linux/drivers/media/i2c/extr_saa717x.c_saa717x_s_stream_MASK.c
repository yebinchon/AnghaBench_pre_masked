
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct saa717x_state {int enable; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 struct saa717x_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct saa717x_state *VAR_3 = FUNC_1(VAR_1);

 FUNC_2(1, VAR_0, VAR_1, "decoder %s output\n",
   VAR_2 ? "enable" : "disable");
 VAR_3->enable = VAR_2;
 FUNC_0(VAR_1, 0x193, VAR_2 ? 0xa6 : 0x26);
 return 0;
}
