
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tga_par {int tga_mem_base; } ;
struct fb_info {int cmap; struct tga_par* par; } ;
struct device {int dummy; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_3__ {scalar_t__ end; scalar_t__ start; } ;
struct TYPE_4__ {TYPE_1__ resource; } ;


 int FUNC_0 (struct device*) ;
 struct fb_info* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (struct device*) ;
 TYPE_2__* FUNC_10 (struct device*) ;
 int FUNC_11 (struct fb_info*) ;

__attribute__((used)) static void FUNC_12(struct device *VAR_0)
{
 resource_size_t VAR_1 = 0, VAR_2 = 0;
 int VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = FUNC_0(VAR_0);
 struct fb_info *VAR_5 = ((void*)0);
 struct tga_par *VAR_6;

 VAR_5 = FUNC_1(VAR_0);
 if (!VAR_5)
  return;

 VAR_6 = VAR_5->par;
 FUNC_11(VAR_5);
 FUNC_3(&VAR_5->cmap);
 FUNC_5(VAR_6->tga_mem_base);
 if (VAR_3) {
  VAR_1 = FUNC_7(FUNC_9(VAR_0), 0);
  VAR_2 = FUNC_6(FUNC_9(VAR_0), 0);
 }
 if (VAR_4) {
  VAR_1 = FUNC_10(VAR_0)->resource.start;
  VAR_2 = FUNC_10(VAR_0)->resource.end - VAR_1 + 1;
 }
 FUNC_8(VAR_1, VAR_2);
 FUNC_4(VAR_5);
}
