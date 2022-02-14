
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct mbxfb_info {TYPE_1__* fb_req; TYPE_1__* reg_req; int (* platform_remove ) (struct fb_info*) ;} ;
struct fb_info {struct mbxfb_info* par; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_info*) ;
 struct fb_info* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (struct fb_info*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 struct fb_info *VAR_3 = FUNC_2(VAR_2);

 FUNC_7(VAR_1, VAR_0);

 FUNC_1(VAR_3);

 if (VAR_3) {
  struct mbxfb_info *VAR_4 = VAR_3->par;

  FUNC_6(VAR_3);
  if (VAR_4) {
   if (VAR_4->platform_remove)
    VAR_4->platform_remove(VAR_3);


   if (VAR_4->reg_req)
    FUNC_3(VAR_4->reg_req->start,
         FUNC_4(VAR_4->reg_req));
   if (VAR_4->fb_req)
    FUNC_3(VAR_4->fb_req->start,
         FUNC_4(VAR_4->fb_req));
  }
  FUNC_0(VAR_3);
 }

 return 0;
}
