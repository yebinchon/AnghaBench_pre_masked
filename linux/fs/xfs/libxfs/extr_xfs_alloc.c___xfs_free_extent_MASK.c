
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_fsblock_t ;
typedef scalar_t__ xfs_extlen_t ;
typedef int xfs_agnumber_t ;
typedef scalar_t__ xfs_agblock_t ;
struct xfs_trans {struct xfs_mount* t_mountp; } ;
struct xfs_owner_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ sb_agblocks; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_buf {int dummy; } ;
typedef enum xfs_ag_resv_type { ____Placeholder_xfs_ag_resv_type } xfs_ag_resv_type ;
struct TYPE_4__ {int agf_length; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct xfs_buf*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_2 (struct xfs_mount*,int ) ;
 int FUNC_3 (struct xfs_mount*,int ) ;
 scalar_t__ FUNC_4 (int,struct xfs_mount*,int ) ;
 int FUNC_5 (struct xfs_mount*,int,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (struct xfs_trans*,int ,scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_8 (struct xfs_trans*,struct xfs_buf*,int ,scalar_t__,scalar_t__,struct xfs_owner_info const*,int) ;
 int FUNC_9 (struct xfs_trans*,int ,struct xfs_buf**) ;
 int FUNC_10 (struct xfs_trans*,struct xfs_buf*) ;

int
FUNC_11(
 struct xfs_trans *VAR_5,
 xfs_fsblock_t VAR_6,
 xfs_extlen_t VAR_7,
 const struct xfs_owner_info *VAR_8,
 enum xfs_ag_resv_type VAR_9,
 bool VAR_10)
{
 struct xfs_mount *VAR_11 = VAR_5->t_mountp;
 struct xfs_buf *VAR_12;
 xfs_agnumber_t VAR_13 = FUNC_3(VAR_11, VAR_6);
 xfs_agblock_t VAR_14 = FUNC_2(VAR_11, VAR_6);
 int VAR_15;
 unsigned int VAR_16 = 0;

 FUNC_0(VAR_7 != 0);
 FUNC_0(VAR_9 != VAR_1);

 if (FUNC_4(0, VAR_11,
   VAR_2))
  return -VAR_0;

 VAR_15 = FUNC_9(VAR_5, VAR_13, &VAR_12);
 if (VAR_15)
  return VAR_15;

 FUNC_5(VAR_11, VAR_14 < VAR_11->m_sb.sb_agblocks, VAR_4);


 FUNC_5(VAR_11,
  VAR_14 + VAR_7 <= FUNC_6(FUNC_1(VAR_12)->agf_length),
    VAR_4);

 VAR_15 = FUNC_8(VAR_5, VAR_12, VAR_13, VAR_14, VAR_7, VAR_8, VAR_9);
 if (VAR_15)
  goto err;

 if (VAR_10)
  VAR_16 |= VAR_3;
 FUNC_7(VAR_5, VAR_13, VAR_14, VAR_7, VAR_16);
 return 0;

err:
 FUNC_10(VAR_5, VAR_12);
 return VAR_15;
}
