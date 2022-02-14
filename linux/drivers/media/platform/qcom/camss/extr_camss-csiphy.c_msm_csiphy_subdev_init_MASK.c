
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct resources {scalar_t__** clock_rate; int * clock; int * interrupt; int * reg; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ combo_mode; } ;
struct csiphy_device {size_t nclocks; struct camss_clock* clock; int irq; int irq_name; TYPE_2__* ops; int id; void* base_clk_mux; void* base; void* nformats; void* formats; TYPE_1__ cfg; struct camss* camss; } ;
struct camss_clock {size_t nfreqs; scalar_t__* freq; int name; void* clk; } ;
struct camss {scalar_t__ version; struct device* dev; } ;
struct TYPE_5__ {int isr; } ;


 void* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (void*) ;
 char* VAR_8 ;
 int FUNC_2 (void*) ;
 void* VAR_9 ;
 void* VAR_10 ;
 TYPE_2__ VAR_11 ;
 TYPE_2__ VAR_12 ;
 int FUNC_3 (struct device*,char*,...) ;
 char* FUNC_4 (struct device*) ;
 void* FUNC_5 (struct device*,int ) ;
 void* FUNC_6 (struct device*,struct resource*) ;
 void* FUNC_7 (struct device*,size_t,int,int ) ;
 int FUNC_8 (struct device*,int ,int ,int ,int ,struct csiphy_device*) ;
 int FUNC_9 (int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (int ,int,char*,char*,char*,int ) ;
 struct platform_device* FUNC_12 (struct device*) ;

int FUNC_13(struct camss *VAR_13,
      struct csiphy_device *VAR_14,
      const struct resources *VAR_15, u8 VAR_16)
{
 struct device *VAR_17 = VAR_13->dev;
 struct platform_device *VAR_18 = FUNC_12(VAR_17);
 struct resource *VAR_19;
 int VAR_20, VAR_21;
 int VAR_22;

 VAR_14->camss = VAR_13;
 VAR_14->id = VAR_16;
 VAR_14->cfg.combo_mode = 0;

 if (VAR_13->version == VAR_0) {
  VAR_14->ops = &VAR_11;
  VAR_14->formats = VAR_9;
  VAR_14->nformats = FUNC_0(VAR_9);
 } else if (VAR_13->version == VAR_1) {
  VAR_14->ops = &VAR_12;
  VAR_14->formats = VAR_10;
  VAR_14->nformats = FUNC_0(VAR_10);
 } else {
  return -VAR_2;
 }



 VAR_19 = FUNC_10(VAR_18, VAR_6, VAR_15->reg[0]);
 VAR_14->base = FUNC_6(VAR_17, VAR_19);
 if (FUNC_1(VAR_14->base)) {
  FUNC_3(VAR_17, "could not map memory\n");
  return FUNC_2(VAR_14->base);
 }

 VAR_19 = FUNC_10(VAR_18, VAR_6, VAR_15->reg[1]);
 VAR_14->base_clk_mux = FUNC_6(VAR_17, VAR_19);
 if (FUNC_1(VAR_14->base_clk_mux)) {
  FUNC_3(VAR_17, "could not map memory\n");
  return FUNC_2(VAR_14->base_clk_mux);
 }



 VAR_19 = FUNC_10(VAR_18, VAR_5,
      VAR_15->interrupt[0]);
 if (!VAR_19) {
  FUNC_3(VAR_17, "missing IRQ\n");
  return -VAR_2;
 }

 VAR_14->irq = VAR_19->start;
 FUNC_11(VAR_14->irq_name, sizeof(VAR_14->irq_name), "%s_%s%d",
   FUNC_4(VAR_17), VAR_8, VAR_14->id);

 VAR_22 = FUNC_8(VAR_17, VAR_14->irq, VAR_14->ops->isr,
          VAR_7, VAR_14->irq_name, VAR_14);
 if (VAR_22 < 0) {
  FUNC_3(VAR_17, "request_irq failed: %d\n", VAR_22);
  return VAR_22;
 }

 FUNC_9(VAR_14->irq);



 VAR_14->nclocks = 0;
 while (VAR_15->clock[VAR_14->nclocks])
  VAR_14->nclocks++;

 VAR_14->clock = FUNC_7(VAR_17,
         VAR_14->nclocks, sizeof(*VAR_14->clock),
         VAR_4);
 if (!VAR_14->clock)
  return -VAR_3;

 for (VAR_20 = 0; VAR_20 < VAR_14->nclocks; VAR_20++) {
  struct camss_clock *VAR_23 = &VAR_14->clock[VAR_20];

  VAR_23->clk = FUNC_5(VAR_17, VAR_15->clock[VAR_20]);
  if (FUNC_1(VAR_23->clk))
   return FUNC_2(VAR_23->clk);

  VAR_23->name = VAR_15->clock[VAR_20];

  VAR_23->nfreqs = 0;
  while (VAR_15->clock_rate[VAR_20][VAR_23->nfreqs])
   VAR_23->nfreqs++;

  if (!VAR_23->nfreqs) {
   VAR_23->freq = ((void*)0);
   continue;
  }

  VAR_23->freq = FUNC_7(VAR_17,
        VAR_23->nfreqs,
        sizeof(*VAR_23->freq),
        VAR_4);
  if (!VAR_23->freq)
   return -VAR_3;

  for (VAR_21 = 0; VAR_21 < VAR_23->nfreqs; VAR_21++)
   VAR_23->freq[VAR_21] = VAR_15->clock_rate[VAR_20][VAR_21];
 }

 return 0;
}
