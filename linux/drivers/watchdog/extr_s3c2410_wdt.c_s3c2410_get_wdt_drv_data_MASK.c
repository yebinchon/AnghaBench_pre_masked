
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c2410_wdt_variant {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {scalar_t__ driver_data; } ;


 struct s3c2410_wdt_variant* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static inline const struct s3c2410_wdt_variant *
FUNC_2(struct platform_device *VAR_0)
{
 const struct s3c2410_wdt_variant *VAR_1;

 VAR_1 = FUNC_0(&VAR_0->dev);
 if (!VAR_1) {

  VAR_1 = (struct s3c2410_wdt_variant *)
      FUNC_1(VAR_0)->driver_data;
 }

 return VAR_1;
}
