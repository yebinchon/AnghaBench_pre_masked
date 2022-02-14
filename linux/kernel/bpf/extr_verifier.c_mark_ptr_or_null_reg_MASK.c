
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bpf_reg_state {scalar_t__ type; scalar_t__ id; scalar_t__ ref_obj_id; TYPE_1__* map_ptr; scalar_t__ off; int var_off; scalar_t__ smax_value; scalar_t__ smin_value; } ;
struct bpf_func_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ map_type; struct TYPE_2__* inner_map_meta; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct bpf_reg_state*) ;
 int FUNC_2 (struct bpf_reg_state*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct bpf_func_state *VAR_12,
     struct bpf_reg_state *VAR_13, u32 VAR_14,
     bool VAR_15)
{
 if (FUNC_3(VAR_13->type) && VAR_13->id == VAR_14) {




  if (FUNC_0(VAR_13->smin_value || VAR_13->smax_value ||
     !FUNC_4(VAR_13->var_off, 0) ||
     VAR_13->off)) {
   FUNC_1(VAR_13);
   VAR_13->off = 0;
  }
  if (VAR_15) {
   VAR_13->type = VAR_11;
  } else if (VAR_13->type == VAR_3) {
   if (VAR_13->map_ptr->inner_map_meta) {
    VAR_13->type = VAR_1;
    VAR_13->map_ptr = VAR_13->map_ptr->inner_map_meta;
   } else if (VAR_13->map_ptr->map_type ==
       VAR_0) {
    VAR_13->type = VAR_10;
   } else {
    VAR_13->type = VAR_2;
   }
  } else if (VAR_13->type == VAR_5) {
   VAR_13->type = VAR_4;
  } else if (VAR_13->type == VAR_7) {
   VAR_13->type = VAR_6;
  } else if (VAR_13->type == VAR_9) {
   VAR_13->type = VAR_8;
  }
  if (VAR_15) {




   VAR_13->id = 0;
   VAR_13->ref_obj_id = 0;
  } else if (!FUNC_2(VAR_13)) {






   VAR_13->id = 0;
  }
 }
}
