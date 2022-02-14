
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bpr_ptr; int bpr_req; } ;
struct TYPE_7__ {int bh; } ;
struct TYPE_5__ {int bpr_req; } ;
struct nilfs_btree_path {TYPE_2__ bp_newreq; int bp_index; int bp_bh; TYPE_3__ bp_ctxt; TYPE_1__ bp_oldreq; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {scalar_t__ b_ptr_type; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {int i_btnode_cache; } ;


 TYPE_4__* FUNC_0 (struct nilfs_bmap*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 struct nilfs_btree_node* FUNC_3 (struct nilfs_bmap*,struct nilfs_btree_path*,int,int*) ;
 int FUNC_4 (struct nilfs_btree_node*,int ,int ,int) ;
 int FUNC_5 (struct inode*,int *,int *,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct nilfs_bmap *VAR_1,
     struct nilfs_btree_path *VAR_2,
     int VAR_3, struct inode *VAR_4)
{
 struct nilfs_btree_node *VAR_5;
 int VAR_6;

 FUNC_5(VAR_4, &VAR_2[VAR_3].bp_oldreq.bpr_req,
    &VAR_2[VAR_3].bp_newreq.bpr_req,
    VAR_1->b_ptr_type == VAR_0);

 if (FUNC_1(VAR_2[VAR_3].bp_bh)) {
  FUNC_2(
   &FUNC_0(VAR_1)->i_btnode_cache,
   &VAR_2[VAR_3].bp_ctxt);
  VAR_2[VAR_3].bp_bh = VAR_2[VAR_3].bp_ctxt.bh;
 }
 FUNC_6(VAR_2[VAR_3].bp_bh);

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3 + 1, &VAR_6);
 FUNC_4(VAR_5, VAR_2[VAR_3 + 1].bp_index,
     VAR_2[VAR_3].bp_newreq.bpr_ptr, VAR_6);
}
