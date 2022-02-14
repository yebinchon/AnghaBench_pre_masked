
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {int data; } ;


 struct of_device_id* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 const struct of_device_id *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->dev.of_node);

 return FUNC_1(VAR_1, VAR_2->data);
}
