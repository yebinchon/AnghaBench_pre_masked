
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct s2250 {int audio_input; int audio; } ;


 int VAR_0 ;
 struct s2250* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, u32 VAR_2, u32 VAR_3,
     u32 VAR_4)
{
 struct s2250 *VAR_5 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 0:
  FUNC_1(VAR_5->audio, 0x08, 0x02);
  break;
 case 1:
  FUNC_1(VAR_5->audio, 0x08, 0x04);
  break;
 case 2:
  FUNC_1(VAR_5->audio, 0x08, 0x05);
  break;
 default:
  return -VAR_0;
 }
 VAR_5->audio_input = VAR_2;
 return 0;
}
