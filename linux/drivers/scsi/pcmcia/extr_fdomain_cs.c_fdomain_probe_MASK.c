
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int config_flags; TYPE_1__** resource; struct Scsi_Host* priv; int dev; int irq; int config_regs; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int VAR_5 ;
 struct Scsi_Host* FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int FUNC_4 (struct pcmcia_device*,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_7(struct pcmcia_device *VAR_6)
{
 int VAR_7;
 struct Scsi_Host *VAR_8;

 VAR_6->config_flags |= VAR_1 | VAR_0;
 VAR_6->config_regs = VAR_4;

 VAR_7 = FUNC_4(VAR_6, VAR_5, ((void*)0));
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  goto fail_disable;

 if (!FUNC_6(VAR_6->resource[0]->start, VAR_3,
       "fdomain_cs"))
  goto fail_disable;

 VAR_8 = FUNC_1(VAR_6->resource[0]->start, VAR_6->irq, 7, &VAR_6->dev);
 if (!VAR_8) {
  FUNC_0(&VAR_6->dev, "Controller initialization failed");
  VAR_7 = -VAR_2;
  goto fail_release;
 }

 VAR_6->priv = VAR_8;

 return 0;

fail_release:
 FUNC_5(VAR_6->resource[0]->start, VAR_3);
fail_disable:
 FUNC_2(VAR_6);
 return VAR_7;
}
