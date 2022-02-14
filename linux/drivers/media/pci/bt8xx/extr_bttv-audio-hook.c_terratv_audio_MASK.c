
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
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct bttv*,char*) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int,int) ;

void FUNC_3(struct bttv *VAR_6, struct v4l2_tuner *VAR_7, int VAR_8)
{
 unsigned int VAR_9 = 0;

 if (!VAR_8) {

  VAR_7->audmode = VAR_0;
  VAR_7->rxsubchans = VAR_3 |
    VAR_4 |
    VAR_1 |
    VAR_2;

  return;
 }

 FUNC_2(0x180000, 0x180000);
 switch (VAR_7->audmode) {
 case 129:
  VAR_9 = 0x080000;
  break;
 case 128:
  VAR_9 = 0x180000;
  break;
 default:
  VAR_9 = 0;
  break;
 }
 FUNC_1(0x180000, VAR_9);
 if (VAR_5)
  FUNC_0(VAR_6, "terratv");
}
