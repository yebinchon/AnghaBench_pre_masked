
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_7__ {int priority; int notifier_call; } ;
struct TYPE_9__ {int of_reset_n_cells; int nr_resets; int of_node; int owner; int * ops; } ;
struct ath79_reset {TYPE_1__ restart_nb; TYPE_3__ rcdev; int lock; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,struct resource*) ;
 struct ath79_reset* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct ath79_reset*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 struct ath79_reset *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(&VAR_6->dev,
    sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_7(VAR_6, VAR_7);

 VAR_8 = FUNC_6(VAR_6, VAR_2, 0);
 VAR_7->base = FUNC_3(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 FUNC_9(&VAR_7->lock);
 VAR_7->rcdev.ops = &VAR_4;
 VAR_7->rcdev.owner = VAR_3;
 VAR_7->rcdev.of_node = VAR_6->dev.of_node;
 VAR_7->rcdev.of_reset_n_cells = 1;
 VAR_7->rcdev.nr_resets = 32;

 VAR_9 = FUNC_5(&VAR_6->dev, &VAR_7->rcdev);
 if (VAR_9)
  return VAR_9;

 VAR_7->restart_nb.notifier_call = VAR_5;
 VAR_7->restart_nb.priority = 128;

 VAR_9 = FUNC_8(&VAR_7->restart_nb);
 if (VAR_9)
  FUNC_2(&VAR_6->dev, "Failed to register restart handler\n");

 return 0;
}
