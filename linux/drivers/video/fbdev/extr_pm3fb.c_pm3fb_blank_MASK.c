
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm3_par {int video; } ;
struct fb_info {struct pm3_par* par; } ;


 int FUNC_0 (char*,int) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct pm3_par*,int) ;
 int FUNC_2 (struct pm3_par*,int ,int) ;

__attribute__((used)) static int FUNC_3(int VAR_7, struct fb_info *VAR_8)
{
 struct pm3_par *VAR_9 = VAR_8->par;
 u32 VAR_10 = VAR_9->video;







 VAR_10 &= ~(VAR_4 |
     VAR_6);
 VAR_10 |= VAR_3 |
   VAR_5;

 switch (VAR_7) {
 case 129:
  VAR_10 |= VAR_2;
  break;
 case 131:
  VAR_10 &= ~VAR_2;
  break;
 case 132:
  VAR_10 &= ~(VAR_4 |
     VAR_1);
  break;
 case 128:
  VAR_10 &= ~(VAR_6 |
     VAR_1);
  break;
 case 130:
  VAR_10 &= ~(VAR_4 |
     VAR_6 |
     VAR_1);
  break;
 default:
  FUNC_0("Unsupported blanking %d\n", VAR_7);
  return 1;
 }

 FUNC_1(VAR_9, 1);
 FUNC_2(VAR_9, VAR_0, VAR_10);
 return 0;
}
