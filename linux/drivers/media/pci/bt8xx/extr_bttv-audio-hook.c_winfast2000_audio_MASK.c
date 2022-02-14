
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int audmode; int rxsubchans; } ;
struct bttv {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bttv*,char*) ;
 int FUNC_1 (int,unsigned long) ;

void FUNC_2(struct bttv *VAR_5, struct v4l2_tuner *VAR_6, int VAR_7)
{
 unsigned long VAR_8;

 if (!VAR_7) {

  VAR_6->audmode = 131;
  VAR_6->rxsubchans = VAR_2 |
    VAR_3 |
    VAR_0 |
    VAR_1;

  return;
 }


 switch (VAR_6->audmode) {
 case 129:
 case 131:
  VAR_8 = 0x420000;
  break;
 case 130:
  VAR_8 = 0x410000;
  break;
 case 128:
  VAR_8 = 0x020000;
  break;
 default:
  return;
 }

 FUNC_1(0x430000, VAR_8);
 if (VAR_4)
  FUNC_0(VAR_5, "winfast2000");
}
