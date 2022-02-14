
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * of_node; } ;
struct platform_device {TYPE_1__ dev; int id; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;

int FUNC_5(struct platform_device *VAR_1)
{
 FUNC_0(VAR_1->dev.of_node == ((void*)0));



 VAR_1->name = FUNC_1(&VAR_1->dev);
 VAR_1->id = VAR_0;






 FUNC_4(&VAR_1->dev, FUNC_3(VAR_1->dev.of_node));

 return FUNC_2(&VAR_1->dev);
}
