
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int priority; int notifier_call; } ;
struct xgene_reboot_context {int mask; int csr; TYPE_1__ restart_handler; struct device* dev; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct xgene_reboot_context* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,char*,int*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct xgene_reboot_context *VAR_5;
 struct device *VAR_6 = &VAR_4->dev;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_6, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->csr = FUNC_3(VAR_6->of_node, 0);
 if (!VAR_5->csr) {
  FUNC_0(VAR_6, "can not map resource\n");
  return -VAR_0;
 }

 if (FUNC_4(VAR_6->of_node, "mask", &VAR_5->mask))
  VAR_5->mask = 0xFFFFFFFF;

 VAR_5->dev = VAR_6;
 VAR_5->restart_handler.notifier_call = VAR_3;
 VAR_5->restart_handler.priority = 128;
 VAR_7 = FUNC_5(&VAR_5->restart_handler);
 if (VAR_7) {
  FUNC_2(VAR_5->csr);
  FUNC_0(VAR_6, "cannot register restart handler (err=%d)\n", VAR_7);
 }

 return VAR_7;
}
