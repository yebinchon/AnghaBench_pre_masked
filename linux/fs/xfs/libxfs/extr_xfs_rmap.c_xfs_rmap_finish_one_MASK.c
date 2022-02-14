
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_fsblock_t ;
typedef int xfs_fileoff_t ;
typedef int xfs_filblks_t ;
typedef int xfs_exntst_t ;
typedef scalar_t__ xfs_agnumber_t ;
typedef int xfs_agblock_t ;
typedef int uint64_t ;
struct xfs_trans {struct xfs_mount* t_mountp; } ;
struct xfs_owner_info {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_3__ {scalar_t__ agno; } ;
struct TYPE_4__ {TYPE_1__ a; } ;
struct xfs_btree_cur {struct xfs_mount* bc_mp; TYPE_2__ bc_private; } ;
typedef enum xfs_rmap_intent_type { ____Placeholder_xfs_rmap_intent_type } xfs_rmap_intent_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct xfs_mount*,int ) ;
 scalar_t__ FUNC_2 (struct xfs_mount*,int ) ;
 scalar_t__ FUNC_3 (int,struct xfs_mount*,int ) ;
 int FUNC_4 (struct xfs_mount*,scalar_t__,int,int ,int ,int,int ,int ,int ) ;
 int FUNC_5 (struct xfs_trans*,scalar_t__,struct xfs_buf**) ;
 int FUNC_6 (struct xfs_btree_cur*,int ,int ,int,struct xfs_owner_info*) ;
 int FUNC_7 (struct xfs_btree_cur*,int ,int ,int,struct xfs_owner_info*) ;
 int FUNC_8 (struct xfs_trans*,struct xfs_btree_cur*,int ) ;
 int FUNC_9 (struct xfs_owner_info*,int ,int,int ) ;
 int FUNC_10 (struct xfs_btree_cur*,int ,int ,int,struct xfs_owner_info*) ;
 int FUNC_11 (struct xfs_btree_cur*,int ,int ,int,struct xfs_owner_info*) ;
 int FUNC_12 (struct xfs_btree_cur*,int ,int ,int,struct xfs_owner_info*) ;
 int FUNC_13 (struct xfs_btree_cur*,int ,int ,int,struct xfs_owner_info*) ;
 struct xfs_btree_cur* FUNC_14 (struct xfs_mount*,struct xfs_trans*,struct xfs_buf*,scalar_t__) ;
 int FUNC_15 (struct xfs_trans*,struct xfs_buf*) ;

int
FUNC_16(
 struct xfs_trans *VAR_6,
 enum xfs_rmap_intent_type VAR_7,
 uint64_t VAR_8,
 int VAR_9,
 xfs_fileoff_t VAR_10,
 xfs_fsblock_t VAR_11,
 xfs_filblks_t VAR_12,
 xfs_exntst_t VAR_13,
 struct xfs_btree_cur **VAR_14)
{
 struct xfs_mount *VAR_15 = VAR_6->t_mountp;
 struct xfs_btree_cur *VAR_16;
 struct xfs_buf *VAR_17 = ((void*)0);
 int VAR_18 = 0;
 xfs_agnumber_t VAR_19;
 struct xfs_owner_info VAR_20;
 xfs_agblock_t VAR_21;
 bool VAR_22;

 VAR_19 = FUNC_2(VAR_15, VAR_11);
 FUNC_0(VAR_19 != VAR_3);
 VAR_21 = FUNC_1(VAR_15, VAR_11);

 FUNC_4(VAR_15, VAR_19, VAR_7, VAR_21, VAR_8, VAR_9,
   VAR_10, VAR_12, VAR_13);

 if (FUNC_3(0, VAR_15,
   VAR_4))
  return -VAR_1;





 VAR_16 = *VAR_14;
 if (VAR_16 != ((void*)0) && VAR_16->bc_private.a.agno != VAR_19) {
  FUNC_8(VAR_6, VAR_16, 0);
  VAR_16 = ((void*)0);
  *VAR_14 = ((void*)0);
 }
 if (VAR_16 == ((void*)0)) {





  VAR_18 = FUNC_5(VAR_6, VAR_19, &VAR_17);
  if (VAR_18)
   return VAR_18;
  if (!VAR_17)
   return -VAR_0;

  VAR_16 = FUNC_14(VAR_15, VAR_6, VAR_17, VAR_19);
  if (!VAR_16) {
   VAR_18 = -VAR_2;
   goto out_cur;
  }
 }
 *VAR_14 = VAR_16;

 FUNC_9(&VAR_20, VAR_8, VAR_9, VAR_10);
 VAR_22 = VAR_13 == VAR_5;
 VAR_21 = FUNC_1(VAR_16->bc_mp, VAR_11);

 switch (VAR_7) {
 case 135:
 case 131:
  VAR_18 = FUNC_10(VAR_16, VAR_21, VAR_12, VAR_22, &VAR_20);
  break;
 case 130:
  VAR_18 = FUNC_11(VAR_16, VAR_21, VAR_12, VAR_22,
    &VAR_20);
  break;
 case 132:
 case 129:
  VAR_18 = FUNC_12(VAR_16, VAR_21, VAR_12, VAR_22,
    &VAR_20);
  break;
 case 128:
  VAR_18 = FUNC_13(VAR_16, VAR_21, VAR_12, VAR_22,
    &VAR_20);
  break;
 case 134:
  VAR_18 = FUNC_6(VAR_16, VAR_21, VAR_12, !VAR_22,
    &VAR_20);
  break;
 case 133:
  VAR_18 = FUNC_7(VAR_16, VAR_21, VAR_12,
    !VAR_22, &VAR_20);
  break;
 default:
  FUNC_0(0);
  VAR_18 = -VAR_0;
 }
 return VAR_18;

out_cur:
 FUNC_15(VAR_6, VAR_17);

 return VAR_18;
}
