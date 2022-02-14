
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm2fb_par {int video; } ;
struct fb_info {struct pm2fb_par* par; } ;


 int FUNC_0 (char*,int) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pm2fb_par*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_4, struct fb_info *VAR_5)
{
 struct pm2fb_par *VAR_6 = VAR_5->par;
 u32 VAR_7 = VAR_6->video;

 FUNC_0("blank_mode %d\n", VAR_4);

 switch (VAR_4) {
 case 129:

  VAR_7 |= VAR_2;
  break;
 case 131:

  VAR_7 &= ~VAR_2;
  break;
 case 128:

  VAR_7 &= ~(VAR_3 | VAR_0);
  break;
 case 132:

  VAR_7 &= ~(VAR_1 | VAR_0);
  break;
 case 130:

  VAR_7 &= ~(VAR_3 | VAR_1 | VAR_0);
  break;
 }
 FUNC_1(VAR_6, VAR_7);
 return 0;
}
