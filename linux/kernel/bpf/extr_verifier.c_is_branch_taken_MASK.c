
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int mask; int value; } ;
struct bpf_reg_state {unsigned long long umax_value; unsigned long long umin_value; scalar_t__ smin_value; scalar_t__ smax_value; TYPE_1__ var_off; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ s32 ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,struct bpf_reg_state*) ;
 int FUNC_1 (struct bpf_reg_state*,int) ;
 int FUNC_2 (TYPE_1__,int) ;
 int FUNC_3 (TYPE_1__) ;

__attribute__((used)) static int FUNC_4(struct bpf_reg_state *VAR_2, u64 VAR_3, u8 VAR_4,
      bool VAR_5)
{
 struct bpf_reg_state VAR_6;
 s64 VAR_7;

 if (FUNC_0(0, VAR_2))
  return -1;

 if (VAR_5) {
  VAR_6 = *VAR_2;
  VAR_2 = &VAR_6;




  FUNC_1(VAR_2, 4);
  if ((VAR_2->umax_value ^ VAR_2->umin_value) &
      (1ULL << 31)) {
   VAR_2->smin_value = VAR_1;
   VAR_2->smax_value = VAR_0;
  }
  VAR_2->smin_value = (s64)(s32)VAR_2->smin_value;
  VAR_2->smax_value = (s64)(s32)VAR_2->smax_value;

  VAR_3 = (u32)VAR_3;
  VAR_7 = (s64)(s32)VAR_3;
 } else {
  VAR_7 = (s64)VAR_3;
 }

 switch (VAR_4) {
 case 138:
  if (FUNC_3(VAR_2->var_off))
   return !!FUNC_2(VAR_2->var_off, VAR_3);
  break;
 case 133:
  if (FUNC_3(VAR_2->var_off))
   return !FUNC_2(VAR_2->var_off, VAR_3);
  break;
 case 132:
  if ((~VAR_2->var_off.mask & VAR_2->var_off.value) & VAR_3)
   return 1;
  if (!((VAR_2->var_off.mask | VAR_2->var_off.value) & VAR_3))
   return 0;
  break;
 case 136:
  if (VAR_2->umin_value > VAR_3)
   return 1;
  else if (VAR_2->umax_value <= VAR_3)
   return 0;
  break;
 case 130:
  if (VAR_2->smin_value > VAR_7)
   return 1;
  else if (VAR_2->smax_value < VAR_7)
   return 0;
  break;
 case 134:
  if (VAR_2->umax_value < VAR_3)
   return 1;
  else if (VAR_2->umin_value >= VAR_3)
   return 0;
  break;
 case 128:
  if (VAR_2->smax_value < VAR_7)
   return 1;
  else if (VAR_2->smin_value >= VAR_7)
   return 0;
  break;
 case 137:
  if (VAR_2->umin_value >= VAR_3)
   return 1;
  else if (VAR_2->umax_value < VAR_3)
   return 0;
  break;
 case 131:
  if (VAR_2->smin_value >= VAR_7)
   return 1;
  else if (VAR_2->smax_value < VAR_7)
   return 0;
  break;
 case 135:
  if (VAR_2->umax_value <= VAR_3)
   return 1;
  else if (VAR_2->umin_value > VAR_3)
   return 0;
  break;
 case 129:
  if (VAR_2->smax_value <= VAR_7)
   return 1;
  else if (VAR_2->smin_value > VAR_7)
   return 0;
  break;
 }

 return -1;
}
