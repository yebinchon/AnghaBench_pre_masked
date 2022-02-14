
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int config_flags; int irq; char** prod_id; struct pcan_pccard* priv; int dev; TYPE_1__** resource; } ;
struct pcan_pccard {int ioport_addr; int led_timer; int chan_count; void* fw_minor; void* fw_major; struct pcmcia_device* pdev; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,char*,void*,void*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pcan_pccard*) ;
 struct pcan_pccard* FUNC_5 (int,int ) ;
 int FUNC_6 (struct pcan_pccard*) ;
 int VAR_9 ;
 int FUNC_7 (struct pcan_pccard*) ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_8 (struct pcan_pccard*,int ) ;
 int FUNC_9 (struct pcan_pccard*,int) ;
 int FUNC_10 (struct pcmcia_device*) ;
 int FUNC_11 (struct pcmcia_device*) ;
 int FUNC_12 (struct pcmcia_device*,int ,int *) ;
 int FUNC_13 (int,int *,int ,int ,struct pcan_pccard*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_16(struct pcmcia_device *VAR_12)
{
 struct pcan_pccard *VAR_13;
 int VAR_14;

 VAR_12->config_flags |= VAR_1 | VAR_0;

 VAR_14 = FUNC_12(VAR_12, VAR_9, ((void*)0));
 if (VAR_14) {
  FUNC_0(&VAR_12->dev, "pcmcia_loop_config() error %d\n", VAR_14);
  goto probe_err_1;
 }

 if (!VAR_12->irq) {
  FUNC_0(&VAR_12->dev, "no irq assigned\n");
  VAR_14 = -VAR_2;
  goto probe_err_1;
 }

 VAR_14 = FUNC_11(VAR_12);
 if (VAR_14) {
  FUNC_0(&VAR_12->dev, "pcmcia_enable_device failed err=%d\n",
   VAR_14);
  goto probe_err_1;
 }

 VAR_13 = FUNC_5(sizeof(struct pcan_pccard), VAR_4);
 if (!VAR_13) {
  VAR_14 = -VAR_3;
  goto probe_err_2;
 }

 VAR_13->pdev = VAR_12;
 VAR_12->priv = VAR_13;


 VAR_13->ioport_addr = FUNC_2(VAR_12->resource[0]->start,
     FUNC_14(VAR_12->resource[0]));
 if (!VAR_13->ioport_addr) {
  FUNC_0(&VAR_12->dev, "couldn't map io port into io memory\n");
  VAR_14 = -VAR_3;
  goto probe_err_3;
 }
 VAR_13->fw_major = FUNC_8(VAR_13, VAR_6);
 VAR_13->fw_minor = FUNC_8(VAR_13, VAR_7);


 FUNC_1(&VAR_12->dev, "PEAK-System pcmcia card %s fw %d.%d\n",
  VAR_12->prod_id[1] ? VAR_12->prod_id[1] : "PCAN-PC Card",
  VAR_13->fw_major, VAR_13->fw_minor);


 FUNC_6(VAR_13);
 if (!VAR_13->chan_count) {
  VAR_14 = -VAR_3;
  goto probe_err_4;
 }


 FUNC_15(&VAR_13->led_timer, VAR_11, 0);


 VAR_14 = FUNC_13(VAR_12->irq, &VAR_10, VAR_5, VAR_8, VAR_13);
 if (VAR_14) {
  FUNC_0(&VAR_12->dev, "couldn't request irq%d\n", VAR_12->irq);
  goto probe_err_5;
 }


 FUNC_9(VAR_13, 1);

 return 0;

probe_err_5:

 FUNC_7(VAR_13);

probe_err_4:
 FUNC_3(VAR_13->ioport_addr);

probe_err_3:
 FUNC_4(VAR_13);
 VAR_12->priv = ((void*)0);

probe_err_2:
 FUNC_10(VAR_12);

probe_err_1:
 return VAR_14;
}
