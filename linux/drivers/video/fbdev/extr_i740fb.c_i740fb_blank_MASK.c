
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i740fb_par {int dummy; } ;
struct fb_info {struct i740fb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i740fb_par*,scalar_t__) ;
 int FUNC_1 (struct i740fb_par*,scalar_t__,unsigned char) ;
 int FUNC_2 (struct i740fb_par*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(int VAR_8, struct fb_info *VAR_9)
{
 struct i740fb_par *VAR_10 = VAR_9->par;

 unsigned char VAR_11;
 int VAR_12;

 switch (VAR_8) {
 case 129:
 case 131:
  VAR_11 = 0x00;
  VAR_12 = VAR_3 | VAR_6;
  break;
 case 128:
  VAR_11 = 0x20;
  VAR_12 = VAR_3 | VAR_5;
  break;
 case 132:
  VAR_11 = 0x20;
  VAR_12 = VAR_2 | VAR_6;
  break;
 case 130:
  VAR_11 = 0x20;
  VAR_12 = VAR_2 | VAR_5;
  break;
 default:
  return -VAR_1;
 }

 FUNC_1(VAR_10, VAR_4, 0x01);
 VAR_11 |= FUNC_0(VAR_10, VAR_4 + 1) & ~0x20;
 FUNC_1(VAR_10, VAR_4, 0x01);
 FUNC_1(VAR_10, VAR_4 + 1, VAR_11);


 FUNC_2(VAR_10, VAR_7, VAR_0, VAR_12);


 return (VAR_8 == 131) ? 1 : 0;
}
