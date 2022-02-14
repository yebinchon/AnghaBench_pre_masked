
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct controller_priv {int reset_gpiod; TYPE_1__* class_dev; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int) ;
 struct controller_priv* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct controller_priv *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = VAR_2->class_dev->id;

 FUNC_0(VAR_2->class_dev);
 FUNC_2(&VAR_0, VAR_3);
 FUNC_1(VAR_2->reset_gpiod, 1);
 return 0;
}
