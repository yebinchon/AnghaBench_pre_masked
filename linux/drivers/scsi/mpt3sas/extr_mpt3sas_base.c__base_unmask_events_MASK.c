
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int* event_masks; } ;



__attribute__((used)) static void
FUNC_0(struct MPT3SAS_ADAPTER *VAR_0, u16 VAR_1)
{
 u32 VAR_2;

 if (VAR_1 >= 128)
  return;

 VAR_2 = (1 << (VAR_1 % 32));

 if (VAR_1 < 32)
  VAR_0->event_masks[0] &= ~VAR_2;
 else if (VAR_1 < 64)
  VAR_0->event_masks[1] &= ~VAR_2;
 else if (VAR_1 < 96)
  VAR_0->event_masks[2] &= ~VAR_2;
 else if (VAR_1 < 128)
  VAR_0->event_masks[3] &= ~VAR_2;
}
