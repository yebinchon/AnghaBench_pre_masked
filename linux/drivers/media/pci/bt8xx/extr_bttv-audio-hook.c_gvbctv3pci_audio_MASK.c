
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
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int,int) ;

void FUNC_2(struct bttv *VAR_4, struct v4l2_tuner *VAR_5, int VAR_6)
{
 unsigned int VAR_7;

 if (!VAR_6) {

  VAR_5->audmode = 130;
  VAR_5->rxsubchans = VAR_2 |
    VAR_3 |
    VAR_0 |
    VAR_1;

  return;
 }

 FUNC_1(0x300, 0x300);
 switch (VAR_5->audmode) {
 case 130:
 default:
  VAR_7 = 0x000;
  break;
 case 129:
  VAR_7 = 0x300;
  break;
 case 128:
  VAR_7 = 0x200;
  break;
 }
 FUNC_0(0x300, VAR_7);
}
