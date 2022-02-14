
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tc_u32_sel {int nkeys; int offshift; TYPE_2__* keys; } ;
struct TYPE_7__ {int prio; int protocol; } ;
struct TYPE_5__ {struct tc_u32_sel* sel; } ;
struct tc_cls_u32_offload {TYPE_3__ common; TYPE_1__ knode; } ;
struct TYPE_8__ {int match_en; int match_data; int frame_offset; } ;
struct stmmac_tc_entry {int prio; int is_frag; int in_use; TYPE_4__ val; struct stmmac_tc_entry* frag_ptr; } ;
struct stmmac_priv {int tc_off_max; } ;
struct TYPE_6__ {int off; int val; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct stmmac_tc_entry*,struct stmmac_tc_entry*,struct tc_cls_u32_offload*) ;
 struct stmmac_tc_entry* FUNC_3 (struct stmmac_priv*,struct tc_cls_u32_offload*,int) ;

__attribute__((used)) static int FUNC_4(struct stmmac_priv *VAR_2,
    struct tc_cls_u32_offload *VAR_3)
{
 struct stmmac_tc_entry *VAR_4, *VAR_5 = ((void*)0);
 struct tc_u32_sel *VAR_6 = VAR_3->knode.sel;
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 u32 VAR_12 = VAR_3->common.prio << 16;
 int VAR_13;


 if (VAR_6->nkeys <= 0 || VAR_6->nkeys > 1)
  return -VAR_0;

 VAR_7 = VAR_6->keys[0].off << VAR_6->offshift;
 VAR_8 = VAR_6->keys[0].val;
 VAR_9 = VAR_6->keys[0].mask;

 switch (FUNC_1(VAR_3->common.protocol)) {
 case 129:
  break;
 case 128:
  VAR_7 += VAR_1;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_7 > VAR_2->tc_off_max)
  return -VAR_0;

 VAR_10 = VAR_7 / 4;
 VAR_11 = VAR_7 % 4;

 VAR_4 = FUNC_3(VAR_2, VAR_3, 1);
 if (!VAR_4)
  return -VAR_0;

 if (VAR_11) {
  VAR_5 = FUNC_3(VAR_2, VAR_3, 1);
  if (!VAR_5) {
   VAR_13 = -VAR_0;
   goto err_unuse;
  }

  VAR_4->frag_ptr = VAR_5;
  VAR_4->val.match_en = (VAR_9 << (VAR_11 * 8)) &
   FUNC_0(31, VAR_11 * 8);
  VAR_4->val.match_data = (VAR_8 << (VAR_11 * 8)) &
   FUNC_0(31, VAR_11 * 8);
  VAR_4->val.frame_offset = VAR_10;
  VAR_4->prio = VAR_12;

  VAR_5->val.match_en = (VAR_9 >> (VAR_11 * 8)) &
   FUNC_0(VAR_11 * 8 - 1, 0);
  VAR_5->val.match_data = (VAR_8 >> (VAR_11 * 8)) &
   FUNC_0(VAR_11 * 8 - 1, 0);
  VAR_5->val.frame_offset = VAR_10 + 1;
  VAR_5->prio = VAR_12;
  VAR_5->is_frag = 1;
 } else {
  VAR_4->frag_ptr = ((void*)0);
  VAR_4->val.match_en = VAR_9;
  VAR_4->val.match_data = VAR_8;
  VAR_4->val.frame_offset = VAR_10;
  VAR_4->prio = VAR_12;
 }

 VAR_13 = FUNC_2(VAR_4, VAR_5, VAR_3);
 if (VAR_13)
  goto err_unuse;

 return 0;

err_unuse:
 if (VAR_5)
  VAR_5->in_use = 0;
 VAR_4->in_use = 0;
 return VAR_13;
}
