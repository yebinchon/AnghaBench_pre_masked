
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spm_driver_data {TYPE_1__* reg_data; } ;
typedef enum pm_sleep_mode { ____Placeholder_pm_sleep_mode } pm_sleep_mode ;
struct TYPE_2__ {int* start_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct spm_driver_data*,int ) ;
 int FUNC_1 (struct spm_driver_data*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct spm_driver_data *VAR_4,
     enum pm_sleep_mode VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;

 VAR_6 = VAR_4->reg_data->start_index[VAR_5];

 VAR_7 = FUNC_0(VAR_4, VAR_3);
 VAR_7 &= ~(VAR_1 << VAR_2);
 VAR_7 |= VAR_6 << VAR_2;
 VAR_7 |= VAR_0;
 FUNC_1(VAR_4, VAR_3, VAR_7);
}
