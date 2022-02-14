
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union xfs_btree_ptr {int s; int l; } ;
struct TYPE_7__ {int agno; } ;
struct TYPE_6__ {int whichfork; TYPE_1__* ip; } ;
struct TYPE_8__ {TYPE_3__ a; TYPE_2__ b; } ;
struct xfs_btree_cur {int bc_flags; int bc_btnum; TYPE_4__ bc_private; int bc_mp; } ;
struct TYPE_5__ {int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct xfs_btree_cur*,int ,int) ;
 scalar_t__ FUNC_3 (struct xfs_btree_cur*,int ,int) ;
 int FUNC_4 (int ,char*,int ,int ,int,int,...) ;

__attribute__((used)) static int
FUNC_5(
 struct xfs_btree_cur *VAR_2,
 union xfs_btree_ptr *VAR_3,
 int VAR_4,
 int VAR_5)
{
 if (VAR_2->bc_flags & VAR_1) {
  if (FUNC_2(VAR_2, FUNC_1((&VAR_3->l)[VAR_4]),
    VAR_5))
   return 0;
  FUNC_4(VAR_2->bc_mp,
"Inode %llu fork %d: Corrupt btree %d pointer at level %d index %d.",
    VAR_2->bc_private.b.ip->i_ino,
    VAR_2->bc_private.b.whichfork, VAR_2->bc_btnum,
    VAR_5, VAR_4);
 } else {
  if (FUNC_3(VAR_2, FUNC_0((&VAR_3->s)[VAR_4]),
    VAR_5))
   return 0;
  FUNC_4(VAR_2->bc_mp,
"AG %u: Corrupt btree %d pointer at level %d index %d.",
    VAR_2->bc_private.a.agno, VAR_2->bc_btnum,
    VAR_5, VAR_4);
 }

 return -VAR_0;
}
