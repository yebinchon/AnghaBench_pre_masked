
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_dahash_t ;
struct xfs_da_state_blk {int index; } ;
struct xfs_da_node_entry {int hashval; } ;
struct xchk_da_btree {scalar_t__* hashes; TYPE_2__* state; } ;
typedef int __be32 ;
struct TYPE_3__ {struct xfs_da_state_blk* blk; } ;
struct TYPE_4__ {TYPE_1__ path; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct xfs_da_node_entry* FUNC_1 (struct xchk_da_btree*,int,int ) ;
 int FUNC_2 (struct xchk_da_btree*,int) ;

int
FUNC_3(
 struct xchk_da_btree *VAR_0,
 int VAR_1,
 __be32 *VAR_2)
{
 struct xfs_da_state_blk *VAR_3;
 struct xfs_da_node_entry *VAR_4;
 xfs_dahash_t VAR_5;
 xfs_dahash_t VAR_6;


 VAR_5 = FUNC_0(*VAR_2);
 if (VAR_5 < VAR_0->hashes[VAR_1])
  FUNC_2(VAR_0, VAR_1);
 VAR_0->hashes[VAR_1] = VAR_5;

 if (VAR_1 == 0)
  return 0;


 VAR_3 = VAR_0->state->path.blk;
 VAR_4 = FUNC_1(VAR_0, VAR_1 - 1, VAR_3[VAR_1 - 1].index);
 VAR_6 = FUNC_0(VAR_4->hashval);
 if (VAR_6 < VAR_5)
  FUNC_2(VAR_0, VAR_1);

 return 0;
}
