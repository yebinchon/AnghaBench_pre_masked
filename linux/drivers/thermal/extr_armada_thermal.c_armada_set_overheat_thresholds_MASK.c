
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct armada_thermal_priv {int current_threshold; int current_hysteresis; int syscon; struct armada_thermal_data* data; } ;
struct armada_thermal_data {unsigned int temp_mask; unsigned int thresh_shift; unsigned int hyst_mask; unsigned int hyst_shift; int syscon_control1_off; } ;


 unsigned int FUNC_0 (struct armada_thermal_data*,int) ;
 unsigned int FUNC_1 (struct armada_thermal_data*,int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct armada_thermal_priv *VAR_0,
        int VAR_1, int VAR_2)
{
 struct armada_thermal_data *VAR_3 = VAR_0->data;
 unsigned int VAR_4 = FUNC_1(VAR_3, VAR_1);
 unsigned int VAR_5 = FUNC_0(VAR_3, VAR_2);
 u32 VAR_6;

 FUNC_2(VAR_0->syscon, VAR_3->syscon_control1_off, &VAR_6);


 if (VAR_1 >= 0) {
  VAR_6 &= ~(VAR_3->temp_mask << VAR_3->thresh_shift);
  VAR_6 |= VAR_4 << VAR_3->thresh_shift;
  VAR_0->current_threshold = VAR_1;
 }


 if (VAR_2 >= 0) {
  VAR_6 &= ~(VAR_3->hyst_mask << VAR_3->hyst_shift);
  VAR_6 |= VAR_5 << VAR_3->hyst_shift;
  VAR_0->current_hysteresis = VAR_2;
 }

 FUNC_3(VAR_0->syscon, VAR_3->syscon_control1_off, VAR_6);
}
