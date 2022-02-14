
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct xfs_dquot {int dummy; } ;
typedef struct xfs_dquot xfs_trans_t ;
struct TYPE_14__ {int m_flags; int m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef int uint ;
struct TYPE_13__ {int di_gid; int di_uid; } ;
struct xfs_inode {TYPE_1__ i_d; int i_gdquot; int i_udquot; TYPE_2__* i_mount; } ;
struct inode {int i_mode; int i_gid; int i_uid; } ;
struct iattr {int ia_valid; int ia_uid; int ia_gid; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_12__ {int tr_ichange; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_10__* FUNC_1 (TYPE_2__*) ;
 int VAR_11 ;
 int VAR_12 ;
 struct inode* FUNC_2 (struct xfs_inode*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct inode*,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct xfs_inode*) ;
 int FUNC_14 (struct xfs_inode*,int ) ;
 int FUNC_15 (struct xfs_inode*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct xfs_dquot*) ;
 struct xfs_dquot* FUNC_19 (struct xfs_dquot*,struct xfs_inode*,int *,struct xfs_dquot*) ;
 int FUNC_20 (struct xfs_dquot*,struct xfs_inode*,struct xfs_dquot*,struct xfs_dquot*,int *,int ) ;
 int FUNC_21 (struct xfs_inode*,int ,int ,int ,int ,struct xfs_dquot**,struct xfs_dquot**,int *) ;
 scalar_t__ FUNC_22 (int *) ;
 int FUNC_23 (struct xfs_inode*,struct iattr*) ;
 int FUNC_24 (struct xfs_inode*,struct iattr*) ;
 int FUNC_25 (TYPE_2__*,int *,int ,int ,int ,struct xfs_dquot**) ;
 int FUNC_26 (struct xfs_dquot*) ;
 int FUNC_27 (struct xfs_dquot*) ;
 int FUNC_28 (struct xfs_dquot*,struct xfs_inode*,int ) ;
 int FUNC_29 (struct xfs_dquot*,struct xfs_inode*,int ) ;
 int FUNC_30 (struct xfs_dquot*) ;
 int VAR_20 ;

int
FUNC_31(
 struct xfs_inode *VAR_21,
 struct iattr *VAR_22,
 int VAR_23)
{
 xfs_mount_t *VAR_24 = VAR_21->i_mount;
 struct inode *VAR_25 = FUNC_2(VAR_21);
 int VAR_26 = VAR_22->ia_valid;
 xfs_trans_t *VAR_27;
 int VAR_28;
 kuid_t VAR_29 = VAR_10, VAR_30 = VAR_10;
 kgid_t VAR_31 = VAR_9, VAR_32 = VAR_9;
 struct xfs_dquot *VAR_33 = ((void*)0), *VAR_34 = ((void*)0);
 struct xfs_dquot *VAR_35 = ((void*)0), *VAR_36 = ((void*)0);

 FUNC_0((VAR_26 & VAR_5) == 0);
 if (FUNC_5(VAR_24) && (VAR_26 & (VAR_6|VAR_2))) {
  uint VAR_37 = 0;

  if ((VAR_26 & VAR_6) && FUNC_7(VAR_24)) {
   VAR_29 = VAR_22->ia_uid;
   VAR_37 |= VAR_19;
  } else {
   VAR_29 = VAR_25->i_uid;
  }
  if ((VAR_26 & VAR_2) && FUNC_3(VAR_24)) {
   VAR_31 = VAR_22->ia_gid;
   VAR_37 |= VAR_18;
  } else {
   VAR_31 = VAR_25->i_gid;
  }






  FUNC_0(VAR_33 == ((void*)0));
  FUNC_0(VAR_34 == ((void*)0));
  VAR_28 = FUNC_21(VAR_21, FUNC_17(VAR_29),
        FUNC_16(VAR_31),
        FUNC_13(VAR_21),
        VAR_37, &VAR_33, &VAR_34, ((void*)0));
  if (VAR_28)
   return VAR_28;
 }

 VAR_28 = FUNC_25(VAR_24, &FUNC_1(VAR_24)->tr_ichange, 0, 0, 0, &VAR_27);
 if (VAR_28)
  goto out_dqrele;

 FUNC_14(VAR_21, VAR_14);
 FUNC_28(VAR_27, VAR_21, 0);




 if (VAR_26 & (VAR_6|VAR_2)) {






  VAR_30 = VAR_25->i_uid;
  VAR_32 = VAR_25->i_gid;
  VAR_31 = (VAR_26 & VAR_2) ? VAR_22->ia_gid : VAR_32;
  VAR_29 = (VAR_26 & VAR_6) ? VAR_22->ia_uid : VAR_30;





  if (FUNC_6(VAR_24) &&
      ((FUNC_7(VAR_24) && !FUNC_12(VAR_30, VAR_29)) ||
       (FUNC_3(VAR_24) && !FUNC_10(VAR_32, VAR_31)))) {
   FUNC_0(VAR_27);
   VAR_28 = FUNC_20(VAR_27, VAR_21, VAR_33, VAR_34,
      ((void*)0), FUNC_9(VAR_7) ?
      VAR_17 : 0);
   if (VAR_28)
    goto out_cancel;
  }
 }




 if (VAR_26 & (VAR_6|VAR_2)) {






  if ((VAR_25->i_mode & (VAR_12|VAR_11)) &&
      !FUNC_9(VAR_8))
   VAR_25->i_mode &= ~(VAR_12|VAR_11);





  if (!FUNC_12(VAR_30, VAR_29)) {
   if (FUNC_6(VAR_24) && FUNC_7(VAR_24)) {
    FUNC_0(VAR_26 & VAR_6);
    FUNC_0(VAR_33);
    VAR_35 = FUNC_19(VAR_27, VAR_21,
       &VAR_21->i_udquot, VAR_33);
   }
   VAR_21->i_d.di_uid = FUNC_17(VAR_29);
   VAR_25->i_uid = VAR_29;
  }
  if (!FUNC_10(VAR_32, VAR_31)) {
   if (FUNC_6(VAR_24) && FUNC_3(VAR_24)) {
    FUNC_0(FUNC_22(&VAR_24->m_sb) ||
           !FUNC_4(VAR_24));
    FUNC_0(VAR_26 & VAR_2);
    FUNC_0(VAR_34);
    VAR_36 = FUNC_19(VAR_27, VAR_21,
       &VAR_21->i_gdquot, VAR_34);
   }
   VAR_21->i_d.di_gid = FUNC_16(VAR_31);
   VAR_25->i_gid = VAR_31;
  }
 }

 if (VAR_26 & VAR_3)
  FUNC_23(VAR_21, VAR_22);
 if (VAR_26 & (VAR_0|VAR_1|VAR_4))
  FUNC_24(VAR_21, VAR_22);

 FUNC_29(VAR_27, VAR_21, VAR_15);

 FUNC_8(VAR_24, VAR_20);

 if (VAR_24->m_flags & VAR_16)
  FUNC_30(VAR_27);
 VAR_28 = FUNC_27(VAR_27);

 FUNC_15(VAR_21, VAR_14);




 FUNC_18(VAR_35);
 FUNC_18(VAR_36);
 FUNC_18(VAR_33);
 FUNC_18(VAR_34);

 if (VAR_28)
  return VAR_28;
 if ((VAR_26 & VAR_3) && !(VAR_23 & VAR_13)) {
  VAR_28 = FUNC_11(VAR_25, VAR_25->i_mode);
  if (VAR_28)
   return VAR_28;
 }

 return 0;

out_cancel:
 FUNC_26(VAR_27);
 FUNC_15(VAR_21, VAR_14);
out_dqrele:
 FUNC_18(VAR_33);
 FUNC_18(VAR_34);
 return VAR_28;
}
