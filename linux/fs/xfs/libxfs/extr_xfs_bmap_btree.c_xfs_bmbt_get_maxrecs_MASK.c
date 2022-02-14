
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_ifork {int if_broot_bytes; } ;
struct TYPE_4__ {int whichfork; int ip; } ;
struct TYPE_5__ {TYPE_1__ b; } ;
struct xfs_btree_cur {int bc_nlevels; TYPE_3__* bc_mp; TYPE_2__ bc_private; } ;
struct TYPE_6__ {int* m_bmap_dmxr; } ;


 struct xfs_ifork* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

int
FUNC_2(
 struct xfs_btree_cur *VAR_0,
 int VAR_1)
{
 if (VAR_1 == VAR_0->bc_nlevels - 1) {
  struct xfs_ifork *VAR_2;

  VAR_2 = FUNC_0(VAR_0->bc_private.b.ip,
        VAR_0->bc_private.b.whichfork);

  return FUNC_1(VAR_0->bc_mp,
     VAR_2->if_broot_bytes, VAR_1 == 0);
 }

 return VAR_0->bc_mp->m_bmap_dmxr[VAR_1 != 0];

}
