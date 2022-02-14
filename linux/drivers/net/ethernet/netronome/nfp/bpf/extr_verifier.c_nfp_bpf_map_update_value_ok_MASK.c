
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfp_bpf_map {TYPE_4__* use_map; } ;
struct bpf_verifier_env {TYPE_1__* cur_state; } ;
struct bpf_stack_state {scalar_t__* slot_type; } ;
struct TYPE_6__ {int value; } ;
struct bpf_reg_state {size_t frameno; int off; TYPE_2__ var_off; int map_ptr; } ;
struct TYPE_7__ {int value_size; } ;
struct bpf_offloaded_map {TYPE_3__ map; struct nfp_bpf_map* dev_priv; } ;
struct bpf_func_state {struct bpf_stack_state* stack; } ;
struct TYPE_8__ {scalar_t__ type; int non_zero_update; } ;
struct TYPE_5__ {struct bpf_func_state** frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct bpf_reg_state* FUNC_0 (struct bpf_verifier_env*) ;
 struct bpf_offloaded_map* FUNC_1 (int ) ;
 int FUNC_2 (struct bpf_verifier_env*,char*,int,unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct bpf_verifier_env *VAR_5)
{
 const struct bpf_reg_state *VAR_6 = FUNC_0(VAR_5) + VAR_0;
 const struct bpf_reg_state *VAR_7 = FUNC_0(VAR_5) + VAR_1;
 struct bpf_offloaded_map *VAR_8;
 struct bpf_func_state *VAR_9;
 struct nfp_bpf_map *VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = VAR_5->cur_state->frame[VAR_7->frameno];






 VAR_8 = FUNC_1(VAR_6->map_ptr);
 VAR_10 = VAR_8->dev_priv;
 VAR_11 = VAR_7->off + VAR_7->var_off.value;

 for (VAR_12 = 0; VAR_12 < VAR_8->map.value_size; VAR_12++) {
  struct bpf_stack_state *VAR_13;
  unsigned int VAR_14;

  VAR_14 = -(VAR_11 + VAR_12) - 1;
  VAR_13 = &VAR_9->stack[VAR_14 / VAR_2];
  if (VAR_13->slot_type[VAR_14 % VAR_2] == VAR_4)
   continue;

  if (VAR_10->use_map[VAR_12 / 4].type == VAR_3) {
   FUNC_2(VAR_5, "value at offset %d/%d may be non-zero, bpf_map_update_elem() is required to initialize atomic counters to zero to avoid offload endian issues\n",
    VAR_12, VAR_14);
   return 0;
  }
  VAR_10->use_map[VAR_12 / 4].non_zero_update = 1;
 }

 return 1;
}
