
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct platform_device*,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 int VAR_4;

 if (VAR_3->dev.of_node) {
  VAR_4 = FUNC_2(VAR_3, &VAR_2);
 } else if (FUNC_1(&VAR_3->dev)) {
  VAR_4 = FUNC_2(VAR_3, &VAR_1);
 } else {
  FUNC_0(&VAR_3->dev, "DT and ACPI disabled\n");
  return -VAR_0;
 }

 return VAR_4;
}
