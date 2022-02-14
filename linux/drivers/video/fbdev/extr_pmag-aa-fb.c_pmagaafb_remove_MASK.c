
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ end; scalar_t__ start; } ;
struct tc_dev {TYPE_1__ resource; } ;
struct fb_info {int screen_base; struct aafb_par* par; } ;
struct device {int dummy; } ;
struct aafb_par {int mmio; } ;
typedef scalar_t__ resource_size_t ;


 struct fb_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 struct tc_dev* FUNC_5 (struct device*) ;
 int FUNC_6 (struct fb_info*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0)
{
 struct tc_dev *VAR_1 = FUNC_5(VAR_0);
 struct fb_info *VAR_2 = FUNC_0(VAR_0);
 struct aafb_par *VAR_3 = VAR_2->par;
 resource_size_t VAR_4, VAR_5;

 FUNC_3(VAR_0);
 FUNC_6(VAR_2);
 FUNC_2(VAR_2->screen_base);
 FUNC_2(VAR_3->mmio);
 VAR_4 = VAR_1->resource.start;
 VAR_5 = VAR_1->resource.end - VAR_4 + 1;
 FUNC_4(VAR_4, VAR_5);
 FUNC_1(VAR_2);
 return 0;
}
