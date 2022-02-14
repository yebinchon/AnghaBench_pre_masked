
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * irqs; } ;
struct platform_device {TYPE_1__ archdata; } ;
struct esp {int dev; struct Scsi_Host* host; } ;
struct Scsi_Host {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,struct esp*) ;
 int VAR_1 ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct esp *VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_2->host;
 struct platform_device *VAR_4 = FUNC_1(VAR_2->dev);

 VAR_3->irq = VAR_4->archdata.irqs[0];
 return FUNC_0(VAR_3->irq, VAR_1, VAR_0, "ESP", VAR_2);
}
