
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_agino_t ;
struct xfs_iunlink {scalar_t__ const iu_next_unlinked; } ;
struct rhashtable_compare_arg {scalar_t__* key; } ;



__attribute__((used)) static int
FUNC_0(
 struct rhashtable_compare_arg *VAR_0,
 const void *VAR_1)
{
 const xfs_agino_t *VAR_2 = VAR_0->key;
 const struct xfs_iunlink *VAR_3 = VAR_1;

 if (VAR_3->iu_next_unlinked != *VAR_2)
  return 1;
 return 0;
}
