
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct xfs_name {int len; int type; } ;
struct xfs_mount {int dummy; } ;
struct TYPE_4__ {int di_flags; } ;
struct xfs_inode {int i_ino; TYPE_1__ i_d; struct xfs_mount* i_mount; } ;
struct TYPE_6__ {int tr_rename; } ;
struct TYPE_5__ {int i_nlink; int i_state; int i_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (struct xfs_mount*) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct xfs_inode*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct xfs_mount*,int ) ;
 int VAR_14 ;
 int FUNC_5 (struct xfs_inode*,struct xfs_inode*,struct xfs_name*,struct xfs_name*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct xfs_trans*,struct xfs_inode*) ;
 int FUNC_8 (struct xfs_trans*,struct xfs_inode*,struct xfs_name*,struct xfs_inode*,struct xfs_inode*,struct xfs_name*,struct xfs_inode*,int) ;
 int FUNC_9 (struct xfs_trans*,struct xfs_inode*,struct xfs_name*) ;
 int FUNC_10 (struct xfs_trans*,struct xfs_inode*,struct xfs_name*,int ,int) ;
 int FUNC_11 (struct xfs_inode*) ;
 int FUNC_12 (struct xfs_trans*,struct xfs_inode*,struct xfs_name*,int ,int) ;
 int FUNC_13 (struct xfs_trans*,struct xfs_inode*,struct xfs_name*,int ,int) ;
 int FUNC_14 (struct xfs_trans*,struct xfs_inode*) ;
 int FUNC_15 (struct xfs_trans*) ;
 scalar_t__ FUNC_16 (struct xfs_inode*) ;
 int FUNC_17 (struct xfs_inode*) ;
 int FUNC_18 (struct xfs_trans*,struct xfs_inode*) ;
 int FUNC_19 (struct xfs_inode**,int,int ) ;
 struct xfs_name VAR_15 ;
 int FUNC_20 (struct xfs_inode**) ;
 int FUNC_21 (struct xfs_inode*,struct xfs_inode**) ;
 int FUNC_22 (struct xfs_inode*,struct xfs_inode*,struct xfs_inode*,struct xfs_inode*,struct xfs_inode*,struct xfs_inode**,int*) ;
 int FUNC_23 (struct xfs_mount*,int *,int,int ,int ,struct xfs_trans**) ;
 int FUNC_24 (struct xfs_trans*) ;
 int FUNC_25 (struct xfs_trans*,struct xfs_inode*,int) ;
 int FUNC_26 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_27 (struct xfs_trans*,struct xfs_inode*,int ) ;

