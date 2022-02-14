
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_filblks_t ;
typedef int xfs_daddr_t ;
struct TYPE_9__ {char* b_addr; int * b_ops; } ;
typedef TYPE_2__ xfs_buf_t ;
typedef int umode_t ;
typedef scalar_t__ uint ;
struct xfs_trans {int dummy; } ;
struct xfs_name {int len; } ;
struct xfs_mount {int m_flags; int m_ddev_targp; } ;
struct TYPE_8__ {int di_flags; int di_size; int di_format; int di_version; } ;
struct xfs_inode {int i_ino; TYPE_1__ i_d; struct xfs_mount* i_mount; } ;
struct xfs_dquot {int dummy; } ;
struct xfs_bmbt_irec {int br_blockcount; int br_startblock; } ;
typedef int prid_t ;
struct TYPE_10__ {int tr_symlink; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__* FUNC_2 (struct xfs_mount*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (struct xfs_mount*) ;
 int FUNC_4 (struct xfs_mount*,int ) ;
 int FUNC_5 (struct xfs_mount*,int ) ;
 scalar_t__ FUNC_6 (struct xfs_mount*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (struct xfs_inode*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (struct xfs_mount*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_9 (struct xfs_mount*,int) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_10 (struct xfs_mount*,int ,scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char const*,int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (struct xfs_inode*,struct xfs_name*) ;
 int FUNC_17 (struct xfs_trans*,struct xfs_inode*,scalar_t__,scalar_t__,int ,scalar_t__,struct xfs_bmbt_irec*,int*) ;
 int FUNC_18 (struct xfs_trans*,struct xfs_inode*,struct xfs_name*,int ,scalar_t__) ;
 int FUNC_19 (struct xfs_trans**,struct xfs_inode*,int,int,int ,int ,struct xfs_inode**) ;
 int FUNC_20 (struct xfs_inode*) ;
 int FUNC_21 (struct xfs_inode*) ;
 int FUNC_22 (struct xfs_inode*,int) ;
 int FUNC_23 (struct xfs_inode*,int ,char const*,int) ;
 int FUNC_24 (struct xfs_inode*) ;
 int FUNC_25 (struct xfs_inode*,int) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (struct xfs_dquot*) ;
 int FUNC_29 (struct xfs_trans*,struct xfs_inode*,struct xfs_dquot*,struct xfs_dquot*,struct xfs_dquot*) ;
 int FUNC_30 (struct xfs_inode*,int ,int ,int ,int,struct xfs_dquot**,struct xfs_dquot**,struct xfs_dquot**) ;
 scalar_t__ FUNC_31 (struct xfs_mount*,int) ;
 int VAR_23 ;
 int FUNC_32 (struct xfs_mount*,int ,int,int,TYPE_2__*) ;
 int FUNC_33 (struct xfs_mount*,int *,scalar_t__,int ,int ,struct xfs_trans**) ;
 int FUNC_34 (struct xfs_trans*,TYPE_2__*,int ) ;
 int FUNC_35 (struct xfs_trans*) ;
 int FUNC_36 (struct xfs_trans*) ;
 TYPE_2__* FUNC_37 (struct xfs_trans*,int ,int ,int ,int ) ;
 int FUNC_38 (struct xfs_trans*,struct xfs_inode*,int) ;
 int FUNC_39 (struct xfs_trans*,struct xfs_inode*,int) ;
 int FUNC_40 (struct xfs_trans*,TYPE_2__*,int ,int) ;
 int FUNC_41 (struct xfs_trans*,struct xfs_inode*,int) ;
 int FUNC_42 (struct xfs_trans*,struct xfs_mount*,struct xfs_dquot*,struct xfs_dquot*,struct xfs_dquot*,scalar_t__,int,int ) ;
 int FUNC_43 (struct xfs_trans*) ;

int
FUNC_44(
 struct xfs_inode *VAR_24,
 struct xfs_name *VAR_25,
 const char *VAR_26,
 umode_t VAR_27,
 struct xfs_inode **VAR_28)
{
 struct xfs_mount *VAR_29 = VAR_24->i_mount;
 struct xfs_trans *VAR_30 = ((void*)0);
 struct xfs_inode *VAR_31 = ((void*)0);
 int VAR_32 = 0;
 int VAR_33;
 bool VAR_34 = 0;
 xfs_fileoff_t VAR_35;
 xfs_filblks_t VAR_36;
 int VAR_37;
 struct xfs_bmbt_irec VAR_38[VAR_21];
 xfs_daddr_t VAR_39;
 const char *VAR_40;
 int VAR_41;
 int VAR_42;
 xfs_buf_t *VAR_43;
 prid_t VAR_44;
 struct xfs_dquot *VAR_45 = ((void*)0);
 struct xfs_dquot *VAR_46 = ((void*)0);
 struct xfs_dquot *VAR_47 = ((void*)0);
 uint VAR_48;

 *VAR_28 = ((void*)0);

 FUNC_16(VAR_24, VAR_25);

 if (FUNC_3(VAR_29))
  return -VAR_0;




 VAR_33 = FUNC_15(VAR_26);
 if (VAR_33 >= VAR_22)
  return -VAR_1;
 FUNC_0(VAR_33 > 0);

 VAR_45 = VAR_46 = ((void*)0);
 VAR_44 = FUNC_21(VAR_24);




 VAR_32 = FUNC_30(VAR_24,
   FUNC_27(FUNC_12()),
   FUNC_26(FUNC_11()), VAR_44,
   VAR_20 | VAR_19,
   &VAR_45, &VAR_46, &VAR_47);
 if (VAR_32)
  return VAR_32;





 if (VAR_33 <= FUNC_8(VAR_29, VAR_24->i_d.di_version))
  VAR_36 = 0;
 else
  VAR_36 = FUNC_31(VAR_29, VAR_33);
 VAR_48 = FUNC_10(VAR_29, VAR_25->len, VAR_36);

 VAR_32 = FUNC_33(VAR_29, &FUNC_2(VAR_29)->tr_symlink, VAR_48, 0, 0, &VAR_30);
 if (VAR_32)
  goto out_release_inode;

 FUNC_22(VAR_24, VAR_13 | VAR_14);
 VAR_34 = 1;




 if (VAR_24->i_d.di_flags & VAR_9) {
  VAR_32 = -VAR_3;
  goto out_trans_cancel;
 }




 VAR_32 = FUNC_42(VAR_30, VAR_29, VAR_45, VAR_46,
      VAR_47, VAR_48, 1, 0);
 if (VAR_32)
  goto out_trans_cancel;




 VAR_32 = FUNC_19(&VAR_30, VAR_24, VAR_4 | (VAR_27 & ~VAR_5), 1, 0,
          VAR_44, &VAR_31);
 if (VAR_32)
  goto out_trans_cancel;
 FUNC_39(VAR_30, VAR_24, VAR_13);
 VAR_34 = 0;




 FUNC_29(VAR_30, VAR_31, VAR_45, VAR_46, VAR_47);

 if (VAR_48)
  VAR_48 -= FUNC_6(VAR_29);



 if (VAR_33 <= FUNC_7(VAR_31)) {
  FUNC_23(VAR_31, VAR_8, VAR_26, VAR_33);

  VAR_31->i_d.di_size = VAR_33;
  VAR_31->i_d.di_format = VAR_10;
  FUNC_41(VAR_30, VAR_31, VAR_16 | VAR_15);
 } else {
  int VAR_49;

  VAR_35 = 0;
  VAR_37 = VAR_21;

  VAR_32 = FUNC_17(VAR_30, VAR_31, VAR_35, VAR_36,
      VAR_7, VAR_48, VAR_38, &VAR_37);
  if (VAR_32)
   goto out_trans_cancel;

  if (VAR_48)
   VAR_48 -= VAR_36;
  VAR_31->i_d.di_size = VAR_33;
  FUNC_41(VAR_30, VAR_31, VAR_15);

  VAR_40 = VAR_26;
  VAR_49 = 0;
  for (VAR_42 = 0; VAR_42 < VAR_37; VAR_42++) {
   char *VAR_50;

   VAR_39 = FUNC_5(VAR_29, VAR_38[VAR_42].br_startblock);
   VAR_41 = FUNC_4(VAR_29, VAR_38[VAR_42].br_blockcount);
   VAR_43 = FUNC_37(VAR_30, VAR_29->m_ddev_targp, VAR_39,
            FUNC_1(VAR_41), 0);
   if (!VAR_43) {
    VAR_32 = -VAR_2;
    goto out_trans_cancel;
   }
   VAR_43->b_ops = &VAR_23;

   VAR_41 = FUNC_9(VAR_29, VAR_41);
   VAR_41 = FUNC_14(VAR_41, VAR_33);

   VAR_50 = VAR_43->b_addr;
   VAR_50 += FUNC_32(VAR_29, VAR_31->i_ino, VAR_49,
         VAR_41, VAR_43);

   FUNC_13(VAR_50, VAR_40, VAR_41);

   VAR_40 += VAR_41;
   VAR_33 -= VAR_41;
   VAR_49 += VAR_41;

   FUNC_34(VAR_30, VAR_43, VAR_6);
   FUNC_40(VAR_30, VAR_43, 0, (VAR_50 + VAR_41 - 1) -
       (char *)VAR_43->b_addr);
  }
  FUNC_0(VAR_33 == 0);
 }




 VAR_32 = FUNC_18(VAR_30, VAR_24, VAR_25, VAR_31->i_ino, VAR_48);
 if (VAR_32)
  goto out_trans_cancel;
 FUNC_38(VAR_30, VAR_24, VAR_12 | VAR_11);
 FUNC_41(VAR_30, VAR_24, VAR_15);






 if (VAR_29->m_flags & (VAR_18|VAR_17)) {
  FUNC_43(VAR_30);
 }

 VAR_32 = FUNC_36(VAR_30);
 if (VAR_32)
  goto out_release_inode;

 FUNC_28(VAR_45);
 FUNC_28(VAR_46);
 FUNC_28(VAR_47);

 *VAR_28 = VAR_31;
 return 0;

out_trans_cancel:
 FUNC_35(VAR_30);
out_release_inode:





 if (VAR_31) {
  FUNC_20(VAR_31);
  FUNC_24(VAR_31);
 }

 FUNC_28(VAR_45);
 FUNC_28(VAR_46);
 FUNC_28(VAR_47);

 if (VAR_34)
  FUNC_25(VAR_24, VAR_13);
 return VAR_32;
}
