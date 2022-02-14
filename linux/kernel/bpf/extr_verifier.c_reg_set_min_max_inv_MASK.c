
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_7__ {int value; int mask; } ;
struct bpf_reg_state {void* smin_value; void* smax_value; void* umin_value; void* umax_value; TYPE_1__ var_off; } ;
typedef int s64 ;
typedef scalar_t__ s32 ;
 scalar_t__ FUNC_0 (int,struct bpf_reg_state*) ;
 int FUNC_1 (struct bpf_reg_state*,int) ;
 int FUNC_2 (struct bpf_reg_state*) ;
 int FUNC_3 (struct bpf_reg_state*) ;
 int FUNC_4 (struct bpf_reg_state*) ;
 int FUNC_5 (int,struct bpf_reg_state*) ;
 int FUNC_6 (TYPE_1__) ;
 int FUNC_7 (TYPE_1__) ;
 int FUNC_8 (int) ;
 void* FUNC_9 (void*,int) ;
 void* FUNC_10 (void*,int) ;
 TYPE_1__ FUNC_11 (TYPE_1__,int ) ;
 int FUNC_12 (int) ;
 TYPE_1__ FUNC_13 (TYPE_1__,int ) ;

__attribute__((used)) static void FUNC_14(struct bpf_reg_state *VAR_0,
    struct bpf_reg_state *VAR_1, u64 VAR_2,
    u8 VAR_3, bool VAR_4)
{
 s64 VAR_5;

 if (FUNC_0(0, VAR_1))
  return;

 VAR_2 = VAR_4 ? (u32)VAR_2 : VAR_2;
 VAR_5 = VAR_4 ? (s64)(s32)VAR_2 : (s64)VAR_2;

 switch (VAR_3) {
 case 138:
 case 133:
 {
  struct bpf_reg_state *VAR_6 =
   VAR_3 == 138 ? VAR_0 : VAR_1;

  if (VAR_4) {
   u64 VAR_7 = VAR_6->var_off.value;
   u64 VAR_8 = ~0xffffffffULL;

   VAR_6->var_off.value = (VAR_7 & VAR_8) | VAR_2;
   VAR_6->var_off.mask &= VAR_8;
  } else {
   FUNC_1(VAR_6, VAR_2);
  }
  break;
 }
 case 132:
  VAR_1->var_off = FUNC_11(VAR_1->var_off,
           FUNC_12(~VAR_2));
  if (FUNC_8(VAR_2))
   VAR_0->var_off = FUNC_13(VAR_0->var_off,
          FUNC_12(VAR_2));
  break;
 case 137:
 case 136:
 {
  u64 VAR_9 = VAR_3 == 136 ? VAR_2 : VAR_2 + 1;
  u64 VAR_10 = VAR_3 == 136 ? VAR_2 - 1 : VAR_2;

  if (VAR_4) {
   VAR_9 += FUNC_7(VAR_1->var_off);
   VAR_10 += FUNC_6(VAR_0->var_off);
  }
  VAR_1->umin_value = FUNC_9(VAR_1->umin_value, VAR_9);
  VAR_0->umax_value = FUNC_10(VAR_0->umax_value, VAR_10);
  break;
 }
 case 131:
 case 130:
 {
  s64 VAR_11 = VAR_3 == 130 ? VAR_5 : VAR_5 + 1;
  s64 VAR_12 = VAR_3 == 130 ? VAR_5 - 1 : VAR_5;

  if (VAR_4 && !FUNC_5(VAR_5, VAR_1))
   break;
  VAR_1->smin_value = FUNC_9(VAR_1->smin_value, VAR_11);
  VAR_0->smax_value = FUNC_10(VAR_0->smax_value, VAR_12);
  break;
 }
 case 135:
 case 134:
 {
  u64 VAR_13 = VAR_3 == 134 ? VAR_2 : VAR_2 - 1;
  u64 VAR_14 = VAR_3 == 134 ? VAR_2 + 1 : VAR_2;

  if (VAR_4) {
   VAR_13 += FUNC_6(VAR_1->var_off);
   VAR_14 += FUNC_7(VAR_0->var_off);
  }
  VAR_1->umax_value = FUNC_10(VAR_1->umax_value, VAR_13);
  VAR_0->umin_value = FUNC_9(VAR_0->umin_value, VAR_14);
  break;
 }
 case 129:
 case 128:
 {
  s64 VAR_15 = VAR_3 == 128 ? VAR_5 : VAR_5 - 1;
  s64 VAR_16 = VAR_3 == 128 ? VAR_5 + 1 : VAR_5;

  if (VAR_4 && !FUNC_5(VAR_5, VAR_1))
   break;
  VAR_1->smax_value = FUNC_10(VAR_1->smax_value, VAR_15);
  VAR_0->smin_value = FUNC_9(VAR_0->smin_value, VAR_16);
  break;
 }
 default:
  break;
 }

 FUNC_3(VAR_1);
 FUNC_3(VAR_0);

 FUNC_2(VAR_1);
 FUNC_2(VAR_0);




 FUNC_4(VAR_1);
 FUNC_4(VAR_0);
}
