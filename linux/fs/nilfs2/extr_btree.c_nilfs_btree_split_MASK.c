
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bpr_ptr; } ;
struct nilfs_btree_path {int bp_index; int * bp_sib_bh; TYPE_1__ bp_newreq; int * bp_bh; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
typedef int __u64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nilfs_bmap*,struct nilfs_btree_path*,int,int *,int *) ;
 struct nilfs_btree_node* FUNC_4 (struct nilfs_btree_path*,int) ;
 struct nilfs_btree_node* FUNC_5 (struct nilfs_btree_path*,int) ;
 int FUNC_6 (struct nilfs_bmap*) ;
 int FUNC_7 (struct nilfs_btree_node*,int ) ;
 int FUNC_8 (struct nilfs_btree_node*) ;
 int FUNC_9 (struct nilfs_btree_node*,int,int ,int ,int) ;
 int FUNC_10 (struct nilfs_btree_node*,struct nilfs_btree_node*,int,int,int) ;

__attribute__((used)) static void FUNC_11(struct nilfs_bmap *VAR_0,
         struct nilfs_btree_path *VAR_1,
         int VAR_2, __u64 *VAR_3, __u64 *VAR_4)
{
 struct nilfs_btree_node *VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_5 = FUNC_4(VAR_1, VAR_2);
 VAR_6 = FUNC_5(VAR_1, VAR_2);
 VAR_7 = FUNC_8(VAR_5);
 VAR_10 = FUNC_6(VAR_0);
 VAR_9 = 0;

 VAR_8 = (VAR_7 + 1) / 2;
 if (VAR_8 > VAR_7 - VAR_1[VAR_2].bp_index) {
  VAR_8--;
  VAR_9 = 1;
 }

 FUNC_10(VAR_5, VAR_6, VAR_8, VAR_10, VAR_10);

 if (!FUNC_1(VAR_1[VAR_2].bp_bh))
  FUNC_2(VAR_1[VAR_2].bp_bh);
 if (!FUNC_1(VAR_1[VAR_2].bp_sib_bh))
  FUNC_2(VAR_1[VAR_2].bp_sib_bh);

 if (VAR_9) {
  VAR_1[VAR_2].bp_index -= FUNC_8(VAR_5);
  FUNC_9(VAR_6, VAR_1[VAR_2].bp_index,
     *VAR_3, *VAR_4, VAR_10);

  *VAR_3 = FUNC_7(VAR_6, 0);
  *VAR_4 = VAR_1[VAR_2].bp_newreq.bpr_ptr;

  FUNC_0(VAR_1[VAR_2].bp_bh);
  VAR_1[VAR_2].bp_bh = VAR_1[VAR_2].bp_sib_bh;
  VAR_1[VAR_2].bp_sib_bh = ((void*)0);
 } else {
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

  *VAR_3 = FUNC_7(VAR_6, 0);
  *VAR_4 = VAR_1[VAR_2].bp_newreq.bpr_ptr;

  FUNC_0(VAR_1[VAR_2].bp_sib_bh);
  VAR_1[VAR_2].bp_sib_bh = ((void*)0);
 }

 VAR_1[VAR_2 + 1].bp_index++;
}
