
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct bpf_verifier_state {scalar_t__ active_spin_lock; } ;
struct bpf_verifier_env {struct bpf_verifier_state* cur_state; } ;
struct TYPE_2__ {int value; } ;
struct bpf_reg_state {scalar_t__ type; scalar_t__ id; int off; TYPE_1__ var_off; struct bpf_map* map_ptr; } ;
struct bpf_map {int spin_lock_off; int name; int btf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct bpf_reg_state* FUNC_0 (struct bpf_verifier_env*) ;
 int FUNC_1 (struct bpf_map*) ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct bpf_verifier_env *VAR_4, int VAR_5,
        bool VAR_6)
{
 struct bpf_reg_state *VAR_7 = FUNC_0(VAR_4), *VAR_8 = &VAR_7[VAR_5];
 struct bpf_verifier_state *VAR_9 = VAR_4->cur_state;
 bool VAR_10 = FUNC_2(VAR_8->var_off);
 struct bpf_map *VAR_11 = VAR_8->map_ptr;
 u64 VAR_12 = VAR_8->var_off.value;

 if (VAR_8->type != VAR_3) {
  FUNC_3(VAR_4, "R%d is not a pointer to map_value\n", VAR_5);
  return -VAR_1;
 }
 if (!VAR_10) {
  FUNC_3(VAR_4,
   "R%d doesn't have constant offset. bpf_spin_lock has to be at the constant offset\n",
   VAR_5);
  return -VAR_1;
 }
 if (!VAR_11->btf) {
  FUNC_3(VAR_4,
   "map '%s' has to have BTF in order to use bpf_spin_lock\n",
   VAR_11->name);
  return -VAR_1;
 }
 if (!FUNC_1(VAR_11)) {
  if (VAR_11->spin_lock_off == -VAR_0)
   FUNC_3(VAR_4,
    "map '%s' has more than one 'struct bpf_spin_lock'\n",
    VAR_11->name);
  else if (VAR_11->spin_lock_off == -VAR_2)
   FUNC_3(VAR_4,
    "map '%s' doesn't have 'struct bpf_spin_lock'\n",
    VAR_11->name);
  else
   FUNC_3(VAR_4,
    "map '%s' is not a struct type or bpf_spin_lock is mangled\n",
    VAR_11->name);
  return -VAR_1;
 }
 if (VAR_11->spin_lock_off != VAR_12 + VAR_8->off) {
  FUNC_3(VAR_4, "off %lld doesn't point to 'struct bpf_spin_lock'\n",
   VAR_12 + VAR_8->off);
  return -VAR_1;
 }
 if (VAR_6) {
  if (VAR_9->active_spin_lock) {
   FUNC_3(VAR_4,
    "Locking two bpf_spin_locks are not allowed\n");
   return -VAR_1;
  }
  VAR_9->active_spin_lock = VAR_8->id;
 } else {
  if (!VAR_9->active_spin_lock) {
   FUNC_3(VAR_4, "bpf_spin_unlock without taking a lock\n");
   return -VAR_1;
  }
  if (VAR_9->active_spin_lock != VAR_8->id) {
   FUNC_3(VAR_4, "bpf_spin_unlock of different lock\n");
   return -VAR_1;
  }
  VAR_9->active_spin_lock = 0;
 }
 return 0;
}
