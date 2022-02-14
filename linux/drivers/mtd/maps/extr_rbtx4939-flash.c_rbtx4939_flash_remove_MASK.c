
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbtx4939_flash_info {scalar_t__ mtd; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct rbtx4939_flash_info* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct rbtx4939_flash_info *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1)
  return 0;

 if (VAR_1->mtd) {
  FUNC_1(VAR_1->mtd);
  FUNC_0(VAR_1->mtd);
 }
 return 0;
}
