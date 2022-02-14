
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_fsblock_t ;
typedef int xfs_extlen_t ;
struct xfs_trans {int t_mountp; } ;
struct xfs_refcount_intent {int ri_type; int ri_list; int ri_blockcount; int ri_startblock; } ;
typedef enum xfs_refcount_intent_type { ____Placeholder_xfs_refcount_intent_type } xfs_refcount_intent_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct xfs_refcount_intent* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int,int ,int ) ;
 int FUNC_5 (struct xfs_trans*,int ,int *) ;

__attribute__((used)) static void
FUNC_6(
 struct xfs_trans *VAR_2,
 enum xfs_refcount_intent_type VAR_3,
 xfs_fsblock_t VAR_4,
 xfs_extlen_t VAR_5)
{
 struct xfs_refcount_intent *VAR_6;

 FUNC_4(VAR_2->t_mountp,
   FUNC_2(VAR_2->t_mountp, VAR_4),
   VAR_3, FUNC_1(VAR_2->t_mountp, VAR_4),
   VAR_5);

 VAR_6 = FUNC_3(sizeof(struct xfs_refcount_intent),
   VAR_0);
 FUNC_0(&VAR_6->ri_list);
 VAR_6->ri_type = VAR_3;
 VAR_6->ri_startblock = VAR_4;
 VAR_6->ri_blockcount = VAR_5;

 FUNC_5(VAR_2, VAR_1, &VAR_6->ri_list);
}
