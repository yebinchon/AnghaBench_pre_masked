
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb862xxfb_par {int dummy; } ;
struct fb_info {int dev; struct mb862xxfb_par* par; } ;







 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 unsigned long FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(int VAR_3, struct fb_info *VAR_4)
{
 struct mb862xxfb_par *VAR_5 = VAR_4->par;
 unsigned long VAR_6;

 FUNC_0(VAR_4->dev, "blank mode=%d\n", VAR_3);

 switch (VAR_3) {
 case 130:
  VAR_6 = FUNC_1(VAR_2, VAR_1);
  VAR_6 &= ~VAR_0;
  FUNC_2(VAR_2, VAR_1, VAR_6);
  break;
 case 129:
  VAR_6 = FUNC_1(VAR_2, VAR_1);
  VAR_6 |= VAR_0;
  FUNC_2(VAR_2, VAR_1, VAR_6);
  break;
 case 131:
 case 128:
 case 132:
 default:
  return 1;
 }
 return 0;
}
