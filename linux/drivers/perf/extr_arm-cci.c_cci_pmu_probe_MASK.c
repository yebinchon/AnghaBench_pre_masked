
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {int pmu_lock; } ;
struct cci_pmu {int* irqs; TYPE_2__* model; int cpu; int active_events; int reserve_mutex; TYPE_1__ hw_events; scalar_t__ nr_irqs; struct cci_pmu* base; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct cci_pmu*) ;
 int FUNC_2 (struct cci_pmu*) ;
 int FUNC_3 (int *,int ) ;
 struct cci_pmu* FUNC_4 (int *) ;
 int FUNC_5 (struct cci_pmu*,struct platform_device*) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int *,int ) ;
 int FUNC_8 (int *,char*,int,int) ;
 struct cci_pmu* FUNC_9 (int *,struct resource*) ;
 struct cci_pmu* VAR_5 ;
 scalar_t__ FUNC_10 (int,int*,scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct platform_device*,int) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_6)
{
 struct resource *VAR_7;
 struct cci_pmu *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_4(&VAR_6->dev);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 VAR_7 = FUNC_13(VAR_6, VAR_3, 0);
 VAR_8->base = FUNC_9(&VAR_6->dev, VAR_7);
 if (FUNC_1(VAR_8->base))
  return -VAR_2;





 VAR_8->nr_irqs = 0;
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_8->model); VAR_9++) {
  VAR_11 = FUNC_12(VAR_6, VAR_9);
  if (VAR_11 < 0)
   break;

  if (FUNC_10(VAR_11, VAR_8->irqs, VAR_8->nr_irqs))
   continue;

  VAR_8->irqs[VAR_8->nr_irqs++] = VAR_11;
 }





 if (VAR_9 < FUNC_0(VAR_8->model)) {
  FUNC_8(&VAR_6->dev, "In-correct number of interrupts: %d, should be %d\n",
   VAR_9, FUNC_0(VAR_8->model));
  return -VAR_1;
 }

 FUNC_16(&VAR_8->hw_events.pmu_lock);
 FUNC_11(&VAR_8->reserve_mutex);
 FUNC_3(&VAR_8->active_events, 0);

 VAR_8->cpu = FUNC_15();
 VAR_5 = VAR_8;
 FUNC_7(VAR_0,
      "perf/arm/cci:online", ((void*)0),
      VAR_4);

 VAR_10 = FUNC_5(VAR_8, VAR_6);
 if (VAR_10)
  goto error_pmu_init;

 FUNC_14("ARM %s PMU driver probed", VAR_8->model->name);
 return 0;

error_pmu_init:
 FUNC_6(VAR_0);
 VAR_5 = ((void*)0);
 return VAR_10;
}
