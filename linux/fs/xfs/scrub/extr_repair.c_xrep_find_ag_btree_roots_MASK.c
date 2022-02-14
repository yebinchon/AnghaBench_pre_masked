
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xrep_findroot {struct xfs_buf* agfl_bp; int agf; struct xrep_find_ag_btree* btree_info; struct xfs_scrub* sc; } ;
struct xrep_find_ag_btree {scalar_t__ rmap_owner; scalar_t__ height; int root; scalar_t__ buf_ops; } ;
struct TYPE_2__ {int agno; } ;
struct xfs_scrub {TYPE_1__ sa; int tp; struct xfs_mount* mp; } ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct xfs_btree_cur {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct xfs_btree_cur*,int) ;
 int FUNC_4 (struct xfs_buf*) ;
 int FUNC_5 (struct xfs_btree_cur*,int ,struct xrep_findroot*) ;
 struct xfs_btree_cur* FUNC_6 (struct xfs_mount*,int ,struct xfs_buf*,int ) ;
 int VAR_2 ;

int
FUNC_7(
 struct xfs_scrub *VAR_3,
 struct xfs_buf *VAR_4,
 struct xrep_find_ag_btree *VAR_5,
 struct xfs_buf *VAR_6)
{
 struct xfs_mount *VAR_7 = VAR_3->mp;
 struct xrep_findroot VAR_8;
 struct xrep_find_ag_btree *VAR_9;
 struct xfs_btree_cur *VAR_10;
 int VAR_11;

 FUNC_0(FUNC_4(VAR_4));
 FUNC_0(VAR_6 == ((void*)0) || FUNC_4(VAR_6));

 VAR_8.sc = VAR_3;
 VAR_8.btree_info = VAR_5;
 VAR_8.agf = FUNC_1(VAR_4);
 VAR_8.agfl_bp = VAR_6;
 for (VAR_9 = VAR_5; VAR_9->buf_ops; VAR_9++) {
  FUNC_0(VAR_6 || VAR_9->rmap_owner != VAR_1);
  FUNC_0(FUNC_2(VAR_9->rmap_owner));
  VAR_9->root = VAR_0;
  VAR_9->height = 0;
 }

 VAR_10 = FUNC_6(VAR_7, VAR_3->tp, VAR_4, VAR_3->sa.agno);
 VAR_11 = FUNC_5(VAR_10, VAR_2, &VAR_8);
 FUNC_3(VAR_10, VAR_11);

 return VAR_11;
}
