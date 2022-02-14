
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlogicpti {int bursts; struct platform_device* op; } ;
struct TYPE_3__ {TYPE_2__* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_4__ {struct TYPE_4__* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct qlogicpti *VAR_2)
{
 struct platform_device *VAR_3 = VAR_2->op;
 u8 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_3->dev.of_node, "burst-sizes", 0xff);
 VAR_5 = FUNC_0(VAR_3->dev.of_node->parent, "burst-sizes", 0xff);
 if (VAR_5 != 0xff)
  VAR_4 &= VAR_5;
 if (VAR_4 == 0xff ||
     (VAR_4 & VAR_0) == 0 ||
     (VAR_4 & VAR_1) == 0)
  VAR_4 = (VAR_1 - 1);

 VAR_2->bursts = VAR_4;
}
