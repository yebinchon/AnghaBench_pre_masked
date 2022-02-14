
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gxt4500_par {int dummy; } ;
struct fb_info {struct gxt4500_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gxt4500_par*,int ) ;
 int FUNC_1 (struct gxt4500_par*,int ,int) ;

__attribute__((used)) static int FUNC_2(int VAR_6, struct fb_info *VAR_7)
{
 struct gxt4500_par *VAR_8 = VAR_7->par;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_8, VAR_2);
 VAR_9 &= ~(VAR_4 | VAR_3 | VAR_5);
 VAR_10 = FUNC_0(VAR_8, VAR_0);
 VAR_10 |= VAR_1;
 switch (VAR_6) {
 case 129:
  VAR_10 &= ~VAR_1;
  break;
 case 130:
  VAR_9 |= VAR_4;
  break;
 case 131:
  VAR_9 |= VAR_3;
  break;
 case 128:
  VAR_9 |= VAR_5;
  break;
 default: ;
 }
 FUNC_1(VAR_8, VAR_2, VAR_9);
 FUNC_1(VAR_8, VAR_0, VAR_10);

 return 0;
}
