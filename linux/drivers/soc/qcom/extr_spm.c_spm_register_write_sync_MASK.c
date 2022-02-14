
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct spm_driver_data {TYPE_1__* reg_data; scalar_t__ reg_base; } ;
typedef enum spm_reg { ____Placeholder_spm_reg } spm_reg ;
struct TYPE_2__ {scalar_t__* reg_offset; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct spm_driver_data *VAR_0,
     enum spm_reg VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 if (!VAR_0->reg_data->reg_offset[VAR_1])
  return;

 do {
  FUNC_2(VAR_2, VAR_0->reg_base +
    VAR_0->reg_data->reg_offset[VAR_1]);
  VAR_3 = FUNC_1(VAR_0->reg_base +
    VAR_0->reg_data->reg_offset[VAR_1]);
  if (VAR_3 == VAR_2)
   break;
  FUNC_0();
 } while (1);
}
