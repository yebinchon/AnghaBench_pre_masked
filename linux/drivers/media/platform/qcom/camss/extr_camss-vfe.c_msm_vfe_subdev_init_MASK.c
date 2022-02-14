
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int reg_update; int sof; } ;
struct TYPE_6__ {struct camss* camss; int type; } ;
struct vfe_line {int id; void* nformats; void* formats; TYPE_2__ output; TYPE_1__ video_out; } ;
struct TYPE_8__ {int wm_done; int comp_done; int sof; int reg_update; int halt_ack; int reset_ack; } ;
struct vfe_device {size_t nclocks; int halt_complete; int reset_complete; struct vfe_line* line; scalar_t__ reg_update; int id; struct camss* camss; int output_lock; scalar_t__ stream_count; int stream_lock; scalar_t__ power_count; int power_lock; struct camss_clock* clock; int irq_name; TYPE_4__* ops; int irq; int base; TYPE_3__ isr_ops; } ;
struct resources {scalar_t__** clock_rate; int * clock; int * interrupt; int * reg; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;
struct camss_clock {size_t nfreqs; scalar_t__* freq; int name; int clk; } ;
struct camss {scalar_t__ version; struct device* dev; } ;
struct TYPE_9__ {int isr; } ;


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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct device*,char*,...) ;
 char* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct device*,struct resource*) ;
 void* FUNC_7 (struct device*,size_t,int,int ) ;
 int FUNC_8 (struct device*,int ,int ,int ,int ,struct vfe_device*) ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (int ,int,char*,char*,char*,int ) ;
 int FUNC_13 (int *) ;
 struct platform_device* FUNC_14 (struct device*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_4__ VAR_22 ;
 TYPE_4__ VAR_23 ;

int FUNC_15(struct camss *VAR_24, struct vfe_device *VAR_25,
   const struct resources *VAR_26, u8 VAR_27)
{
 struct device *VAR_28 = VAR_24->dev;
 struct platform_device *VAR_29 = FUNC_14(VAR_28);
 struct resource *VAR_30;
 int VAR_31, VAR_32;
 int VAR_33;

 VAR_25->isr_ops.reset_ack = VAR_19;
 VAR_25->isr_ops.halt_ack = VAR_17;
 VAR_25->isr_ops.reg_update = VAR_18;
 VAR_25->isr_ops.sof = VAR_20;
 VAR_25->isr_ops.comp_done = VAR_16;
 VAR_25->isr_ops.wm_done = VAR_21;

 if (VAR_24->version == VAR_0)
  VAR_25->ops = &VAR_22;
 else if (VAR_24->version == VAR_1)
  VAR_25->ops = &VAR_23;
 else
  return -VAR_2;



 VAR_30 = FUNC_11(VAR_29, VAR_6, VAR_26->reg[0]);
 VAR_25->base = FUNC_6(VAR_28, VAR_30);
 if (FUNC_1(VAR_25->base)) {
  FUNC_3(VAR_28, "could not map memory\n");
  return FUNC_2(VAR_25->base);
 }



 VAR_30 = FUNC_11(VAR_29, VAR_5,
      VAR_26->interrupt[0]);
 if (!VAR_30) {
  FUNC_3(VAR_28, "missing IRQ\n");
  return -VAR_2;
 }

 VAR_25->irq = VAR_30->start;
 FUNC_12(VAR_25->irq_name, sizeof(VAR_25->irq_name), "%s_%s%d",
   FUNC_4(VAR_28), VAR_8, VAR_25->id);
 VAR_33 = FUNC_8(VAR_28, VAR_25->irq, VAR_25->ops->isr,
          VAR_7, VAR_25->irq_name, VAR_25);
 if (VAR_33 < 0) {
  FUNC_3(VAR_28, "request_irq failed: %d\n", VAR_33);
  return VAR_33;
 }



 VAR_25->nclocks = 0;
 while (VAR_26->clock[VAR_25->nclocks])
  VAR_25->nclocks++;

 VAR_25->clock = FUNC_7(VAR_28, VAR_25->nclocks, sizeof(*VAR_25->clock),
      VAR_4);
 if (!VAR_25->clock)
  return -VAR_3;

 for (VAR_31 = 0; VAR_31 < VAR_25->nclocks; VAR_31++) {
  struct camss_clock *VAR_34 = &VAR_25->clock[VAR_31];

  VAR_34->clk = FUNC_5(VAR_28, VAR_26->clock[VAR_31]);
  if (FUNC_1(VAR_34->clk))
   return FUNC_2(VAR_34->clk);

  VAR_34->name = VAR_26->clock[VAR_31];

  VAR_34->nfreqs = 0;
  while (VAR_26->clock_rate[VAR_31][VAR_34->nfreqs])
   VAR_34->nfreqs++;

  if (!VAR_34->nfreqs) {
   VAR_34->freq = ((void*)0);
   continue;
  }

  VAR_34->freq = FUNC_7(VAR_28,
        VAR_34->nfreqs,
        sizeof(*VAR_34->freq),
        VAR_4);
  if (!VAR_34->freq)
   return -VAR_3;

  for (VAR_32 = 0; VAR_32 < VAR_34->nfreqs; VAR_32++)
   VAR_34->freq[VAR_32] = VAR_26->clock_rate[VAR_31][VAR_32];
 }

 FUNC_10(&VAR_25->power_lock);
 VAR_25->power_count = 0;

 FUNC_10(&VAR_25->stream_lock);
 VAR_25->stream_count = 0;

 FUNC_13(&VAR_25->output_lock);

 VAR_25->camss = VAR_24;
 VAR_25->id = VAR_27;
 VAR_25->reg_update = 0;

 for (VAR_31 = VAR_11; VAR_31 <= VAR_10; VAR_31++) {
  struct vfe_line *VAR_35 = &VAR_25->line[VAR_31];

  VAR_35->video_out.type = VAR_9;
  VAR_35->video_out.camss = VAR_24;
  VAR_35->id = VAR_31;
  FUNC_9(&VAR_35->output.sof);
  FUNC_9(&VAR_35->output.reg_update);

  if (VAR_24->version == VAR_0) {
   if (VAR_31 == VAR_10) {
    VAR_35->formats = VAR_12;
    VAR_35->nformats = FUNC_0(VAR_12);
   } else {
    VAR_35->formats = VAR_14;
    VAR_35->nformats = FUNC_0(VAR_14);
   }
  } else if (VAR_24->version == VAR_1) {
   if (VAR_31 == VAR_10) {
    VAR_35->formats = VAR_13;
    VAR_35->nformats = FUNC_0(VAR_13);
   } else {
    VAR_35->formats = VAR_15;
    VAR_35->nformats = FUNC_0(VAR_15);
   }
  } else {
   return -VAR_2;
  }
 }

 FUNC_9(&VAR_25->reset_complete);
 FUNC_9(&VAR_25->halt_complete);

 return 0;
}
