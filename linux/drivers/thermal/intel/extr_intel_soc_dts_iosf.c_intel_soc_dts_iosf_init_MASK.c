
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_soc_dts_sensors {int intr_type; TYPE_1__* soc_dts; int tj_max; int dts_update_lock; int intr_notify_lock; } ;
typedef enum intel_soc_dts_interrupt_type { ____Placeholder_intel_soc_dts_interrupt_type } intel_soc_dts_interrupt_type ;
struct TYPE_4__ {struct intel_soc_dts_sensors* sensors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intel_soc_dts_sensors* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,TYPE_1__*,int,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct intel_soc_dts_sensors*) ;
 struct intel_soc_dts_sensors* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int,int ,int ) ;

struct intel_soc_dts_sensors *FUNC_10(
 enum intel_soc_dts_interrupt_type VAR_7, int VAR_8,
 int VAR_9)
{
 struct intel_soc_dts_sensors *VAR_10;
 bool VAR_11;
 u32 VAR_12;
 int VAR_13;
 int VAR_14;

 if (!FUNC_3())
  return FUNC_0(-VAR_1);

 if (!VAR_8 || VAR_9 > VAR_8)
  return FUNC_0(-VAR_0);

 if (FUNC_2(&VAR_12))
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return FUNC_0(-VAR_2);

 FUNC_8(&VAR_10->intr_notify_lock);
 FUNC_6(&VAR_10->dts_update_lock);
 VAR_10->intr_type = VAR_7;
 VAR_10->tj_max = VAR_12;
 if (VAR_7 == VAR_4)
  VAR_11 = 0;
 else
  VAR_11 = 1;
 for (VAR_14 = 0; VAR_14 < VAR_5; ++VAR_14) {
  VAR_10->soc_dts[VAR_14].sensors = VAR_10;
  VAR_13 = FUNC_1(VAR_14, &VAR_10->soc_dts[VAR_14],
        VAR_11, VAR_8,
        VAR_9);
  if (VAR_13)
   goto err_free;
 }

 for (VAR_14 = 0; VAR_14 < VAR_5; ++VAR_14) {
  VAR_13 = FUNC_9(&VAR_10->soc_dts[VAR_14], 0, 0,
           VAR_6);
  if (VAR_13)
   goto err_remove_zone;

  VAR_13 = FUNC_9(&VAR_10->soc_dts[VAR_14], 1, 0,
           VAR_6);
  if (VAR_13)
   goto err_remove_zone;
 }

 return VAR_10;
err_remove_zone:
 for (VAR_14 = 0; VAR_14 < VAR_5; ++VAR_14)
  FUNC_7(&VAR_10->soc_dts[VAR_14]);

err_free:
 FUNC_4(VAR_10);
 return FUNC_0(VAR_13);
}
