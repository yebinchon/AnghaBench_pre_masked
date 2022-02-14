
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bpr_ptr; } ;
struct nilfs_btree_path {TYPE_1__ bp_newreq; int * bp_sib_bh; int * bp_bh; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nilfs_bmap*,struct nilfs_btree_path*,int,int *,int *) ;
 struct nilfs_btree_node* FUNC_3 (struct nilfs_bmap*) ;
 struct nilfs_btree_node* FUNC_4 (struct nilfs_btree_path*,int) ;
 int FUNC_5 (struct nilfs_bmap*) ;
 int FUNC_6 (struct nilfs_btree_node*,int ) ;
 int FUNC_7 (struct nilfs_btree_node*) ;
 int FUNC_8 (struct nilfs_btree_node*,struct nilfs_btree_node*,int,int ,int) ;
 int FUNC_9 (struct nilfs_btree_node*,int) ;

__attribute__((used)) static void FUNC_10(struct nilfs_bmap *VAR_1,
        struct nilfs_btree_path *VAR_2,
        int VAR_3, __u64 *VAR_4, __u64 *VAR_5)
{
 struct nilfs_btree_node *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = FUNC_3(VAR_1);
 VAR_7 = FUNC_4(VAR_2, VAR_3);
 VAR_9 = FUNC_5(VAR_1);

 VAR_8 = FUNC_7(VAR_6);

 FUNC_8(VAR_6, VAR_7, VAR_8,
        VAR_0, VAR_9);
 FUNC_9(VAR_6, VAR_3 + 1);

 if (!FUNC_0(VAR_2[VAR_3].bp_sib_bh))
  FUNC_1(VAR_2[VAR_3].bp_sib_bh);

 VAR_2[VAR_3].bp_bh = VAR_2[VAR_3].bp_sib_bh;
 VAR_2[VAR_3].bp_sib_bh = ((void*)0);

 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 *VAR_4 = FUNC_6(VAR_7, 0);
 *VAR_5 = VAR_2[VAR_3].bp_newreq.bpr_ptr;
}
