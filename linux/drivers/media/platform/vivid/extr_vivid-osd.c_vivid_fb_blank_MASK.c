
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int dummy; } ;
struct fb_info {scalar_t__ par; } ;







 int FUNC_0 (struct vivid_dev*,int,char*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct fb_info *VAR_1)
{
 struct vivid_dev *VAR_2 = (struct vivid_dev *)VAR_1->par;

 FUNC_0(VAR_2, 1, "Set blanking mode : %d\n", VAR_0);
 switch (VAR_0) {
 case 129:
  break;
 case 131:
 case 132:
 case 128:
 case 130:
  break;
 }
 return 0;
}