int
FUNC_28(
 struct xfs_inode *VAR_16,
 struct xfs_name *VAR_17,
 struct xfs_inode *VAR_18,
 struct xfs_inode *VAR_19,
 struct xfs_name *VAR_20,
 struct xfs_inode *VAR_21,
 unsigned int VAR_22)
{
 struct xfs_mount *VAR_23 = VAR_16->i_mount;
 struct xfs_trans *VAR_24;
 struct xfs_inode *VAR_25 = ((void*)0);
 struct xfs_inode *VAR_26[VAR_14];
 int VAR_27 = VAR_14;
 bool VAR_28 = (VAR_16 != VAR_19);
 bool VAR_29 = FUNC_2(FUNC_3(VAR_18)->i_mode);
 int VAR_30;
 int VAR_31;

 FUNC_5(VAR_16, VAR_19, VAR_17, VAR_20);

 if ((VAR_22 & VAR_5) && !VAR_21)
  return -VAR_1;






 if (VAR_22 & VAR_7) {
  FUNC_0(!(VAR_22 & (VAR_6 | VAR_5)));
  VAR_31 = FUNC_21(VAR_19, &VAR_25);
  if (VAR_31)
   return VAR_31;


  VAR_17->type = VAR_9;
 }

 FUNC_22(VAR_16, VAR_19, VAR_18, VAR_21, VAR_25,
    VAR_26, &VAR_27);

 VAR_30 = FUNC_4(VAR_23, VAR_20->len);
 VAR_31 = FUNC_23(VAR_23, &FUNC_1(VAR_23)->tr_rename, VAR_30, 0, 0, &VAR_24);
 if (VAR_31 == -VAR_2) {
  VAR_30 = 0;
  VAR_31 = FUNC_23(VAR_23, &FUNC_1(VAR_23)->tr_rename, 0, 0, 0,
    &VAR_24);
 }
 if (VAR_31)
  goto out_release_wip;




 VAR_31 = FUNC_20(VAR_26);
 if (VAR_31)
  goto out_trans_cancel;







 FUNC_19(VAR_26, VAR_27, VAR_12);






 FUNC_26(VAR_24, VAR_16, VAR_12);
 if (VAR_28)
  FUNC_26(VAR_24, VAR_19, VAR_12);
 FUNC_26(VAR_24, VAR_18, VAR_12);
 if (VAR_21)
  FUNC_26(VAR_24, VAR_21, VAR_12);
 if (VAR_25)
  FUNC_26(VAR_24, VAR_25, VAR_12);






 if (FUNC_6((VAR_19->i_d.di_flags & VAR_8) &&
       (FUNC_16(VAR_19) != FUNC_16(VAR_18)))) {
  VAR_31 = -VAR_3;
  goto out_trans_cancel;
 }


 if (VAR_22 & VAR_5)
  return FUNC_8(VAR_24, VAR_16, VAR_17, VAR_18,
     VAR_19, VAR_20, VAR_21,
     VAR_30);





 if (VAR_21 == ((void*)0)) {




  if (!VAR_30) {
   VAR_31 = FUNC_9(VAR_24, VAR_19, VAR_20);
   if (VAR_31)
    goto out_trans_cancel;
  }
 } else {




  if (FUNC_2(FUNC_3(VAR_21)->i_mode) &&
      (!FUNC_11(VAR_21) ||
       (FUNC_3(VAR_21)->i_nlink > 2))) {
   VAR_31 = -VAR_0;
   goto out_trans_cancel;
  }
 }
 if (VAR_25) {
  FUNC_0(FUNC_3(VAR_25)->i_nlink == 0);
  VAR_31 = FUNC_18(VAR_24, VAR_25);
  if (VAR_31)
   goto out_trans_cancel;

  FUNC_7(VAR_24, VAR_25);
  FUNC_27(VAR_24, VAR_25, VAR_13);
  FUNC_3(VAR_25)->i_state &= ~VAR_4;
 }




 if (VAR_21 == ((void*)0)) {





  VAR_31 = FUNC_10(VAR_24, VAR_19, VAR_20,
        VAR_18->i_ino, VAR_30);
  if (VAR_31)
   goto out_trans_cancel;

  FUNC_25(VAR_24, VAR_19,
     VAR_11 | VAR_10);

  if (VAR_28 && VAR_29) {
   FUNC_7(VAR_24, VAR_19);
  }
 } else {
  VAR_31 = FUNC_13(VAR_24, VAR_19, VAR_20,
     VAR_18->i_ino, VAR_30);
  if (VAR_31)
   goto out_trans_cancel;

  FUNC_25(VAR_24, VAR_19,
     VAR_11 | VAR_10);





  VAR_31 = FUNC_14(VAR_24, VAR_21);
  if (VAR_31)
   goto out_trans_cancel;

  if (VAR_29) {



   VAR_31 = FUNC_14(VAR_24, VAR_21);
   if (VAR_31)
    goto out_trans_cancel;
  }
 }




 if (VAR_28 && VAR_29) {




  VAR_31 = FUNC_13(VAR_24, VAR_18, &VAR_15,
     VAR_19->i_ino, VAR_30);
  FUNC_0(VAR_31 != -VAR_0);
  if (VAR_31)
   goto out_trans_cancel;
 }
 FUNC_25(VAR_24, VAR_18, VAR_10);
 FUNC_27(VAR_24, VAR_18, VAR_13);






 if (VAR_29 && (VAR_28 || VAR_21 != ((void*)0))) {





  VAR_31 = FUNC_14(VAR_24, VAR_16);
  if (VAR_31)
   goto out_trans_cancel;
 }






 if (VAR_25) {
  VAR_31 = FUNC_13(VAR_24, VAR_16, VAR_17, VAR_25->i_ino,
     VAR_30);
 } else
  VAR_31 = FUNC_12(VAR_24, VAR_16, VAR_17, VAR_18->i_ino,
        VAR_30);
 if (VAR_31)
  goto out_trans_cancel;

 FUNC_25(VAR_24, VAR_16, VAR_11 | VAR_10);
 FUNC_27(VAR_24, VAR_16, VAR_13);
 if (VAR_28)
  FUNC_27(VAR_24, VAR_19, VAR_13);

 VAR_31 = FUNC_15(VAR_24);
 if (VAR_25)
  FUNC_17(VAR_25);
 return VAR_31;

out_trans_cancel:
 FUNC_24(VAR_24);
out_release_wip:
 if (VAR_25)
  FUNC_17(VAR_25);
 return VAR_31;
}
