
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bpf_verifier_env {int longest_mark_read_walk; } ;
struct TYPE_2__ {int value; } ;
struct bpf_reg_state {int live; size_t type; struct bpf_reg_state* parent; int off; TYPE_1__ var_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (struct bpf_verifier_env*,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct bpf_verifier_env *VAR_7,
    const struct bpf_reg_state *VAR_8,
    struct bpf_reg_state *VAR_9, u8 VAR_10)
{
 bool VAR_11 = VAR_9 == VAR_8->parent;
 int VAR_12 = 0;

 while (VAR_9) {

  if (VAR_11 && VAR_8->live & VAR_5)
   break;
  if (VAR_9->live & VAR_1) {
   FUNC_0(VAR_7, "verifier BUG type %s var_off %lld off %d\n",
    VAR_6[VAR_9->type],
    VAR_9->var_off.value, VAR_9->off);
   return -VAR_0;
  }



  if ((VAR_9->live & VAR_2) == VAR_10 ||
      VAR_9->live & VAR_4)
   break;

  VAR_9->live |= VAR_10;

  if (VAR_10 == VAR_4)
   VAR_9->live &= ~VAR_3;
  VAR_8 = VAR_9;
  VAR_9 = VAR_8->parent;
  VAR_11 = 1;
  VAR_12++;
 }

 if (VAR_7->longest_mark_read_walk < VAR_12)
  VAR_7->longest_mark_read_walk = VAR_12;
 return 0;
}
