
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_13__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct pcs_soc_data {int flags; } ;
struct pcs_pdata {scalar_t__ irq; scalar_t__ rearm; } ;
struct TYPE_12__ {int npins; int owner; int * confops; int * pmxops; int * pctlops; int name; } ;
struct TYPE_14__ {scalar_t__ irq; scalar_t__ rearm; } ;
struct pcs_device {int width; int fmask; int fshift; int fmax; int foff; int pctl; int size; TYPE_1__ desc; TYPE_2__* dev; int flags; TYPE_4__ socdata; int write; int read; int base; struct resource* res; scalar_t__ bits_per_mux; int gpiofuncs; int mutex; int lock; struct device_node* np; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 struct pcs_pdata* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 struct pcs_device* FUNC_8 (TYPE_2__*,int,int ) ;
 struct resource* FUNC_9 (TYPE_2__*,int ,int ,int ) ;
 scalar_t__ FUNC_10 (struct device_node*,int ) ;
 int FUNC_11 (TYPE_4__*,struct pcs_soc_data const*,int) ;
 int FUNC_12 (int *) ;
 struct pcs_soc_data* FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (struct device_node*,char*) ;
 int FUNC_15 (struct device_node*,char*,int*) ;
 int FUNC_16 (struct device_node*,struct pcs_device*) ;
 int FUNC_17 (struct pcs_device*) ;
 int FUNC_18 (struct pcs_device*) ;
 int FUNC_19 (struct pcs_device*,struct device_node*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_20 (struct pcs_device*,struct device_node*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_21 (int ) ;
 int FUNC_22 (TYPE_1__*,TYPE_2__*,struct pcs_device*,int *) ;
 struct resource* FUNC_23 (struct platform_device*,int ,int ) ;
 int FUNC_24 (struct platform_device*,struct pcs_device*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct resource*) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_21)
{
 struct device_node *VAR_22 = VAR_21->dev.of_node;
 struct pcs_pdata *VAR_23;
 struct resource *VAR_24;
 struct pcs_device *VAR_25;
 const struct pcs_soc_data *VAR_26;
 int VAR_27;

 VAR_26 = FUNC_13(&VAR_21->dev);
 if (FUNC_1(!VAR_26))
  return -VAR_2;

 VAR_25 = FUNC_8(&VAR_21->dev, sizeof(*VAR_25), VAR_5);
 if (!VAR_25)
  return -VAR_4;

 VAR_25->dev = &VAR_21->dev;
 VAR_25->np = VAR_22;
 FUNC_25(&VAR_25->lock);
 FUNC_12(&VAR_25->mutex);
 FUNC_0(&VAR_25->gpiofuncs);
 VAR_25->flags = VAR_26->flags;
 FUNC_11(&VAR_25->socdata, VAR_26, sizeof(*VAR_26));

 VAR_27 = FUNC_15(VAR_22, "pinctrl-single,register-width",
       &VAR_25->width);
 if (VAR_27) {
  FUNC_3(VAR_25->dev, "register width not specified\n");

  return VAR_27;
 }

 VAR_27 = FUNC_15(VAR_22, "pinctrl-single,function-mask",
       &VAR_25->fmask);
 if (!VAR_27) {
  VAR_25->fshift = FUNC_2(VAR_25->fmask);
  VAR_25->fmax = VAR_25->fmask >> VAR_25->fshift;
 } else {

  VAR_25->fmask = 0;
  VAR_25->fshift = 0;
  VAR_25->fmax = 0;
 }

 VAR_27 = FUNC_15(VAR_22, "pinctrl-single,function-off",
     &VAR_25->foff);
 if (VAR_27)
  VAR_25->foff = VAR_10;

 VAR_25->bits_per_mux = FUNC_14(VAR_22,
        "pinctrl-single,bit-per-mux");
 VAR_27 = FUNC_20(VAR_25, VAR_22,
           VAR_25->bits_per_mux ? 2 : 1);
 if (VAR_27) {
  FUNC_3(&VAR_21->dev, "unable to patch #pinctrl-cells\n");

  return VAR_27;
 }

 VAR_24 = FUNC_23(VAR_21, VAR_6, 0);
 if (!VAR_24) {
  FUNC_3(VAR_25->dev, "could not get resource\n");
  return -VAR_3;
 }

 VAR_25->res = FUNC_9(VAR_25->dev, VAR_24->start,
   FUNC_26(VAR_24), VAR_0);
 if (!VAR_25->res) {
  FUNC_3(VAR_25->dev, "could not get mem_region\n");
  return -VAR_1;
 }

 VAR_25->size = FUNC_26(VAR_25->res);
 VAR_25->base = FUNC_7(VAR_25->dev, VAR_25->res->start, VAR_25->size);
 if (!VAR_25->base) {
  FUNC_3(VAR_25->dev, "could not ioremap\n");
  return -VAR_3;
 }

 FUNC_24(VAR_21, VAR_25);

 switch (VAR_25->width) {
 case 8:
  VAR_25->read = VAR_15;
  VAR_25->write = VAR_18;
  break;
 case 16:
  VAR_25->read = VAR_17;
  VAR_25->write = VAR_20;
  break;
 case 32:
  VAR_25->read = VAR_16;
  VAR_25->write = VAR_19;
  break;
 default:
  break;
 }

 VAR_25->desc.name = VAR_0;
 VAR_25->desc.pctlops = &VAR_13;
 VAR_25->desc.pmxops = &VAR_14;
 if (VAR_9)
  VAR_25->desc.confops = &VAR_12;
 VAR_25->desc.owner = VAR_11;

 VAR_27 = FUNC_17(VAR_25);
 if (VAR_27 < 0)
  goto free;

 VAR_27 = FUNC_22(&VAR_25->desc, VAR_25->dev, VAR_25, &VAR_25->pctl);
 if (VAR_27) {
  FUNC_3(VAR_25->dev, "could not register single pinctrl driver\n");
  goto free;
 }

 VAR_27 = FUNC_16(VAR_22, VAR_25);
 if (VAR_27 < 0)
  goto free;

 VAR_25->socdata.irq = FUNC_10(VAR_22, 0);
 if (VAR_25->socdata.irq)
  VAR_25->flags |= VAR_7;


 VAR_23 = FUNC_4(&VAR_21->dev);
 if (VAR_23) {
  if (VAR_23->rearm)
   VAR_25->socdata.rearm = VAR_23->rearm;
  if (VAR_23->irq) {
   VAR_25->socdata.irq = VAR_23->irq;
   VAR_25->flags |= VAR_7;
  }
 }

 if (VAR_8) {
  VAR_27 = FUNC_19(VAR_25, VAR_22);
  if (VAR_27 < 0)
   FUNC_6(VAR_25->dev, "initialized with no interrupts\n");
 }

 FUNC_5(VAR_25->dev, "%i pins, size %u\n", VAR_25->desc.npins, VAR_25->size);

 return FUNC_21(VAR_25->pctl);

free:
 FUNC_18(VAR_25);

 return VAR_27;
}
