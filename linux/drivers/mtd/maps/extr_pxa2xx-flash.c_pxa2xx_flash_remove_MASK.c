
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cached; scalar_t__ virt; } ;
struct pxa2xx_flash_info {TYPE_1__ map; int mtd; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pxa2xx_flash_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct pxa2xx_flash_info* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct pxa2xx_flash_info *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(VAR_1->mtd);

 FUNC_2(VAR_1->mtd);
 FUNC_0(VAR_1->map.virt);
 if (VAR_1->map.cached)
  FUNC_0(VAR_1->map.cached);
 FUNC_1(VAR_1);
 return 0;
}
