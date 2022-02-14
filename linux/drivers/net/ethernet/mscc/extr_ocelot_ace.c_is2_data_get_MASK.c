
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vcap_data {int tg_sw; int tg_value; int key_offset; int counter_offset; int type; scalar_t__ action_offset; int tg_mask; } ;
struct TYPE_4__ {int tg_width; int sw_count; int entry_width; int counter_width; scalar_t__ action_type_width; TYPE_1__* action_table; } ;
struct TYPE_3__ {int width; int count; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct vcap_data *VAR_2, int VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 = VAR_1;

 VAR_7 = (VAR_2->tg_sw == VAR_0 ? 2 : 4);
 VAR_5 = (VAR_3 % 2);
 VAR_8 = (VAR_1 / VAR_7);
 VAR_9 = (VAR_1 - VAR_5 * VAR_8 - VAR_8);
 VAR_2->tg_value = 0;
 VAR_2->tg_mask = 0;
 for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4++) {
  VAR_6 = ((VAR_9 + VAR_4) * VAR_10);
  VAR_2->tg_value |= (VAR_2->tg_sw << VAR_6);
  VAR_2->tg_mask |= FUNC_0(VAR_6 + VAR_10 - 1, VAR_6);
 }


 VAR_5 = (VAR_7 - VAR_5 - 1);
 VAR_2->key_offset = (VAR_9 * VAR_1) / VAR_1;
 VAR_2->counter_offset = (VAR_8 * VAR_5 * VAR_1);
 VAR_4 = VAR_2->type;
 VAR_10 = VAR_1[VAR_4].width;
 VAR_8 = VAR_1[VAR_4].count;
 VAR_2->action_offset =
  (((VAR_8 * VAR_5 * VAR_10) / VAR_7) + VAR_1);
}
