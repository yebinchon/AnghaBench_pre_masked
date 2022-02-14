
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_info*,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_2, struct fb_info *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_3, VAR_1);
  break;
 default:
  FUNC_1(VAR_3, VAR_0);
  break;
 }

 return 0;
}
