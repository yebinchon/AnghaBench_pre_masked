
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reset_control {int dummy; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;
struct mdio_device {struct reset_control* reset_ctrl; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 struct reset_control* FUNC_2 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_3(struct mdio_device *VAR_2)
{
 struct reset_control *VAR_3 = ((void*)0);

 if (VAR_2->dev.of_node)
  VAR_3 = FUNC_2(&VAR_2->dev,
        "phy");
 if (FUNC_1(VAR_3) == -VAR_0 ||
     FUNC_1(VAR_3) == -VAR_1)
  VAR_3 = ((void*)0);
 else if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_2->reset_ctrl = VAR_3;

 return 0;
}
