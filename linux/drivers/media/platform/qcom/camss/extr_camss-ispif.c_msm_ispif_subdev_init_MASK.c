
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resources_ispif {int * clock_for_reset; int * clock; int interrupt; int * reg; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct ispif_device {int line_num; size_t nclocks; size_t nclocks_for_reset; int reset_complete; int config_lock; scalar_t__ power_count; int power_lock; struct camss_clock* clock_for_reset; struct camss_clock* clock; int irq_name; int irq; void* base_clk_mux; void* base; TYPE_1__* line; } ;
struct device {int dummy; } ;
struct camss_clock {scalar_t__ nfreqs; int * freq; void* clk; } ;
struct TYPE_4__ {scalar_t__ version; } ;
struct TYPE_3__ {int id; void* nformats; void* formats; struct ispif_device* ispif; } ;


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
 int FUNC_3 (struct device*,char*,...) ;
 char* FUNC_4 (struct device*) ;
 void* FUNC_5 (struct device*,int ) ;
 void* FUNC_6 (struct device*,struct resource*) ;
 void* FUNC_7 (struct device*,int,int,int ) ;
 int FUNC_8 (struct device*,int ,int ,int ,int ,struct ispif_device*) ;
 int FUNC_9 (int *) ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (int *) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (int ,int,char*,char*,char*) ;
 TYPE_2__* FUNC_13 (struct ispif_device*) ;
 struct device* FUNC_14 (struct ispif_device*) ;
 struct platform_device* FUNC_15 (struct device*) ;

int FUNC_16(struct ispif_device *VAR_13,
     const struct resources_ispif *VAR_14)
{
 struct device *VAR_15 = FUNC_14(VAR_13);
 struct platform_device *VAR_16 = FUNC_15(VAR_15);
 struct resource *VAR_17;
 int VAR_18;
 int VAR_19;


 if (FUNC_13(VAR_13)->version == VAR_0)
  VAR_13->line_num = 2;
 else if (FUNC_13(VAR_13)->version == VAR_1)
  VAR_13->line_num = 4;
 else
  return -VAR_2;

 VAR_13->line = FUNC_7(VAR_15, VAR_13->line_num, sizeof(*VAR_13->line),
       VAR_4);
 if (!VAR_13->line)
  return -VAR_3;

 for (VAR_18 = 0; VAR_18 < VAR_13->line_num; VAR_18++) {
  VAR_13->line[VAR_18].ispif = VAR_13;
  VAR_13->line[VAR_18].id = VAR_18;

  if (FUNC_13(VAR_13)->version == VAR_0) {
   VAR_13->line[VAR_18].formats = VAR_9;
   VAR_13->line[VAR_18].nformats =
     FUNC_0(VAR_9);
  } else if (FUNC_13(VAR_13)->version == VAR_1) {
   VAR_13->line[VAR_18].formats = VAR_10;
   VAR_13->line[VAR_18].nformats =
     FUNC_0(VAR_10);
  } else {
   return -VAR_2;
  }
 }



 VAR_17 = FUNC_11(VAR_16, VAR_6, VAR_14->reg[0]);
 VAR_13->base = FUNC_6(VAR_15, VAR_17);
 if (FUNC_1(VAR_13->base)) {
  FUNC_3(VAR_15, "could not map memory\n");
  return FUNC_2(VAR_13->base);
 }

 VAR_17 = FUNC_11(VAR_16, VAR_6, VAR_14->reg[1]);
 VAR_13->base_clk_mux = FUNC_6(VAR_15, VAR_17);
 if (FUNC_1(VAR_13->base_clk_mux)) {
  FUNC_3(VAR_15, "could not map memory\n");
  return FUNC_2(VAR_13->base_clk_mux);
 }



 VAR_17 = FUNC_11(VAR_16, VAR_5, VAR_14->interrupt);

 if (!VAR_17) {
  FUNC_3(VAR_15, "missing IRQ\n");
  return -VAR_2;
 }

 VAR_13->irq = VAR_17->start;
 FUNC_12(VAR_13->irq_name, sizeof(VAR_13->irq_name), "%s_%s",
   FUNC_4(VAR_15), VAR_8);
 if (FUNC_13(VAR_13)->version == VAR_0)
  VAR_19 = FUNC_8(VAR_15, VAR_13->irq, VAR_11,
          VAR_7, VAR_13->irq_name, VAR_13);
 else if (FUNC_13(VAR_13)->version == VAR_1)
  VAR_19 = FUNC_8(VAR_15, VAR_13->irq, VAR_12,
          VAR_7, VAR_13->irq_name, VAR_13);
 else
  VAR_19 = -VAR_2;
 if (VAR_19 < 0) {
  FUNC_3(VAR_15, "request_irq failed: %d\n", VAR_19);
  return VAR_19;
 }



 VAR_13->nclocks = 0;
 while (VAR_14->clock[VAR_13->nclocks])
  VAR_13->nclocks++;

 VAR_13->clock = FUNC_7(VAR_15,
        VAR_13->nclocks, sizeof(*VAR_13->clock),
        VAR_4);
 if (!VAR_13->clock)
  return -VAR_3;

 for (VAR_18 = 0; VAR_18 < VAR_13->nclocks; VAR_18++) {
  struct camss_clock *VAR_20 = &VAR_13->clock[VAR_18];

  VAR_20->clk = FUNC_5(VAR_15, VAR_14->clock[VAR_18]);
  if (FUNC_1(VAR_20->clk))
   return FUNC_2(VAR_20->clk);

  VAR_20->freq = ((void*)0);
  VAR_20->nfreqs = 0;
 }

 VAR_13->nclocks_for_reset = 0;
 while (VAR_14->clock_for_reset[VAR_13->nclocks_for_reset])
  VAR_13->nclocks_for_reset++;

 VAR_13->clock_for_reset = FUNC_7(VAR_15,
           VAR_13->nclocks_for_reset,
           sizeof(*VAR_13->clock_for_reset),
           VAR_4);
 if (!VAR_13->clock_for_reset)
  return -VAR_3;

 for (VAR_18 = 0; VAR_18 < VAR_13->nclocks_for_reset; VAR_18++) {
  struct camss_clock *VAR_21 = &VAR_13->clock_for_reset[VAR_18];

  VAR_21->clk = FUNC_5(VAR_15, VAR_14->clock_for_reset[VAR_18]);
  if (FUNC_1(VAR_21->clk))
   return FUNC_2(VAR_21->clk);

  VAR_21->freq = ((void*)0);
  VAR_21->nfreqs = 0;
 }

 FUNC_10(&VAR_13->power_lock);
 VAR_13->power_count = 0;

 FUNC_10(&VAR_13->config_lock);

 FUNC_9(&VAR_13->reset_complete);

 return 0;
}
