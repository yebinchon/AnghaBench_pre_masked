
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct au1200fb_device* par; } ;
struct au1200fb_device {int pd; } ;


 int VAR_0 ;





 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_1(int VAR_3, struct fb_info *VAR_4)
{
 struct au1200fb_device *VAR_5 = VAR_4->par;


 if (VAR_1)
  return 0;

 switch (VAR_3) {

 case 129:
 case 131:

  FUNC_0(VAR_2, VAR_5->pd);
  break;
 case 128:
 case 132:
 case 130:

  FUNC_0(((void*)0), VAR_5->pd);
  break;
 default:
  break;

 }


 return (VAR_3 == 131) ? -VAR_0 : 0;
}
