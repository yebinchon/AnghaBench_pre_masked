
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_30__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_24__ ;
typedef struct TYPE_32__ TYPE_1__ ;


typedef int xfs_ufsize_t ;
typedef int xfs_trans_t ;
typedef scalar_t__ xfs_off_t ;
struct TYPE_32__ {int sb_rextsize; } ;
struct TYPE_34__ {TYPE_1__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_36__ {TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_filblks_t ;
typedef int xfs_extlen_t ;
struct TYPE_37__ {scalar_t__ br_startblock; scalar_t__ br_startoff; scalar_t__ br_state; scalar_t__ br_blockcount; } ;
typedef TYPE_4__ xfs_bmbt_irec_t ;
typedef int uint ;
struct TYPE_35__ {int tr_write; } ;
struct TYPE_33__ {int if_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_30__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_24__* FUNC_7 (TYPE_3__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__,int ) ;
 int FUNC_14 (int *,TYPE_3__*,scalar_t__,scalar_t__,int,int,TYPE_4__*,int*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*,int) ;
 int FUNC_17 (TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_18 (TYPE_3__*,int) ;
 int FUNC_19 (TYPE_3__*,int) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_2__*,int *,int,int,int,int **) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,TYPE_3__*,int ) ;
 int FUNC_25 (int *,TYPE_3__*,int,int ,int) ;
 int FUNC_26 (int *,TYPE_3__*,long,int ,int) ;
 int FUNC_27 (TYPE_3__*,scalar_t__) ;

int
FUNC_28(
 xfs_inode_t *VAR_13,
 xfs_off_t VAR_14,
 size_t VAR_15,
 xfs_bmbt_irec_t *VAR_16,
 int VAR_17)
{
 xfs_mount_t *VAR_18 = VAR_13->i_mount;
 xfs_fileoff_t VAR_19;
 xfs_fileoff_t VAR_20;
 xfs_filblks_t VAR_21, VAR_22;
 xfs_extlen_t VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 xfs_trans_t *VAR_27;
 uint VAR_28, VAR_29, VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33 = VAR_3;
 uint VAR_34 = 0;

 VAR_26 = FUNC_9(VAR_13);
 VAR_23 = FUNC_15(VAR_13);
 VAR_32 = VAR_9;

 FUNC_0(FUNC_18(VAR_13, VAR_32));

 VAR_19 = FUNC_5(VAR_18, VAR_14);
 VAR_20 = FUNC_4(VAR_18, ((xfs_ufsize_t)(VAR_14 + VAR_15)));
 if ((VAR_14 + VAR_15) > FUNC_8(VAR_13)) {







  FUNC_0(FUNC_7(VAR_13, VAR_5)->if_flags &
        VAR_7);
  VAR_31 = FUNC_17(VAR_13, VAR_23, &VAR_20);
  if (VAR_31)
   goto out_unlock;
 } else {
  if (VAR_17 && (VAR_16->br_startblock == VAR_1))
   VAR_20 = FUNC_10(VAR_20, (xfs_fileoff_t)
     VAR_16->br_blockcount +
     VAR_16->br_startoff);
 }
 VAR_21 = VAR_20 - VAR_19;
 FUNC_0(VAR_21 > 0);
 VAR_22 = FUNC_13(VAR_19, VAR_21, VAR_23);

 if (FUNC_11(VAR_26)) {
  VAR_30 = VAR_28 = VAR_22;
  VAR_30 /= VAR_18->m_sb.sb_rextsize;
  VAR_29 = FUNC_6(VAR_18, 0);
  VAR_25 = VAR_11;
 } else {
  VAR_30 = 0;
  VAR_29 = VAR_28 = FUNC_6(VAR_18, VAR_22);
  VAR_25 = VAR_10;
 }





 FUNC_19(VAR_13, VAR_32);
 VAR_31 = FUNC_20(VAR_13);
 if (VAR_31)
  return VAR_31;
 if (FUNC_1(FUNC_3(VAR_13))) {
  VAR_33 = VAR_2 | VAR_4;
  if (VAR_16->br_state == VAR_6) {
   VAR_34 |= VAR_12;
   VAR_29 = FUNC_6(VAR_18, 0) << 1;
  }
 }
 VAR_31 = FUNC_21(VAR_18, &FUNC_2(VAR_18)->tr_write, VAR_29, VAR_30,
   VAR_34, &VAR_27);
 if (VAR_31)
  return VAR_31;

 VAR_32 = VAR_8;
 FUNC_16(VAR_13, VAR_32);

 VAR_31 = FUNC_25(VAR_27, VAR_13, VAR_28, 0, VAR_25);
 if (VAR_31)
  goto out_trans_cancel;

 FUNC_24(VAR_27, VAR_13, 0);





 VAR_24 = 1;
 VAR_31 = FUNC_14(VAR_27, VAR_13, VAR_19, VAR_21,
    VAR_33, VAR_29, VAR_16, &VAR_24);
 if (VAR_31)
  goto out_res_cancel;




 VAR_31 = FUNC_23(VAR_27);
 if (VAR_31)
  goto out_unlock;




 if (VAR_24 == 0) {
  VAR_31 = -VAR_0;
  goto out_unlock;
 }

 if (FUNC_11(!FUNC_27(VAR_13, VAR_16->br_startblock)))
  VAR_31 = FUNC_12(VAR_13, VAR_16);

out_unlock:
 FUNC_19(VAR_13, VAR_32);
 return VAR_31;

out_res_cancel:
 FUNC_26(VAR_27, VAR_13, (long)VAR_28, 0, VAR_25);
out_trans_cancel:
 FUNC_22(VAR_27);
 goto out_unlock;
}
