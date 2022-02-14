
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dbg_attn_block_type_data {int dummy; } ;
struct dbg_attn_block {struct dbg_attn_block_type_data const* per_type_data; } ;
typedef enum dbg_attn_type { ____Placeholder_dbg_attn_type } dbg_attn_type ;
typedef enum block_id { ____Placeholder_block_id } block_id ;
struct TYPE_2__ {scalar_t__ ptr; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const struct dbg_attn_block_type_data *
FUNC_0(enum block_id VAR_2, enum dbg_attn_type VAR_3)
{
 const struct dbg_attn_block *VAR_4 =
  (const struct dbg_attn_block *)
  VAR_1[VAR_0].ptr;

 return &VAR_4[VAR_2].per_type_data[VAR_3];
}
