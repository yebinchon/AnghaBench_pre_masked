
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_5__ {int irq; int cmd_complete; int lock; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 TYPE_1__* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int,int ,int ,char*,TYPE_1__**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct platform_device*) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct platform_device*,TYPE_1__*) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_4 = FUNC_2(&VAR_5->dev,
        sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_8(VAR_5, VAR_4);

 VAR_6 = FUNC_7(VAR_5, 0);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_5->dev, "Invalid IRQ, using polling mode\n");
 } else {
  VAR_7 = FUNC_3(&VAR_5->dev, VAR_6, VAR_3,
           VAR_2, "intel_punit_ipc",
           &VAR_4);
  if (VAR_7) {
   FUNC_0(&VAR_5->dev, "Failed to request irq: %d\n", VAR_6);
   return VAR_7;
  }
  VAR_4->irq = VAR_6;
 }

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  goto out;

 VAR_4->dev = &VAR_5->dev;
 FUNC_6(&VAR_4->lock);
 FUNC_4(&VAR_4->cmd_complete);

out:
 return VAR_7;
}
