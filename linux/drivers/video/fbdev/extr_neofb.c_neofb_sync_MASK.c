
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int accel; } ;
struct fb_info {TYPE_1__ fix; } ;






 int FUNC_0 (struct fb_info*) ;

__attribute__((used)) static int
FUNC_1(struct fb_info *VAR_0)
{
 switch (VAR_0->fix.accel) {
  case 131:
  case 130:
  case 129:
  case 128:
   FUNC_0(VAR_0);
   break;
  default:
   break;
 }
 return 0;
}
