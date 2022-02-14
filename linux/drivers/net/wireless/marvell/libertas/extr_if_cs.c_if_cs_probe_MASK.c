
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {int config_flags; int dev; int card_id; int manf_id; TYPE_1__** resource; int irq; struct if_cs_card* priv; } ;
struct lbs_private {int * reset_deep_sleep_wakeup; int * exit_deep_sleep; int * enter_deep_sleep; int hw_host_to_card; struct if_cs_card* card; } ;
struct if_cs_card {int align_regs; scalar_t__ model; int iobase; struct lbs_private* priv; struct pcmcia_device* p_dev; } ;
struct TYPE_3__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct lbs_private*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct lbs_private*) ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int FUNC_3 (struct if_cs_card*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 struct if_cs_card* FUNC_6 (int,int ) ;
 struct lbs_private* FUNC_7 (struct if_cs_card*,int *) ;
 int FUNC_8 (char*,int ,TYPE_1__*) ;
 int FUNC_9 (struct lbs_private*,int *,scalar_t__,int ,int ) ;
 int FUNC_10 (struct lbs_private*) ;
 int FUNC_11 (struct pcmcia_device*) ;
 int FUNC_12 (struct pcmcia_device*) ;
 scalar_t__ FUNC_13 (struct pcmcia_device*,int ,int *) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_16(struct pcmcia_device *VAR_18)
{
 int VAR_19 = -VAR_4;
 unsigned int VAR_20;
 struct lbs_private *VAR_21;
 struct if_cs_card *VAR_22;

 VAR_22 = FUNC_6(sizeof(struct if_cs_card), VAR_5);
 if (!VAR_22)
  goto out;

 VAR_22->p_dev = VAR_18;
 VAR_18->priv = VAR_22;

 VAR_18->config_flags |= VAR_1 | VAR_0;

 if (FUNC_13(VAR_18, VAR_16, ((void*)0))) {
  FUNC_14("error in pcmcia_loop_config\n");
  goto out1;
 }






 if (!VAR_18->irq)
  goto out1;


 VAR_22->iobase = FUNC_4(VAR_18->resource[0]->start,
    FUNC_15(VAR_18->resource[0]));
 if (!VAR_22->iobase) {
  FUNC_14("error in ioport_map\n");
  VAR_19 = -VAR_2;
  goto out1;
 }

 VAR_19 = FUNC_12(VAR_18);
 if (VAR_19) {
  FUNC_14("error in pcmcia_enable_device\n");
  goto out2;
 }


 FUNC_8("irq %d, io %pR", VAR_18->irq, VAR_18->resource[0]);





 VAR_22->align_regs = 0;

 VAR_22->model = FUNC_2(VAR_18->manf_id, VAR_18->card_id);
 if (VAR_22->model == VAR_13) {
  FUNC_14("unsupported manf_id 0x%04x / card_id 0x%04x\n",
         VAR_18->manf_id, VAR_18->card_id);
  VAR_19 = -VAR_3;
  goto out2;
 }


 VAR_20 = FUNC_3(VAR_22, VAR_9);
 if (VAR_22->model == VAR_10) {
  VAR_22->align_regs = 1;
  if (VAR_20 < VAR_6) {
   FUNC_14("8305 rev B0 and older are not supported\n");
   VAR_19 = -VAR_3;
   goto out2;
  }
 }

 if ((VAR_22->model == VAR_11) && VAR_20 < VAR_7) {
  FUNC_14("8381 rev B2 and older are not supported\n");
  VAR_19 = -VAR_3;
  goto out2;
 }

 if ((VAR_22->model == VAR_12) && VAR_20 < VAR_8) {
  FUNC_14("8385 rev B0 and older are not supported\n");
  VAR_19 = -VAR_3;
  goto out2;
 }


 VAR_21 = FUNC_7(VAR_22, &VAR_18->dev);
 if (FUNC_0(VAR_21)) {
  VAR_19 = FUNC_1(VAR_21);
  goto out2;
 }


 VAR_22->priv = VAR_21;
 VAR_21->card = VAR_22;
 VAR_21->hw_host_to_card = VAR_15;
 VAR_21->enter_deep_sleep = ((void*)0);
 VAR_21->exit_deep_sleep = ((void*)0);
 VAR_21->reset_deep_sleep_wakeup = ((void*)0);


 VAR_19 = FUNC_9(VAR_21, &VAR_18->dev, VAR_22->model, VAR_14,
         VAR_17);
 if (VAR_19) {
  FUNC_14("failed to find firmware (%d)\n", VAR_19);
  goto out3;
 }

 goto out;

out3:
 FUNC_10(VAR_21);
out2:
 FUNC_5(VAR_22->iobase);
out1:
 FUNC_11(VAR_18);
out:
 return VAR_19;
}
