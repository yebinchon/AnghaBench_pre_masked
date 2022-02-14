
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {char* enc_actions; } ;
struct mlxsw_afa_set {TYPE_2__ ht_key; struct mlxsw_afa_set* next; struct mlxsw_afa_set* prev; } ;
struct mlxsw_afa_block {int cur_act_index; struct mlxsw_afa_set* cur_set; TYPE_1__* afa; scalar_t__ finished; } ;
struct TYPE_3__ {scalar_t__ max_acts_per_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,scalar_t__) ;
 struct mlxsw_afa_set* FUNC_2 (int) ;

__attribute__((used)) static char *FUNC_3(struct mlxsw_afa_block *VAR_4,
        u8 VAR_5, u8 VAR_6)
{
 char *VAR_7;
 char *VAR_8;

 if (VAR_4->finished)
  return FUNC_0(-VAR_0);
 if (VAR_4->cur_act_index + VAR_6 >
     VAR_4->afa->max_acts_per_set) {
  struct mlxsw_afa_set *VAR_9;




  VAR_9 = FUNC_2(0);
  if (!VAR_9)
   return FUNC_0(-VAR_1);
  VAR_9->prev = VAR_4->cur_set;
  VAR_4->cur_act_index = 0;
  VAR_4->cur_set->next = VAR_9;
  VAR_4->cur_set = VAR_9;
 }

 VAR_8 = VAR_4->cur_set->ht_key.enc_actions;
 VAR_7 = VAR_8 + VAR_4->cur_act_index * VAR_2;
 VAR_4->cur_act_index += VAR_6;
 FUNC_1(VAR_7, VAR_5);
 return VAR_7 + VAR_3;
}
