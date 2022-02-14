
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ end; scalar_t__ start; } ;
struct tc_dev {TYPE_1__ resource; } ;
struct pmagbbfb_par {int mmio; int smem; } ;
struct fb_info {int cmap; struct pmagbbfb_par* par; } ;
struct device {int dummy; } ;
typedef scalar_t__ resource_size_t ;


 struct fb_info* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 struct tc_dev* FUNC_6 (struct device*) ;
 int FUNC_7 (struct fb_info*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_0)
{
 struct tc_dev *VAR_1 = FUNC_6(VAR_0);
 struct fb_info *VAR_2 = FUNC_0(VAR_0);
 struct pmagbbfb_par *VAR_3 = VAR_2->par;
 resource_size_t VAR_4, VAR_5;

 FUNC_4(VAR_0);
 FUNC_7(VAR_2);
 FUNC_3(VAR_3->smem);
 FUNC_3(VAR_3->mmio);
 VAR_4 = VAR_1->resource.start;
 VAR_5 = VAR_1->resource.end - VAR_4 + 1;
 FUNC_5(VAR_4, VAR_5);
 FUNC_1(&VAR_2->cmap);
 FUNC_2(VAR_2);
 return 0;
}
