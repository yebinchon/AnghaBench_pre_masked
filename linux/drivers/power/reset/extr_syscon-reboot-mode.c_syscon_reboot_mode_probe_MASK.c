
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int write; TYPE_2__* dev; } ;
struct syscon_reboot_mode {int mask; int offset; TYPE_3__ reboot; int map; } ;
struct TYPE_7__ {int of_node; TYPE_1__* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_6__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct syscon_reboot_mode* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ,char*,int*) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 int VAR_5;
 struct syscon_reboot_mode *VAR_6;

 VAR_6 = FUNC_3(&VAR_4->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->reboot.dev = &VAR_4->dev;
 VAR_6->reboot.write = VAR_3;
 VAR_6->mask = 0xffffffff;

 VAR_6->map = FUNC_6(VAR_4->dev.parent->of_node);
 if (FUNC_0(VAR_6->map))
  return FUNC_1(VAR_6->map);

 if (FUNC_5(VAR_4->dev.of_node, "offset",
     &VAR_6->offset))
  return -VAR_0;

 FUNC_5(VAR_4->dev.of_node, "mask", &VAR_6->mask);

 VAR_5 = FUNC_4(&VAR_4->dev, &VAR_6->reboot);
 if (VAR_5)
  FUNC_2(&VAR_4->dev, "can't register reboot mode\n");

 return VAR_5;
}
