
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* u32 ;
struct stmpe_platform_data {int irq_trigger; int irq_gpio; scalar_t__ irq_over_gpio; } ;
struct stmpe_client_info {int irq; TYPE_3__* dev; int (* init ) (struct stmpe*) ;int client; } ;
struct stmpe {int partnum; int irq; TYPE_3__* dev; TYPE_1__* variant; void* vio; void* vcc; int num_gpios; int regs; struct stmpe_client_info* ci; struct stmpe_platform_data* pdata; int client; void* adc_freq; void* ref_sel; void* mod_12b; void* sample_time; int lock; int irq_lock; } ;
struct device_node {int dummy; } ;
typedef enum stmpe_partnum { ____Placeholder_stmpe_partnum } stmpe_partnum ;
struct TYPE_13__ {struct device_node* of_node; } ;
struct TYPE_12__ {int name; int num_gpios; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_3__*,char*,...) ;
 int FUNC_2 (TYPE_3__*,char*,int ) ;
 int FUNC_3 (TYPE_3__*,struct stmpe*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,int ,int ,char*) ;
 void* FUNC_6 (TYPE_3__*,int,int ) ;
 void* FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (TYPE_3__*,int,int *,int ,int,char*,struct stmpe*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (struct device_node*,char*,int *) ;
 int FUNC_14 (struct device_node*,char*,void**) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (struct stmpe*) ;
 int FUNC_17 (struct stmpe*) ;
 int VAR_6 ;
 int FUNC_18 (struct stmpe*,struct device_node*) ;
 TYPE_1__** VAR_7 ;
 int FUNC_19 (struct stmpe_platform_data*,struct device_node*) ;
 TYPE_1__** VAR_8 ;
 int FUNC_20 (struct stmpe*) ;

int FUNC_21(struct stmpe_client_info *VAR_9, enum stmpe_partnum VAR_10)
{
 struct stmpe_platform_data *VAR_11;
 struct device_node *VAR_12 = VAR_9->dev->of_node;
 struct stmpe *VAR_13;
 int VAR_14;
 u32 VAR_15;

 VAR_11 = FUNC_6(VAR_9->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 FUNC_19(VAR_11, VAR_12);

 if (FUNC_13(VAR_12, "interrupts", ((void*)0)) == ((void*)0))
  VAR_9->irq = -1;

 VAR_13 = FUNC_6(VAR_9->dev, sizeof(struct stmpe), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 FUNC_12(&VAR_13->irq_lock);
 FUNC_12(&VAR_13->lock);

 if (!FUNC_14(VAR_12, "st,sample-time", &VAR_15))
  VAR_13->sample_time = VAR_15;
 if (!FUNC_14(VAR_12, "st,mod-12b", &VAR_15))
  VAR_13->mod_12b = VAR_15;
 if (!FUNC_14(VAR_12, "st,ref-sel", &VAR_15))
  VAR_13->ref_sel = VAR_15;
 if (!FUNC_14(VAR_12, "st,adc-freq", &VAR_15))
  VAR_13->adc_freq = VAR_15;

 VAR_13->dev = VAR_9->dev;
 VAR_13->client = VAR_9->client;
 VAR_13->pdata = VAR_11;
 VAR_13->ci = VAR_9;
 VAR_13->partnum = VAR_10;
 VAR_13->variant = VAR_8[VAR_10];
 VAR_13->regs = VAR_13->variant->regs;
 VAR_13->num_gpios = VAR_13->variant->num_gpios;
 VAR_13->vcc = FUNC_7(VAR_9->dev, "vcc");
 if (!FUNC_0(VAR_13->vcc)) {
  VAR_14 = FUNC_15(VAR_13->vcc);
  if (VAR_14)
   FUNC_4(VAR_9->dev, "failed to enable VCC supply\n");
 }
 VAR_13->vio = FUNC_7(VAR_9->dev, "vio");
 if (!FUNC_0(VAR_13->vio)) {
  VAR_14 = FUNC_15(VAR_13->vio);
  if (VAR_14)
   FUNC_4(VAR_9->dev, "failed to enable VIO supply\n");
 }
 FUNC_3(VAR_13->dev, VAR_13);

 if (VAR_9->init)
  VAR_9->init(VAR_13);

 if (VAR_11->irq_over_gpio) {
  VAR_14 = FUNC_5(VAR_9->dev, VAR_11->irq_gpio,
    VAR_3, "stmpe");
  if (VAR_14) {
   FUNC_1(VAR_13->dev, "failed to request IRQ GPIO: %d\n",
     VAR_14);
   return VAR_14;
  }

  VAR_13->irq = FUNC_9(VAR_11->irq_gpio);
 } else {
  VAR_13->irq = VAR_9->irq;
 }

 if (VAR_13->irq < 0) {

  FUNC_2(VAR_13->dev,
   "%s configured in no-irq mode by platform data\n",
   VAR_13->variant->name);
  if (!VAR_7[VAR_13->partnum]) {
   FUNC_1(VAR_13->dev,
    "%s does not support no-irq mode!\n",
    VAR_13->variant->name);
   return -VAR_0;
  }
  VAR_13->variant = VAR_7[VAR_13->partnum];
 } else if (VAR_11->irq_trigger == VAR_5) {
  VAR_11->irq_trigger = FUNC_10(VAR_13->irq);
 }

 VAR_14 = FUNC_16(VAR_13);
 if (VAR_14)
  return VAR_14;

 if (VAR_13->irq >= 0) {
  VAR_14 = FUNC_18(VAR_13, VAR_12);
  if (VAR_14)
   return VAR_14;

  VAR_14 = FUNC_8(VAR_9->dev, VAR_13->irq, ((void*)0),
    VAR_6, VAR_11->irq_trigger | VAR_4,
    "stmpe", VAR_13);
  if (VAR_14) {
   FUNC_1(VAR_13->dev, "failed to request IRQ: %d\n",
     VAR_14);
   return VAR_14;
  }
 }

 VAR_14 = FUNC_17(VAR_13);
 if (!VAR_14)
  return 0;

 FUNC_1(VAR_13->dev, "failed to add children\n");
 FUNC_11(VAR_13->dev);

 return VAR_14;
}
