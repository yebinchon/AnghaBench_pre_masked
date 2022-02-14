
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {struct resource* resource; } ;
struct TYPE_2__ {int base; } ;
struct onenand_info {TYPE_1__ onenand; int mtd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct onenand_info*) ;
 int FUNC_2 (int *) ;
 struct onenand_info* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ,unsigned long) ;
 unsigned long FUNC_5 (struct resource*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct onenand_info *VAR_1 = FUNC_3(VAR_0);
 struct resource *VAR_2 = VAR_0->resource;
 unsigned long VAR_3 = FUNC_5(VAR_2);

 if (VAR_1) {
  FUNC_2(&VAR_1->mtd);
  FUNC_4(VAR_2->start, VAR_3);
  FUNC_0(VAR_1->onenand.base);
  FUNC_1(VAR_1);
 }

 return 0;
}
