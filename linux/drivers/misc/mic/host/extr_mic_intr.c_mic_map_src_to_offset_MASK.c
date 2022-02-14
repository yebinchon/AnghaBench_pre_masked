
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mic_device {TYPE_1__* intr_info; } ;
typedef enum mic_intr_type { ____Placeholder_mic_intr_type } mic_intr_type ;
struct TYPE_2__ {int* intr_len; scalar_t__* intr_start_idx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u16 FUNC_0(struct mic_device *VAR_2,
     int VAR_3, enum mic_intr_type VAR_4)
{
 if (VAR_4 >= VAR_0)
  return VAR_1;
 if (VAR_3 >= VAR_2->intr_info->intr_len[VAR_4])
  return VAR_1;

 return VAR_2->intr_info->intr_start_idx[VAR_4] + VAR_3;
}
