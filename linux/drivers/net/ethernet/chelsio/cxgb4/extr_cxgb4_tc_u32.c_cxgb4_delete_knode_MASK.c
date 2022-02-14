
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int handle; } ;
struct tc_cls_u32_offload {TYPE_1__ knode; } ;
struct net_device {int dummy; } ;
struct cxgb4_tc_u32_table {int size; struct cxgb4_link* table; } ;
struct cxgb4_link {int link_handle; int fs; int * match_field; int tid_map; } ;
struct TYPE_4__ {unsigned int nftids; } ;
struct adapter {TYPE_2__ tids; struct cxgb4_tc_u32_table* tc_u32; int pdev_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,unsigned int,int *,int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (struct net_device*,unsigned int,int *) ;
 int FUNC_5 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_6 (int *,int ,int) ;
 struct adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 (unsigned int,int ) ;

int FUNC_9(struct net_device *VAR_3, struct tc_cls_u32_offload *VAR_4)
{
 struct adapter *VAR_5 = FUNC_7(VAR_3);
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 struct cxgb4_link *VAR_10 = ((void*)0);
 struct cxgb4_tc_u32_table *VAR_11;
 u32 VAR_12, VAR_13;
 int VAR_14;

 if (!FUNC_2(VAR_3))
  return -VAR_1;


 VAR_6 = VAR_4->knode.handle & 0xFFFFF;

 if (VAR_6 > VAR_5->tids.nftids) {
  FUNC_5(VAR_5->pdev_dev,
   "Location %d out of range for deletion. Max: %d\n",
   VAR_6, VAR_5->tids.nftids);
  return -VAR_2;
 }

 VAR_11 = VAR_5->tc_u32;
 VAR_12 = VAR_4->knode.handle;
 VAR_13 = FUNC_0(VAR_4->knode.handle);




 if (VAR_13 != 0x800 && VAR_13 >= VAR_11->size)
  return -VAR_0;


 if (VAR_13 != 0x800) {
  VAR_10 = &VAR_11->table[VAR_13 - 1];
  if (!VAR_10->link_handle)
   return -VAR_0;

  if (!FUNC_8(VAR_6, VAR_10->tid_map))
   return -VAR_0;
 }

 VAR_14 = FUNC_4(VAR_3, VAR_6, ((void*)0));
 if (VAR_14)
  goto out;

 if (VAR_10)
  FUNC_3(VAR_6, VAR_10->tid_map);




 VAR_7 = VAR_5->tids.nftids;
 for (VAR_8 = 0; VAR_8 < VAR_11->size; VAR_8++) {
  VAR_10 = &VAR_11->table[VAR_8];

  if (VAR_10->link_handle == VAR_12) {
   for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
    if (!FUNC_8(VAR_9, VAR_10->tid_map))
     continue;

    VAR_14 = FUNC_1(VAR_3, VAR_9, ((void*)0), ((void*)0));
    if (VAR_14)
     goto out;

    FUNC_3(VAR_9, VAR_10->tid_map);
   }


   VAR_10->match_field = ((void*)0);
   VAR_10->link_handle = 0;
   FUNC_6(&VAR_10->fs, 0, sizeof(VAR_10->fs));
   break;
  }
 }

out:
 return VAR_14;
}
