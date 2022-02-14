
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct resources {int * regulator; scalar_t__** clock_rate; int * clock; int * interrupt; int * reg; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;
struct csid_device {size_t nclocks; int reset_complete; int vdda; struct camss_clock* clock; int irq; int irq_name; int id; int base; void* nformats; void* formats; struct camss* camss; } ;
struct camss_clock {size_t nfreqs; scalar_t__* freq; int name; int clk; } ;
struct camss {scalar_t__ version; struct device* dev; } ;


 void* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 char* VAR_8 ;
 int FUNC_2 (int ) ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct device*,char*,...) ;
 char* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct device*,struct resource*) ;
 void* FUNC_7 (struct device*,size_t,int,int ) ;
 int FUNC_8 (struct device*,int ) ;
 int FUNC_9 (struct device*,int ,int ,int ,int ,struct csid_device*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (int ,int,char*,char*,char*,int ) ;
 struct platform_device* FUNC_14 (struct device*) ;

int FUNC_15(struct camss *VAR_12, struct csid_device *VAR_13,
    const struct resources *VAR_14, u8 VAR_15)
{
 struct device *VAR_16 = VAR_12->dev;
 struct platform_device *VAR_17 = FUNC_14(VAR_16);
 struct resource *VAR_18;
 int VAR_19, VAR_20;
 int VAR_21;

 VAR_13->camss = VAR_12;
 VAR_13->id = VAR_15;

 if (VAR_12->version == VAR_0) {
  VAR_13->formats = VAR_9;
  VAR_13->nformats =
    FUNC_0(VAR_9);
 } else if (VAR_12->version == VAR_1) {
  VAR_13->formats = VAR_10;
  VAR_13->nformats =
    FUNC_0(VAR_10);
 } else {
  return -VAR_2;
 }



 VAR_18 = FUNC_12(VAR_17, VAR_6, VAR_14->reg[0]);
 VAR_13->base = FUNC_6(VAR_16, VAR_18);
 if (FUNC_1(VAR_13->base)) {
  FUNC_3(VAR_16, "could not map memory\n");
  return FUNC_2(VAR_13->base);
 }



 VAR_18 = FUNC_12(VAR_17, VAR_5,
      VAR_14->interrupt[0]);
 if (!VAR_18) {
  FUNC_3(VAR_16, "missing IRQ\n");
  return -VAR_2;
 }

 VAR_13->irq = VAR_18->start;
 FUNC_13(VAR_13->irq_name, sizeof(VAR_13->irq_name), "%s_%s%d",
   FUNC_4(VAR_16), VAR_8, VAR_13->id);
 VAR_21 = FUNC_9(VAR_16, VAR_13->irq, VAR_11,
  VAR_7, VAR_13->irq_name, VAR_13);
 if (VAR_21 < 0) {
  FUNC_3(VAR_16, "request_irq failed: %d\n", VAR_21);
  return VAR_21;
 }

 FUNC_10(VAR_13->irq);



 VAR_13->nclocks = 0;
 while (VAR_14->clock[VAR_13->nclocks])
  VAR_13->nclocks++;

 VAR_13->clock = FUNC_7(VAR_16, VAR_13->nclocks, sizeof(*VAR_13->clock),
        VAR_4);
 if (!VAR_13->clock)
  return -VAR_3;

 for (VAR_19 = 0; VAR_19 < VAR_13->nclocks; VAR_19++) {
  struct camss_clock *VAR_22 = &VAR_13->clock[VAR_19];

  VAR_22->clk = FUNC_5(VAR_16, VAR_14->clock[VAR_19]);
  if (FUNC_1(VAR_22->clk))
   return FUNC_2(VAR_22->clk);

  VAR_22->name = VAR_14->clock[VAR_19];

  VAR_22->nfreqs = 0;
  while (VAR_14->clock_rate[VAR_19][VAR_22->nfreqs])
   VAR_22->nfreqs++;

  if (!VAR_22->nfreqs) {
   VAR_22->freq = ((void*)0);
   continue;
  }

  VAR_22->freq = FUNC_7(VAR_16,
        VAR_22->nfreqs,
        sizeof(*VAR_22->freq),
        VAR_4);
  if (!VAR_22->freq)
   return -VAR_3;

  for (VAR_20 = 0; VAR_20 < VAR_22->nfreqs; VAR_20++)
   VAR_22->freq[VAR_20] = VAR_14->clock_rate[VAR_19][VAR_20];
 }



 VAR_13->vdda = FUNC_8(VAR_16, VAR_14->regulator[0]);
 if (FUNC_1(VAR_13->vdda)) {
  FUNC_3(VAR_16, "could not get regulator\n");
  return FUNC_2(VAR_13->vdda);
 }

 FUNC_11(&VAR_13->reset_complete);

 return 0;
}
