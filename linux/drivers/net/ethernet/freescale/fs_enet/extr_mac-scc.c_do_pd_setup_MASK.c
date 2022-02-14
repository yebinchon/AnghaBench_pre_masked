
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_3__ {void* sccp; void* ep; } ;
struct fs_enet_private {TYPE_1__ scc; int interrupt; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ,int) ;
 struct platform_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct fs_enet_private *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_3(VAR_1->dev);

 VAR_1->interrupt = FUNC_1(VAR_2->dev.of_node, 0);
 if (!VAR_1->interrupt)
  return -VAR_0;

 VAR_1->scc.sccp = FUNC_2(VAR_2->dev.of_node, 0);
 if (!VAR_1->scc.sccp)
  return -VAR_0;

 VAR_1->scc.ep = FUNC_2(VAR_2->dev.of_node, 1);
 if (!VAR_1->scc.ep) {
  FUNC_0(VAR_1->scc.sccp);
  return -VAR_0;
 }

 return 0;
}
