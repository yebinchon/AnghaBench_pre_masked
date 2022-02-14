
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spm_driver_data {TYPE_1__* reg_data; scalar_t__ reg_base; } ;
typedef enum spm_reg { ____Placeholder_spm_reg } spm_reg ;
struct TYPE_2__ {scalar_t__* reg_offset; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct spm_driver_data *VAR_0,
     enum spm_reg VAR_1, u32 VAR_2)
{
 if (VAR_0->reg_data->reg_offset[VAR_1])
  FUNC_0(VAR_2, VAR_0->reg_base +
    VAR_0->reg_data->reg_offset[VAR_1]);
}
