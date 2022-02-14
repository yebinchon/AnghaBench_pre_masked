
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_15__ {int handle; int link_handle; TYPE_6__* sel; } ;
struct TYPE_11__ {scalar_t__ protocol; } ;
struct tc_cls_u32_offload {TYPE_7__ knode; TYPE_3__ common; } ;
struct net_device {int dummy; } ;
struct cxgb4_tc_u32_table {int size; struct cxgb4_link* table; } ;
struct cxgb4_next_header {scalar_t__ offoff; scalar_t__ shift; scalar_t__ mask; scalar_t__ offset; int match_off; int match_val; int match_mask; struct cxgb4_match_field* jump; } ;
struct cxgb4_match_field {int dummy; } ;
struct TYPE_10__ {int iport; } ;
struct TYPE_9__ {int iport; } ;
struct ch_filter_specification {int hitcnts; int type; TYPE_2__ mask; TYPE_1__ val; } ;
struct cxgb4_link {int link_handle; int tid_map; struct ch_filter_specification fs; struct cxgb4_match_field* match_field; } ;
struct TYPE_12__ {unsigned int nftids; } ;
struct adapter {int pdev_dev; struct cxgb4_tc_u32_table* tc_u32; TYPE_4__ tids; } ;
typedef int fs ;
typedef scalar_t__ __be16 ;
struct TYPE_16__ {int port_id; } ;
struct TYPE_14__ {scalar_t__ offoff; scalar_t__ offshift; scalar_t__ offmask; scalar_t__ off; unsigned int nkeys; TYPE_5__* keys; } ;
struct TYPE_13__ {int off; int val; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*) ;
 struct cxgb4_match_field* VAR_5 ;
 struct cxgb4_next_header* VAR_6 ;
 struct cxgb4_match_field* VAR_7 ;
 struct cxgb4_next_header* VAR_8 ;
 int FUNC_2 (struct net_device*,unsigned int,struct ch_filter_specification*) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (struct adapter*,struct ch_filter_specification*,struct tc_cls_u32_offload*) ;
 int FUNC_5 (struct adapter*,struct ch_filter_specification*,struct tc_cls_u32_offload*,struct cxgb4_match_field const*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct ch_filter_specification*,struct ch_filter_specification*,int) ;
 int FUNC_8 (struct ch_filter_specification*,int ,int) ;
 struct adapter* FUNC_9 (struct net_device*) ;
 TYPE_8__* FUNC_10 (struct net_device*) ;
 int FUNC_11 (unsigned int,int ) ;

