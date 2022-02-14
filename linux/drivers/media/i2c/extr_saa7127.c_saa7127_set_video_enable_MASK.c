
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct saa7127_state {int reg_2d; int reg_61; int video_enable; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 struct saa7127_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct saa7127_state *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2) {
  FUNC_2(1, VAR_0, VAR_1, "Enable Video Output\n");
  FUNC_0(VAR_1, 0x2d, VAR_3->reg_2d);
  FUNC_0(VAR_1, 0x61, VAR_3->reg_61);
 } else {
  FUNC_2(1, VAR_0, VAR_1, "Disable Video Output\n");
  FUNC_0(VAR_1, 0x2d, (VAR_3->reg_2d & 0xf0));
  FUNC_0(VAR_1, 0x61, (VAR_3->reg_61 | 0xc0));
 }
 VAR_3->video_enable = VAR_2;
 return 0;
}
