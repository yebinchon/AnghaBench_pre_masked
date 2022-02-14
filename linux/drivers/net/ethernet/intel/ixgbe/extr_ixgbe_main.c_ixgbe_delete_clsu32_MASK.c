
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int handle; } ;
struct tc_cls_u32_offload {TYPE_1__ knode; } ;
struct ixgbe_jump_table {int link_hdl; struct ixgbe_jump_table* mask; struct ixgbe_jump_table* input; int child_loc_map; } ;
struct ixgbe_adapter {int fdir_perfect_lock; struct ixgbe_jump_table** jump_tables; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ixgbe_adapter*,int *,int) ;
 int FUNC_3 (struct ixgbe_jump_table*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct ixgbe_adapter *VAR_3,
          struct tc_cls_u32_offload *VAR_4)
{
 u32 VAR_5 = VAR_4->knode.handle;
 u32 VAR_6 = FUNC_0(VAR_4->knode.handle);
 u32 VAR_7 = VAR_4->knode.handle & 0xfffff;
 int VAR_8 = 0, VAR_9, VAR_10;
 struct ixgbe_jump_table *VAR_11 = ((void*)0);

 if (VAR_7 > VAR_1)
  return -VAR_0;

 if ((VAR_6 != 0x800) && (VAR_6 >= VAR_2))
  return -VAR_0;


 if (VAR_6 != 0x800) {
  VAR_11 = VAR_3->jump_tables[VAR_6];
  if (!VAR_11)
   return -VAR_0;
  if (!FUNC_6(VAR_7 - 1, VAR_11->child_loc_map))
   return -VAR_0;
  FUNC_1(VAR_7 - 1, VAR_11->child_loc_map);
 }


 for (VAR_9 = 1; VAR_9 < VAR_2; VAR_9++) {
  VAR_11 = VAR_3->jump_tables[VAR_9];
  if (VAR_11 && VAR_11->link_hdl == VAR_5) {



   for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
    if (!FUNC_6(VAR_10, VAR_11->child_loc_map))
     continue;
    FUNC_4(&VAR_3->fdir_perfect_lock);
    VAR_8 = FUNC_2(VAR_3,
              ((void*)0),
              VAR_10 + 1);
    FUNC_5(&VAR_3->fdir_perfect_lock);
    FUNC_1(VAR_10, VAR_11->child_loc_map);
   }

   FUNC_3(VAR_11->input);
   FUNC_3(VAR_11->mask);
   FUNC_3(VAR_11);
   VAR_3->jump_tables[VAR_9] = ((void*)0);
   return VAR_8;
  }
 }

 FUNC_4(&VAR_3->fdir_perfect_lock);
 VAR_8 = FUNC_2(VAR_3, ((void*)0), VAR_7);
 FUNC_5(&VAR_3->fdir_perfect_lock);
 return VAR_8;
}
