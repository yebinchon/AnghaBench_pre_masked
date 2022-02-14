
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bpr_req; } ;
struct TYPE_4__ {int bpr_req; } ;
struct nilfs_btree_path {int bp_ctxt; int bp_bh; TYPE_2__ bp_newreq; TYPE_1__ bp_oldreq; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {int i_btnode_cache; } ;


 TYPE_3__* FUNC_0 (struct nilfs_bmap*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct inode*,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct nilfs_bmap *VAR_0,
           struct nilfs_btree_path *VAR_1,
           int VAR_2, struct inode *VAR_3)
{
 FUNC_3(VAR_3, &VAR_1[VAR_2].bp_oldreq.bpr_req,
          &VAR_1[VAR_2].bp_newreq.bpr_req);
 if (FUNC_1(VAR_1[VAR_2].bp_bh))
  FUNC_2(
   &FUNC_0(VAR_0)->i_btnode_cache,
   &VAR_1[VAR_2].bp_ctxt);
}
