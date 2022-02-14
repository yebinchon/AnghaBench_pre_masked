
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct as3722_poweroff {TYPE_1__* dev; int as3722; } ;
struct TYPE_4__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct as3722_poweroff* VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 struct as3722_poweroff* FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (struct device_node*,char*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_6)
{
 struct as3722_poweroff *VAR_7;
 struct device_node *VAR_8 = VAR_6->dev.parent->of_node;

 if (!VAR_8)
  return -VAR_0;

 if (!FUNC_2(VAR_8, "ams,system-power-controller"))
  return 0;

 VAR_7 = FUNC_1(&VAR_6->dev, sizeof(*VAR_7),
    VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->as3722 = FUNC_0(VAR_6->dev.parent);
 VAR_7->dev = &VAR_6->dev;
 VAR_4 = VAR_7;
 if (!VAR_5)
  VAR_5 = VAR_3;

 return 0;
}
