
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps65910 {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tps65910* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct tps65910 *VAR_3;

 VAR_3 = FUNC_0(VAR_2->dev.parent);
 FUNC_1(&VAR_2->dev, &VAR_1);
 FUNC_1(&VAR_2->dev, &VAR_0);

 return 0;
}
