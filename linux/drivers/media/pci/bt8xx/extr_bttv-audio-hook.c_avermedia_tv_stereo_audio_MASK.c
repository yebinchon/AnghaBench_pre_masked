
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct bttv*,char*) ;

void FUNC_2(struct bttv *VAR_7, struct v4l2_tuner *VAR_8, int VAR_9)
{
 int VAR_10 = 0;

 if (!VAR_9) {

  VAR_8->audmode = VAR_1;
  VAR_8->rxsubchans = VAR_4 |
    VAR_5 |
    VAR_2 |
    VAR_3;

  return;
 }

 switch (VAR_8->audmode) {
 case 129:
  VAR_10 = 0x01;
  break;
 case 128:
  VAR_10 = 0x02;
  break;
 default:
  VAR_10 = 0;
  break;
 }
 FUNC_0(VAR_10, ~0x03, VAR_0);
 if (VAR_6)
  FUNC_1(VAR_7, "avermedia");
}
