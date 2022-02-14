
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platram_info {scalar_t__ mtd; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct platram_info*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct platram_info*,int ) ;
 struct platram_info* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct platram_info *VAR_2 = FUNC_5(VAR_1);

 FUNC_0(&VAR_1->dev, "removing device\n");

 if (VAR_2 == ((void*)0))
  return 0;

 if (VAR_2->mtd) {
  FUNC_3(VAR_2->mtd);
  FUNC_2(VAR_2->mtd);
 }



 FUNC_4(VAR_2, VAR_0);

 FUNC_1(VAR_2);

 return 0;
}
