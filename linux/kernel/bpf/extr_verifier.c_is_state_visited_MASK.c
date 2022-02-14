
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct bpf_verifier_state {int insn_idx; int branches; int first_insn_idx; int curframe; struct bpf_func_state** frame; struct bpf_verifier_state* parent; int last_insn_idx; } ;
struct bpf_verifier_state_list {int hit_cnt; int miss_cnt; struct bpf_verifier_state_list* next; struct bpf_verifier_state state; } ;
struct bpf_verifier_env {int jmps_processed; int prev_jmps_processed; int insn_processed; int prev_insn_processed; int max_states_per_insn; int peak_states; int total_states; int allow_ptr_leaks; struct bpf_verifier_state_list* free_list; TYPE_3__* insn_aux_data; int prev_insn_idx; scalar_t__ test_state_freq; struct bpf_verifier_state* cur_state; } ;
struct bpf_func_state {int allocated_stack; TYPE_2__* stack; TYPE_4__* regs; } ;
struct TYPE_8__ {int live; struct TYPE_8__* parent; } ;
struct TYPE_7__ {int prune_point; } ;
struct TYPE_5__ {struct TYPE_5__* parent; void* live; } ;
struct TYPE_6__ {TYPE_1__ spilled_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (struct bpf_verifier_env*,int,struct bpf_verifier_state*) ;
 int FUNC_2 (struct bpf_verifier_state*) ;
 int FUNC_3 (struct bpf_verifier_state*,struct bpf_verifier_state*) ;
 struct bpf_verifier_state_list** FUNC_4 (struct bpf_verifier_env*,int) ;
 int FUNC_5 (struct bpf_verifier_state*,int) ;
 int FUNC_6 (struct bpf_verifier_state_list*) ;
 struct bpf_verifier_state_list* FUNC_7 (int,int ) ;
 int FUNC_8 (struct bpf_verifier_env*,struct bpf_verifier_state*,struct bpf_verifier_state*) ;
 int FUNC_9 (struct bpf_verifier_env*,struct bpf_verifier_state*) ;
 int FUNC_10 (struct bpf_verifier_env*,struct bpf_verifier_state*) ;
 scalar_t__ FUNC_11 (struct bpf_verifier_env*,struct bpf_verifier_state*,struct bpf_verifier_state*) ;
 scalar_t__ FUNC_12 (struct bpf_verifier_state*,struct bpf_verifier_state*) ;
 int FUNC_13 (struct bpf_verifier_env*,char*,int) ;
 int FUNC_14 (struct bpf_verifier_env*,int,char*) ;

__attribute__((used)) static int FUNC_15(struct bpf_verifier_env *VAR_9, int VAR_10)
{
 struct bpf_verifier_state_list *VAR_11;
 struct bpf_verifier_state_list *VAR_12, **VAR_13;
 struct bpf_verifier_state *VAR_14 = VAR_9->cur_state, *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19 = 0;
 bool VAR_20 = VAR_9->test_state_freq ? 1 : 0;

 VAR_14->last_insn_idx = VAR_9->prev_insn_idx;
 if (!VAR_9->insn_aux_data[VAR_10].prune_point)



  return 0;
 if (VAR_9->jmps_processed - VAR_9->prev_jmps_processed >= 2 &&
     VAR_9->insn_processed - VAR_9->prev_insn_processed >= 8)
  VAR_20 = 1;

 VAR_13 = FUNC_4(VAR_9, VAR_10);
 VAR_12 = *VAR_13;

 FUNC_1(VAR_9, VAR_10, VAR_14);

 while (VAR_12) {
  VAR_19++;
  if (VAR_12->state.insn_idx != VAR_10)
   goto next;
  if (VAR_12->state.branches) {
   if (FUNC_12(&VAR_12->state, VAR_14) &&
       FUNC_11(VAR_9, &VAR_12->state, VAR_14)) {
    FUNC_14(VAR_9, VAR_10, "; ");
    FUNC_13(VAR_9, "infinite loop detected at insn %d\n", VAR_10);
    return -VAR_4;
   }
   if (VAR_9->jmps_processed - VAR_9->prev_jmps_processed < 20 &&
       VAR_9->insn_processed - VAR_9->prev_insn_processed < 100)
    VAR_20 = 0;
   goto miss;
  }
  if (FUNC_11(VAR_9, &VAR_12->state, VAR_14)) {
   VAR_12->hit_cnt++;
   VAR_18 = FUNC_8(VAR_9, &VAR_12->state, VAR_14);






   VAR_18 = VAR_18 ? : FUNC_10(VAR_9, VAR_14);
   VAR_18 = VAR_18 ? : FUNC_9(VAR_9, &VAR_12->state);
   if (VAR_18)
    return VAR_18;
   return 1;
  }
miss:






  if (VAR_20)
   VAR_12->miss_cnt++;





  if (VAR_12->miss_cnt > VAR_12->hit_cnt * 3 + 3) {



   *VAR_13 = VAR_12->next;
   if (VAR_12->state.frame[0]->regs[0].live & VAR_7) {
    u32 VAR_21 = VAR_12->state.branches;

    FUNC_0(VAR_21,
       "BUG live_done but branches_to_explore %d\n",
       VAR_21);
    FUNC_5(&VAR_12->state, 0);
    FUNC_6(VAR_12);
    VAR_9->peak_states--;
   } else {




    VAR_12->next = VAR_9->free_list;
    VAR_9->free_list = VAR_12;
   }
   VAR_12 = *VAR_13;
   continue;
  }
next:
  VAR_13 = &VAR_12->next;
  VAR_12 = *VAR_13;
 }

 if (VAR_9->max_states_per_insn < VAR_19)
  VAR_9->max_states_per_insn = VAR_19;

 if (!VAR_9->allow_ptr_leaks && VAR_19 > VAR_0)
  return FUNC_10(VAR_9, VAR_14);

 if (!VAR_20)
  return FUNC_10(VAR_9, VAR_14);
 VAR_11 = FUNC_7(sizeof(struct bpf_verifier_state_list), VAR_6);
 if (!VAR_11)
  return -VAR_5;
 VAR_9->total_states++;
 VAR_9->peak_states++;
 VAR_9->prev_jmps_processed = VAR_9->jmps_processed;
 VAR_9->prev_insn_processed = VAR_9->insn_processed;


 VAR_15 = &VAR_11->state;
 VAR_18 = FUNC_3(VAR_15, VAR_14);
 if (VAR_18) {
  FUNC_5(VAR_15, 0);
  FUNC_6(VAR_11);
  return VAR_18;
 }
 VAR_15->insn_idx = VAR_10;
 FUNC_0(VAR_15->branches != 1,
    "BUG is_state_visited:branches_to_explore=%d insn %d\n", VAR_15->branches, VAR_10);

 VAR_14->parent = VAR_15;
 VAR_14->first_insn_idx = VAR_10;
 FUNC_2(VAR_14);
 VAR_11->next = *FUNC_4(VAR_9, VAR_10);
 *FUNC_4(VAR_9, VAR_10) = VAR_11;
 for (VAR_17 = 0; VAR_17 <= VAR_14->curframe; VAR_17++) {
  for (VAR_16 = VAR_17 < VAR_14->curframe ? VAR_1 : 0; VAR_16 < VAR_2; VAR_16++)
   VAR_14->frame[VAR_17]->regs[VAR_16].parent = &VAR_15->frame[VAR_17]->regs[VAR_16];
  for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++)
   VAR_14->frame[VAR_17]->regs[VAR_16].live = VAR_8;
 }


 for (VAR_17 = 0; VAR_17 <= VAR_14->curframe; VAR_17++) {
  struct bpf_func_state *VAR_22 = VAR_14->frame[VAR_17];
  struct bpf_func_state *VAR_23 = VAR_15->frame[VAR_17];

  for (VAR_16 = 0; VAR_16 < VAR_22->allocated_stack / VAR_3; VAR_16++) {
   VAR_22->stack[VAR_16].spilled_ptr.live = VAR_8;
   VAR_22->stack[VAR_16].spilled_ptr.parent =
      &VAR_23->stack[VAR_16].spilled_ptr;
  }
 }
 return 0;
}
