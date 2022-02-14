
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int audmode; scalar_t__ index; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_9, const struct v4l2_tuner *VAR_10)
{
 int VAR_11 = FUNC_0(VAR_9);
 int VAR_12;

 if (VAR_10->index)
  return -VAR_0;

 VAR_11 = VAR_11 < 0 ? 0 : VAR_11;
 if (VAR_11 == 0 || VAR_11 == 0x60)
  VAR_12 = VAR_5;
 else if (VAR_11 == 0x40)
  VAR_12 = (VAR_10->audmode == VAR_7) ?
   VAR_5 : VAR_6;
 else {
  switch (VAR_10->audmode) {
  case 129:
   VAR_12 = VAR_2;
   break;
  case 128:
   VAR_12 = VAR_4;
   break;
  default:
   VAR_12 = VAR_3;
   break;
  }
 }
 FUNC_2(1, VAR_8, VAR_9, "TDA9840_SWITCH: 0x%02x\n", VAR_12);
 FUNC_1(VAR_9, VAR_1, VAR_12);
 return 0;
}
