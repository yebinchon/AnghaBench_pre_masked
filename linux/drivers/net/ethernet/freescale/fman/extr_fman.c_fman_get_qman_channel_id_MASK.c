
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fman {TYPE_2__* state; } ;
struct TYPE_3__ {int major; } ;
struct TYPE_4__ {int num_of_qman_channels; int qman_channel_base; TYPE_1__ rev_info; } ;



u32 FUNC_0(struct fman *VAR_0, u32 VAR_1)
{
 int VAR_2;

 if (VAR_0->state->rev_info.major >= 6) {
  static const u32 VAR_3[] = {
   0x30, 0x31, 0x28, 0x29, 0x2a, 0x2b,
   0x2c, 0x2d, 0x2, 0x3, 0x4, 0x5, 0x7, 0x7
  };

  for (VAR_2 = 0; VAR_2 < VAR_0->state->num_of_qman_channels; VAR_2++) {
   if (VAR_3[VAR_2] == VAR_1)
    break;
  }
 } else {
  static const u32 VAR_4[] = {
   0x30, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x1,
   0x2, 0x3, 0x4, 0x5, 0x7, 0x7
  };

  for (VAR_2 = 0; VAR_2 < VAR_0->state->num_of_qman_channels; VAR_2++) {
   if (VAR_4[VAR_2] == VAR_1)
    break;
  }
 }

 if (VAR_2 == VAR_0->state->num_of_qman_channels)
  return 0;

 return VAR_0->state->qman_channel_base + VAR_2;
}
