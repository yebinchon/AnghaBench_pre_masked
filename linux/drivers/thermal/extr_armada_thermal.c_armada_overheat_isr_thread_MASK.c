
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct armada_thermal_priv {int current_threshold; int current_hysteresis; int overheat_sensor; TYPE_1__* data; int syscon; int update_lock; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dfx_irq_cause_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct armada_thermal_priv*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct armada_thermal_priv *VAR_5 = VAR_4;
 int VAR_6 = VAR_5->current_threshold - VAR_5->current_hysteresis;
 int VAR_7;
 u32 VAR_8;
 int VAR_9;


 FUNC_6(VAR_5->overheat_sensor,
       VAR_2);






 do {
  FUNC_2(VAR_1);
  FUNC_3(&VAR_5->update_lock);
  VAR_9 = FUNC_0(VAR_5, &VAR_7);
  FUNC_4(&VAR_5->update_lock);
  if (VAR_9)
   goto enable_irq;
 } while (VAR_7 >= VAR_6);

 FUNC_5(VAR_5->syscon, VAR_5->data->dfx_irq_cause_off, &VAR_8);


 FUNC_6(VAR_5->overheat_sensor,
       VAR_2);

enable_irq:
 FUNC_1(VAR_3);

 return VAR_0;
}
