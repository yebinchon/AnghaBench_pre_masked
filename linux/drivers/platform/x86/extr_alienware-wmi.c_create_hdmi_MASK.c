
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->dev.kobj, &VAR_0);
 if (VAR_2)
  FUNC_0(VAR_1);
 return VAR_2;
}
