
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mx3fb_info {int blank; struct mx3fb_data* mx3fb; } ;
struct mx3fb_data {int backlight_level; } ;
struct TYPE_2__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ screen_base; struct mx3fb_info* par; } ;







 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mx3fb_info*) ;
 int FUNC_3 (struct mx3fb_info*) ;
 int FUNC_4 (struct mx3fb_data*,int ) ;

__attribute__((used)) static void FUNC_5(int VAR_0, struct fb_info *VAR_1)
{
 struct mx3fb_info *VAR_2 = VAR_1->par;
 struct mx3fb_data *VAR_3 = VAR_2->mx3fb;
 int VAR_4 = VAR_2->blank;

 VAR_2->blank = VAR_0;







 if (VAR_0 > 129 && VAR_4 > 129)
  return;

 switch (VAR_0) {
 case 130:
 case 128:
 case 132:
 case 131:
  FUNC_4(VAR_3, 0);
  FUNC_0((char *)VAR_1->screen_base, 0, VAR_1->fix.smem_len);

  FUNC_1(25);
  FUNC_2(VAR_2);
  break;
 case 129:
  FUNC_3(VAR_2);
  FUNC_4(VAR_3, VAR_3->backlight_level);
  break;
 }
}
