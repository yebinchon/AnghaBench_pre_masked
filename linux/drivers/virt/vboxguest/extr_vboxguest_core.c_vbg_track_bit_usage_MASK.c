
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vbg_bit_usage_tracker {int* per_bit_usage; int mask; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct vbg_bit_usage_tracker *VAR_0,
    u32 VAR_1, u32 VAR_2)
{
 bool VAR_3 = 0;

 while (VAR_1) {
  u32 VAR_4 = FUNC_1(VAR_1) - 1;
  u32 VAR_5 = FUNC_0(VAR_4);

  if (VAR_5 & VAR_2) {
   VAR_0->per_bit_usage[VAR_4] -= 1;
   if (VAR_0->per_bit_usage[VAR_4] == 0) {
    VAR_3 = 1;
    VAR_0->mask &= ~VAR_5;
   }
  } else {
   VAR_0->per_bit_usage[VAR_4] += 1;
   if (VAR_0->per_bit_usage[VAR_4] == 1) {
    VAR_3 = 1;
    VAR_0->mask |= VAR_5;
   }
  }

  VAR_1 &= ~VAR_5;
 }

 return VAR_3;
}