int FUNC_12(struct net_device *VAR_9, struct tc_cls_u32_offload *VAR_10)
{
 const struct cxgb4_match_field *VAR_11, *VAR_12 = ((void*)0);
 struct adapter *VAR_13 = FUNC_9(VAR_9);
 __be16 VAR_14 = VAR_10->common.protocol;
 struct ch_filter_specification VAR_15;
 struct cxgb4_tc_u32_table *VAR_16;
 struct cxgb4_link *VAR_17;
 unsigned int VAR_18;
 u32 VAR_19, VAR_20;
 bool VAR_21 = 0;
 int VAR_22;

 if (!FUNC_1(VAR_9))
  return -VAR_1;

 if (VAR_14 != FUNC_6(VAR_3) && VAR_14 != FUNC_6(VAR_4))
  return -VAR_1;


 VAR_18 = VAR_10->knode.handle & 0xFFFFF;

 if (VAR_18 > VAR_13->tids.nftids) {
  FUNC_3(VAR_13->pdev_dev,
   "Location %d out of range for insertion. Max: %d\n",
   VAR_18, VAR_13->tids.nftids);
  return -VAR_2;
 }

 VAR_16 = VAR_13->tc_u32;
 VAR_19 = FUNC_0(VAR_10->knode.handle);
 VAR_20 = FUNC_0(VAR_10->knode.link_handle);




 if (VAR_19 != 0x800 && VAR_19 >= VAR_16->size)
  return -VAR_0;


 if (VAR_20 >= VAR_16->size)
  return -VAR_0;

 FUNC_8(&VAR_15, 0, sizeof(VAR_15));

 if (VAR_14 == FUNC_6(VAR_4)) {
  VAR_11 = VAR_7;
  VAR_21 = 1;
 } else {
  VAR_11 = VAR_5;
  VAR_21 = 0;
 }

 if (VAR_19 != 0x800) {

  if (!VAR_16->table[VAR_19 - 1].link_handle)
   return -VAR_0;


  VAR_12 = VAR_16->table[VAR_19 - 1].match_field;
  if (!VAR_12)
   return -VAR_0;
 }




 if (VAR_20) {
  const struct cxgb4_next_header *VAR_23;
  bool VAR_24 = 0;
  unsigned int VAR_25, VAR_26;
  u32 VAR_27, VAR_28;
  int VAR_29;

  if (VAR_16->table[VAR_20 - 1].link_handle) {
   FUNC_3(VAR_13->pdev_dev,
    "Link handle exists for: 0x%x\n",
    VAR_20);
   return -VAR_0;
  }

  VAR_23 = VAR_21 ? VAR_8 : VAR_6;


  for (VAR_25 = 0; VAR_23[VAR_25].jump; VAR_25++) {
   if (VAR_23[VAR_25].offoff != VAR_10->knode.sel->offoff ||
       VAR_23[VAR_25].shift != VAR_10->knode.sel->offshift ||
       VAR_23[VAR_25].mask != VAR_10->knode.sel->offmask ||
       VAR_23[VAR_25].offset != VAR_10->knode.sel->off)
    continue;





   for (VAR_26 = 0; VAR_26 < VAR_10->knode.sel->nkeys; VAR_26++) {
    VAR_29 = VAR_10->knode.sel->keys[VAR_26].off;
    VAR_27 = VAR_10->knode.sel->keys[VAR_26].val;
    VAR_28 = VAR_10->knode.sel->keys[VAR_26].mask;

    if (VAR_23[VAR_25].match_off == VAR_29 &&
        VAR_23[VAR_25].match_val == VAR_27 &&
        VAR_23[VAR_25].match_mask == VAR_28) {
     VAR_24 = 1;
     break;
    }
   }

   if (!VAR_24)
    continue;






   VAR_22 = FUNC_5(VAR_13, &VAR_15, VAR_10,
      VAR_11, 0);
   if (VAR_22)
    goto out;

   VAR_17 = &VAR_16->table[VAR_20 - 1];
   VAR_17->match_field = VAR_23[VAR_25].jump;
   VAR_17->link_handle = VAR_10->knode.handle;
   FUNC_7(&VAR_17->fs, &VAR_15, sizeof(VAR_15));
   break;
  }


  if (!VAR_24)
   return -VAR_0;

  return 0;
 }





 if (VAR_19 != 0x800 && VAR_16->table[VAR_19 - 1].link_handle) {

  FUNC_7(&VAR_15, &VAR_16->table[VAR_19 - 1].fs, sizeof(VAR_15));
  VAR_22 = FUNC_5(VAR_13, &VAR_15, VAR_10,
     VAR_12, 1);
  if (VAR_22)
   goto out;
 }

 VAR_22 = FUNC_5(VAR_13, &VAR_15, VAR_10, VAR_11, 0);
 if (VAR_22)
  goto out;




 VAR_22 = FUNC_4(VAR_13, &VAR_15, VAR_10);
 if (VAR_22)
  goto out;
 VAR_15.val.iport = FUNC_10(VAR_9)->port_id;
 VAR_15.mask.iport = ~0;


 VAR_15.hitcnts = 1;


 VAR_15.type = VAR_21 ? 1 : 0;


 VAR_22 = FUNC_2(VAR_9, VAR_18, &VAR_15);
 if (VAR_22)
  goto out;





 if (VAR_19 != 0x800 && VAR_16->table[VAR_19 - 1].link_handle)
  FUNC_11(VAR_18, VAR_16->table[VAR_19 - 1].tid_map);

out:
 return VAR_22;
}
