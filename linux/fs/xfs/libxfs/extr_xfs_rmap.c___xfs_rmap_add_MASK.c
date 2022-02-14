
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xfs_trans {int t_mountp; } ;
struct xfs_bmbt_irec {int br_state; int br_blockcount; int br_startoff; int br_startblock; } ;
struct xfs_rmap_intent {int ri_type; int ri_whichfork; int ri_list; struct xfs_bmbt_irec ri_bmap; int ri_owner; } ;
typedef enum xfs_rmap_intent_type { ____Placeholder_xfs_rmap_intent_type } xfs_rmap_intent_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct xfs_rmap_intent* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int,int ,int ,int,int ,int ,int ) ;
 int FUNC_5 (struct xfs_trans*,int ,int *) ;

__attribute__((used)) static void
FUNC_6(
 struct xfs_trans *VAR_2,
 enum xfs_rmap_intent_type VAR_3,
 uint64_t VAR_4,
 int VAR_5,
 struct xfs_bmbt_irec *VAR_6)
{
 struct xfs_rmap_intent *VAR_7;

 FUNC_4(VAR_2->t_mountp,
   FUNC_2(VAR_2->t_mountp, VAR_6->br_startblock),
   VAR_3,
   FUNC_1(VAR_2->t_mountp, VAR_6->br_startblock),
   VAR_4, VAR_5,
   VAR_6->br_startoff,
   VAR_6->br_blockcount,
   VAR_6->br_state);

 VAR_7 = FUNC_3(sizeof(struct xfs_rmap_intent), VAR_0);
 FUNC_0(&VAR_7->ri_list);
 VAR_7->ri_type = VAR_3;
 VAR_7->ri_owner = VAR_4;
 VAR_7->ri_whichfork = VAR_5;
 VAR_7->ri_bmap = *VAR_6;

 FUNC_5(VAR_2, VAR_1, &VAR_7->ri_list);
}
