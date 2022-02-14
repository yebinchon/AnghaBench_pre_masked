
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct bpf_verifier_state {size_t curframe; struct bpf_func_state** frame; } ;
struct TYPE_3__ {int level; } ;
struct bpf_verifier_env {TYPE_1__ log; struct bpf_verifier_state* cur_state; } ;
struct bpf_spin_lock {int dummy; } ;
struct bpf_reg_state {scalar_t__ smin_value; scalar_t__ umax_value; TYPE_2__* map_ptr; } ;
struct bpf_func_state {struct bpf_reg_state* regs; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {size_t spin_lock_off; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bpf_verifier_env*,size_t,scalar_t__,int,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct bpf_verifier_env*,struct bpf_func_state*) ;
 int FUNC_3 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct bpf_verifier_env *VAR_4, u32 VAR_5,
       int VAR_6, int VAR_7, bool VAR_8)
{
 struct bpf_verifier_state *VAR_9 = VAR_4->cur_state;
 struct bpf_func_state *VAR_10 = VAR_9->frame[VAR_9->curframe];
 struct bpf_reg_state *VAR_11 = &VAR_10->regs[VAR_5];
 int VAR_12;





 if (VAR_4->log.level & VAR_0)
  FUNC_2(VAR_4, VAR_10);







 if (VAR_11->smin_value < 0 &&
     (VAR_11->smin_value == VAR_3 ||
      (VAR_6 + VAR_11->smin_value != (s64)(s32)(VAR_6 + VAR_11->smin_value)) ||
       VAR_11->smin_value + VAR_6 < 0)) {
  FUNC_3(VAR_4, "R%d min value is negative, either use unsigned index or do a if (index >=0) check.\n",
   VAR_5);
  return -VAR_2;
 }
 VAR_12 = FUNC_0(VAR_4, VAR_5, VAR_11->smin_value + VAR_6, VAR_7,
     VAR_8);
 if (VAR_12) {
  FUNC_3(VAR_4, "R%d min value is outside of the array range\n",
   VAR_5);
  return VAR_12;
 }





 if (VAR_11->umax_value >= VAR_1) {
  FUNC_3(VAR_4, "R%d unbounded memory access, make sure to bounds check any array access into a map\n",
   VAR_5);
  return -VAR_2;
 }
 VAR_12 = FUNC_0(VAR_4, VAR_5, VAR_11->umax_value + VAR_6, VAR_7,
     VAR_8);
 if (VAR_12)
  FUNC_3(VAR_4, "R%d max value is outside of the array range\n",
   VAR_5);

 if (FUNC_1(VAR_11->map_ptr)) {
  u32 VAR_13 = VAR_11->map_ptr->spin_lock_off;






  if (VAR_11->smin_value + VAR_6 < VAR_13 + sizeof(struct bpf_spin_lock) &&
       VAR_13 < VAR_11->umax_value + VAR_6 + VAR_7) {
   FUNC_3(VAR_4, "bpf_spin_lock cannot be accessed directly by load/store\n");
   return -VAR_2;
  }
 }
 return VAR_12;
}
