
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ xfs_fsblock_t ;
typedef scalar_t__ xfs_extlen_t ;
typedef scalar_t__ xfs_agnumber_t ;
typedef int xfs_agblock_t ;
struct xfs_trans {struct xfs_mount* t_mountp; } ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_5__ {unsigned long nr_ops; int shape_changes; } ;
struct TYPE_6__ {TYPE_1__ refc; } ;
struct TYPE_7__ {scalar_t__ agno; TYPE_2__ priv; } ;
struct TYPE_8__ {TYPE_3__ a; } ;
struct xfs_btree_cur {TYPE_4__ bc_private; } ;
typedef enum xfs_refcount_intent_type { ____Placeholder_xfs_refcount_intent_type } xfs_refcount_intent_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct xfs_mount*,scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct xfs_mount*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;




 scalar_t__ FUNC_4 (int,struct xfs_mount*,int ) ;
 int FUNC_5 (struct xfs_btree_cur*,int ,scalar_t__) ;
 int FUNC_6 (struct xfs_btree_cur*,int ,scalar_t__) ;
 int FUNC_7 (struct xfs_mount*,scalar_t__,int,int ,scalar_t__) ;
 int FUNC_8 (struct xfs_mount*,scalar_t__,int,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_9 (struct xfs_mount*,struct xfs_trans*,scalar_t__,int ,struct xfs_buf**) ;
 int FUNC_10 (struct xfs_btree_cur*,int ,scalar_t__,int *,scalar_t__*,int ,int *) ;
 int FUNC_11 (struct xfs_trans*,struct xfs_btree_cur*,int ) ;
 struct xfs_btree_cur* FUNC_12 (struct xfs_mount*,struct xfs_trans*,struct xfs_buf*,scalar_t__) ;
 int FUNC_13 (struct xfs_trans*,struct xfs_buf*) ;

int
FUNC_14(
 struct xfs_trans *VAR_8,
 enum xfs_refcount_intent_type VAR_9,
 xfs_fsblock_t VAR_10,
 xfs_extlen_t VAR_11,
 xfs_fsblock_t *VAR_12,
 xfs_extlen_t *VAR_13,
 struct xfs_btree_cur **VAR_14)
{
 struct xfs_mount *VAR_15 = VAR_8->t_mountp;
 struct xfs_btree_cur *VAR_16;
 struct xfs_buf *VAR_17 = ((void*)0);
 int VAR_18 = 0;
 xfs_agnumber_t VAR_19;
 xfs_agblock_t VAR_20;
 xfs_agblock_t VAR_21;
 unsigned long VAR_22 = 0;
 int VAR_23 = 0;

 VAR_19 = FUNC_3(VAR_15, VAR_10);
 FUNC_0(VAR_19 != VAR_3);
 VAR_20 = FUNC_2(VAR_15, VAR_10);

 FUNC_7(VAR_15, FUNC_3(VAR_15, VAR_10),
   VAR_9, FUNC_2(VAR_15, VAR_10),
   VAR_11);

 if (FUNC_4(0, VAR_15,
   VAR_5))
  return -VAR_1;





 VAR_16 = *VAR_14;
 if (VAR_16 != ((void*)0) && VAR_16->bc_private.a.agno != VAR_19) {
  VAR_22 = VAR_16->bc_private.a.priv.refc.nr_ops;
  VAR_23 = VAR_16->bc_private.a.priv.refc.shape_changes;
  FUNC_11(VAR_8, VAR_16, 0);
  VAR_16 = ((void*)0);
  *VAR_14 = ((void*)0);
 }
 if (VAR_16 == ((void*)0)) {
  VAR_18 = FUNC_9(VAR_8->t_mountp, VAR_8, VAR_19,
    VAR_4, &VAR_17);
  if (VAR_18)
   return VAR_18;
  if (!VAR_17)
   return -VAR_0;

  VAR_16 = FUNC_12(VAR_15, VAR_8, VAR_17, VAR_19);
  if (!VAR_16) {
   VAR_18 = -VAR_2;
   goto out_cur;
  }
  VAR_16->bc_private.a.priv.refc.nr_ops = VAR_22;
  VAR_16->bc_private.a.priv.refc.shape_changes = VAR_23;
 }
 *VAR_14 = VAR_16;

 switch (VAR_9) {
 case 128:
  VAR_18 = FUNC_10(VAR_16, VAR_20, VAR_11, &VAR_21,
   VAR_13, VAR_7, ((void*)0));
  *VAR_12 = FUNC_1(VAR_15, VAR_19, VAR_21);
  break;
 case 130:
  VAR_18 = FUNC_10(VAR_16, VAR_20, VAR_11, &VAR_21,
   VAR_13, VAR_6, ((void*)0));
  *VAR_12 = FUNC_1(VAR_15, VAR_19, VAR_21);
  break;
 case 131:
  *VAR_12 = VAR_10 + VAR_11;
  *VAR_13 = 0;
  VAR_18 = FUNC_5(VAR_16, VAR_20, VAR_11);
  break;
 case 129:
  *VAR_12 = VAR_10 + VAR_11;
  *VAR_13 = 0;
  VAR_18 = FUNC_6(VAR_16, VAR_20, VAR_11);
  break;
 default:
  FUNC_0(0);
  VAR_18 = -VAR_0;
 }
 if (!VAR_18 && *VAR_13 > 0)
  FUNC_8(VAR_15, VAR_19, VAR_9,
    VAR_20, VAR_11, VAR_21, *VAR_13);
 return VAR_18;

out_cur:
 FUNC_13(VAR_8, VAR_17);

 return VAR_18;
}
