
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bpr_req; scalar_t__ bpr_ptr; } ;
struct TYPE_5__ {int bpr_req; int bpr_ptr; } ;
struct TYPE_7__ {int bh; scalar_t__ newkey; int oldkey; } ;
struct nilfs_btree_path {TYPE_2__ bp_newreq; TYPE_1__ bp_oldreq; TYPE_3__ bp_ctxt; int bp_bh; int bp_index; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {int i_btnode_cache; } ;


 TYPE_4__* FUNC_0 (struct nilfs_bmap*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 struct nilfs_btree_node* FUNC_3 (struct nilfs_bmap*,struct nilfs_btree_path*,int,int*) ;
 int FUNC_4 (struct nilfs_btree_node*,int ,int) ;
 int FUNC_5 (struct inode*,int *,int *) ;
 int FUNC_6 (struct inode*,int *,int *) ;

__attribute__((used)) static int FUNC_7(struct nilfs_bmap *VAR_0,
     struct nilfs_btree_path *VAR_1,
     int VAR_2, struct inode *VAR_3)
{
 struct nilfs_btree_node *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2 + 1, &VAR_5);
 VAR_1[VAR_2].bp_oldreq.bpr_ptr =
  FUNC_4(VAR_4, VAR_1[VAR_2 + 1].bp_index,
      VAR_5);
 VAR_1[VAR_2].bp_newreq.bpr_ptr = VAR_1[VAR_2].bp_oldreq.bpr_ptr + 1;
 VAR_6 = FUNC_6(VAR_3, &VAR_1[VAR_2].bp_oldreq.bpr_req,
           &VAR_1[VAR_2].bp_newreq.bpr_req);
 if (VAR_6 < 0)
  return VAR_6;

 if (FUNC_1(VAR_1[VAR_2].bp_bh)) {
  VAR_1[VAR_2].bp_ctxt.oldkey = VAR_1[VAR_2].bp_oldreq.bpr_ptr;
  VAR_1[VAR_2].bp_ctxt.newkey = VAR_1[VAR_2].bp_newreq.bpr_ptr;
  VAR_1[VAR_2].bp_ctxt.bh = VAR_1[VAR_2].bp_bh;
  VAR_6 = FUNC_2(
   &FUNC_0(VAR_0)->i_btnode_cache,
   &VAR_1[VAR_2].bp_ctxt);
  if (VAR_6 < 0) {
   FUNC_5(VAR_3,
            &VAR_1[VAR_2].bp_oldreq.bpr_req,
            &VAR_1[VAR_2].bp_newreq.bpr_req);
   return VAR_6;
  }
 }

 return 0;
}
