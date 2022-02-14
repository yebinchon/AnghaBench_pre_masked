
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_6__ {int fccp; } ;
struct TYPE_4__ {int fecp; } ;
struct fs_enet_private {TYPE_3__ fcc; TYPE_1__ fec; int interrupt; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct platform_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct fs_enet_private *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_2(VAR_1->dev);

 VAR_1->interrupt = FUNC_0(VAR_2->dev.of_node, 0);
 if (!VAR_1->interrupt)
  return -VAR_0;

 VAR_1->fec.fecp = FUNC_1(VAR_2->dev.of_node, 0);
 if (!VAR_1->fcc.fccp)
  return -VAR_0;

 return 0;
}
