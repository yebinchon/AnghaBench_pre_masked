
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_22__ ;
typedef struct TYPE_25__ TYPE_20__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_24__ {int m_flags; } ;
typedef TYPE_1__ xfs_mount_t ;
struct TYPE_27__ {int i_ino; TYPE_1__* i_mount; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef scalar_t__ uint ;
struct xfs_name {int dummy; } ;
struct TYPE_26__ {int tr_remove; } ;
struct TYPE_25__ {int i_nlink; int i_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_22__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 TYPE_20__* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,struct xfs_name*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,TYPE_2__*,struct xfs_name*,int ,scalar_t__) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int ,TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_1__*,int *,scalar_t__,int ,int ,int **) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,TYPE_2__*,int) ;
 int FUNC_18 (int *,TYPE_2__*,int ) ;
 int FUNC_19 (int *,TYPE_2__*,int ) ;
 int FUNC_20 (int *) ;

int
FUNC_21(
 xfs_inode_t *VAR_10,
 struct xfs_name *VAR_11,
 xfs_inode_t *VAR_12)
{
 xfs_mount_t *VAR_13 = VAR_10->i_mount;
 xfs_trans_t *VAR_14 = ((void*)0);
 int VAR_15 = FUNC_2(FUNC_3(VAR_12)->i_mode);
 int VAR_16 = 0;
 uint VAR_17;

 FUNC_6(VAR_10, VAR_11);

 if (FUNC_4(VAR_13))
  return -VAR_0;

 VAR_16 = FUNC_13(VAR_10);
 if (VAR_16)
  goto std_return;

 VAR_16 = FUNC_13(VAR_12);
 if (VAR_16)
  goto std_return;
 VAR_17 = FUNC_5(VAR_13);
 VAR_16 = FUNC_14(VAR_13, &FUNC_1(VAR_13)->tr_remove, VAR_17, 0, 0, &VAR_14);
 if (VAR_16 == -VAR_2) {
  VAR_17 = 0;
  VAR_16 = FUNC_14(VAR_13, &FUNC_1(VAR_13)->tr_remove, 0, 0, 0,
    &VAR_14);
 }
 if (VAR_16) {
  FUNC_0(VAR_16 != -VAR_2);
  goto std_return;
 }

 FUNC_12(VAR_10, VAR_6, VAR_12, VAR_6);

 FUNC_18(VAR_14, VAR_10, VAR_6);
 FUNC_18(VAR_14, VAR_12, VAR_6);




 if (VAR_15) {
  FUNC_0(FUNC_3(VAR_12)->i_nlink >= 2);
  if (FUNC_3(VAR_12)->i_nlink != 2) {
   VAR_16 = -VAR_3;
   goto out_trans_cancel;
  }
  if (!FUNC_7(VAR_12)) {
   VAR_16 = -VAR_3;
   goto out_trans_cancel;
  }


  VAR_16 = FUNC_9(VAR_14, VAR_10);
  if (VAR_16)
   goto out_trans_cancel;


  VAR_16 = FUNC_9(VAR_14, VAR_12);
  if (VAR_16)
   goto out_trans_cancel;
 } else {





  FUNC_19(VAR_14, VAR_10, VAR_7);
 }
 FUNC_17(VAR_14, VAR_10, VAR_5 | VAR_4);


 VAR_16 = FUNC_9(VAR_14, VAR_12);
 if (VAR_16)
  goto out_trans_cancel;

 VAR_16 = FUNC_8(VAR_14, VAR_10, VAR_11, VAR_12->i_ino, VAR_17);
 if (VAR_16) {
  FUNC_0(VAR_16 != -VAR_1);
  goto out_trans_cancel;
 }






 if (VAR_13->m_flags & (VAR_9|VAR_8))
  FUNC_20(VAR_14);

 VAR_16 = FUNC_16(VAR_14);
 if (VAR_16)
  goto std_return;

 if (VAR_15 && FUNC_11(VAR_12))
  FUNC_10(VAR_12);

 return 0;

 out_trans_cancel:
 FUNC_15(VAR_14);
 std_return:
 return VAR_16;
}
