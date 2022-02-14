
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {int * parent; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_0);
 if (VAR_4)
  FUNC_0(VAR_3, "failed to unregister restart handler\n");

 FUNC_1(&VAR_1);
 VAR_1.parent = ((void*)0);

 return VAR_4;
}
