
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_5__ {scalar_t__ nrpages; } ;
struct inode {scalar_t__ i_ino; int i_sb; scalar_t__ i_blocks; scalar_t__ i_size; TYPE_1__ i_data; int i_mode; scalar_t__ i_nlink; } ;
struct ext4_xattr_inode_array {int dummy; } ;
typedef int journal_t ;
typedef int handle_t ;
typedef scalar_t__ __u32 ;
struct TYPE_7__ {scalar_t__ i_dtime; int i_data; int i_datasync_tid; } ;
struct TYPE_6__ {int * s_journal; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int ) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int ,char*,scalar_t__,int) ;
 int FUNC_14 (int *,struct inode*) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 int * FUNC_17 (struct inode*,int ,scalar_t__) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,struct inode*) ;
 int FUNC_20 (int *,struct inode*) ;
 scalar_t__ FUNC_21 (struct inode*) ;
 scalar_t__ FUNC_22 (struct inode*) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (int ,char*,int) ;
 int FUNC_26 (int *,struct inode*,struct ext4_xattr_inode_array**,int) ;
 int FUNC_27 (struct ext4_xattr_inode_array*) ;
 int FUNC_28 (TYPE_1__*) ;
 scalar_t__ FUNC_29 (struct inode*) ;
 int FUNC_30 (int *,int ) ;
 scalar_t__ FUNC_31 () ;
 int FUNC_32 (int ,int ,int) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (struct inode*) ;
 int FUNC_36 (TYPE_1__*) ;

void FUNC_37(struct inode *VAR_2)
{
 handle_t *VAR_3;
 int VAR_4;
 int VAR_5 = 3;
 struct ext4_xattr_inode_array *VAR_6 = ((void*)0);

 FUNC_35(VAR_2);

 if (VAR_2->i_nlink) {
  if (VAR_2->i_ino != VAR_1 &&
      FUNC_21(VAR_2) &&
      (FUNC_7(VAR_2->i_mode) || FUNC_8(VAR_2->i_mode)) &&
      VAR_2->i_data.nrpages) {
   journal_t *VAR_7 = FUNC_2(VAR_2->i_sb)->s_journal;
   tid_t VAR_8 = FUNC_0(VAR_2)->i_datasync_tid;

   FUNC_30(VAR_7, VAR_8);
   FUNC_28(&VAR_2->i_data);
  }
  FUNC_36(&VAR_2->i_data);

  goto no_delete;
 }

 if (FUNC_29(VAR_2))
  goto no_delete;
 FUNC_9(VAR_2);

 if (FUNC_22(VAR_2))
  FUNC_10(VAR_2, 0);
 FUNC_36(&VAR_2->i_data);





 FUNC_34(VAR_2->i_sb);

 if (!FUNC_4(VAR_2))
  VAR_5 += FUNC_1(VAR_2->i_sb);

 VAR_3 = FUNC_17(VAR_2, VAR_0,
     FUNC_11(VAR_2)+VAR_5);
 if (FUNC_3(VAR_3)) {
  FUNC_23(VAR_2->i_sb, FUNC_6(VAR_3));





  FUNC_20(((void*)0), VAR_2);
  FUNC_33(VAR_2->i_sb);
  goto no_delete;
 }

 if (FUNC_5(VAR_2))
  FUNC_15(VAR_3);
 if (FUNC_16(VAR_2))
  FUNC_32(FUNC_0(VAR_2)->i_data, 0, sizeof(FUNC_0(VAR_2)->i_data));
 VAR_2->i_size = 0;
 VAR_4 = FUNC_19(VAR_3, VAR_2);
 if (VAR_4) {
  FUNC_25(VAR_2->i_sb,
        "couldn't mark inode dirty (err %d)", VAR_4);
  goto stop_handle;
 }
 if (VAR_2->i_blocks) {
  VAR_4 = FUNC_24(VAR_2);
  if (VAR_4) {
   FUNC_13(VAR_2->i_sb,
       "couldn't truncate inode %lu (err %d)",
       VAR_2->i_ino, VAR_4);
   goto stop_handle;
  }
 }


 VAR_4 = FUNC_26(VAR_3, VAR_2, &VAR_6,
          VAR_5);
 if (VAR_4) {
  FUNC_25(VAR_2->i_sb, "xattr delete (err %d)", VAR_4);
stop_handle:
  FUNC_18(VAR_3);
  FUNC_20(((void*)0), VAR_2);
  FUNC_33(VAR_2->i_sb);
  FUNC_27(VAR_6);
  goto no_delete;
 }
 FUNC_20(VAR_3, VAR_2);
 FUNC_0(VAR_2)->i_dtime = (__u32)FUNC_31();
 if (FUNC_19(VAR_3, VAR_2))

  FUNC_12(VAR_2);
 else
  FUNC_14(VAR_3, VAR_2);
 FUNC_18(VAR_3);
 FUNC_33(VAR_2->i_sb);
 FUNC_27(VAR_6);
 return;
no_delete:
 FUNC_12(VAR_2);
}
