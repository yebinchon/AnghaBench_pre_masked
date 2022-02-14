
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c2410_nand_info {int cpu_type; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int driver_data; } ;


 TYPE_1__* FUNC_0 (struct platform_device*) ;
 struct s3c2410_nand_info* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct s3c2410_nand_info *VAR_1 = FUNC_1(VAR_0);

 VAR_1->cpu_type = FUNC_0(VAR_0)->driver_data;

 return 0;
}
