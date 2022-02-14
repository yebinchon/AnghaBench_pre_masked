
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wm831x_pdata {scalar_t__ irq_cmos; scalar_t__ irq_base; } ;
struct wm831x {int* irq_masks_cur; int* irq_masks_cache; int irq; TYPE_1__* dev; struct irq_domain* irq_domain; int irq_lock; struct wm831x_pdata pdata; } ;
struct irq_domain {int dummy; } ;
struct TYPE_3__ {int of_node; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_1__*,char*,int,int) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int ,int ,int ) ;
 struct irq_domain* FUNC_5 (int ,int,int,int ,int *,struct wm831x*) ;
 struct irq_domain* FUNC_6 (int ,int,int *,struct wm831x*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int *,int ,int,char*,struct wm831x*) ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int FUNC_9 (struct wm831x*,scalar_t__,int) ;
 int FUNC_10 (struct wm831x*,int ,int,int) ;

int FUNC_11(struct wm831x *VAR_11, int VAR_12)
{
 struct wm831x_pdata *VAR_13 = &VAR_11->pdata;
 struct irq_domain *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 FUNC_7(&VAR_11->irq_lock);


 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_11->irq_masks_cur); VAR_15++) {
  VAR_11->irq_masks_cur[VAR_15] = 0xffff;
  VAR_11->irq_masks_cache[VAR_15] = 0xffff;
  FUNC_9(VAR_11, VAR_3 + VAR_15,
     0xffff);
 }


 if (VAR_13->irq_base) {
  VAR_17 = FUNC_4(VAR_13->irq_base, 0,
        VAR_6, 0);
  if (VAR_17 < 0) {
   FUNC_2(VAR_11->dev, "Failed to allocate IRQs: %d\n",
     VAR_17);
   VAR_17 = 0;
  }
 } else {
  VAR_17 = 0;
 }

 if (VAR_17)
  VAR_14 = FUNC_5(VAR_11->dev->of_node,
            FUNC_0(VAR_10),
            VAR_17, 0,
            &VAR_8,
            VAR_11);
 else
  VAR_14 = FUNC_6(VAR_11->dev->of_node,
            FUNC_0(VAR_10),
            &VAR_8,
            VAR_11);

 if (!VAR_14) {
  FUNC_2(VAR_11->dev, "Failed to allocate IRQ domain\n");
  return -VAR_0;
 }

 if (VAR_13->irq_cmos)
  VAR_15 = 0;
 else
  VAR_15 = VAR_5;

 FUNC_10(VAR_11, VAR_4,
   VAR_5, VAR_15);

 VAR_11->irq = VAR_12;
 VAR_11->irq_domain = VAR_14;

 if (VAR_12) {





  VAR_16 = FUNC_3(VAR_12);
  if (VAR_16 != 0) {
   FUNC_2(VAR_11->dev,
     "Can't enable IRQ as wake source: %d\n",
     VAR_16);
  }

  VAR_16 = FUNC_8(VAR_12, ((void*)0), VAR_9,
        VAR_2 | VAR_1,
        "wm831x", VAR_11);
  if (VAR_16 != 0) {
   FUNC_1(VAR_11->dev, "Failed to request IRQ %d: %d\n",
    VAR_12, VAR_16);
   return VAR_16;
  }
 } else {
  FUNC_2(VAR_11->dev,
    "No interrupt specified - functionality limited\n");
 }


 FUNC_9(VAR_11, VAR_7, 0);

 return 0;
}
