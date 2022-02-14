
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dinode {int i_flags; } ;
struct inode {int i_sb; int i_ino; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sigset_t ;
struct TYPE_2__ {int ip_flags; scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,struct buffer_head**,int) ;
 int FUNC_12 (struct inode*,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct inode*,struct buffer_head*,int*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct inode*,struct buffer_head*) ;
 int FUNC_18 (int ,unsigned long long,scalar_t__) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static void FUNC_20(struct inode *VAR_5)
{
 int VAR_6, VAR_7;
 sigset_t VAR_8;
 struct buffer_head *VAR_9 = ((void*)0);
 struct ocfs2_dinode *VAR_10 = ((void*)0);

 FUNC_18(VAR_5->i_ino,
     (unsigned long long)FUNC_0(VAR_5)->ip_blkno,
     FUNC_5(VAR_5));




 if (FUNC_5(VAR_5) || !FUNC_0(VAR_5)->ip_blkno)
  goto bail;

 if (!FUNC_10(VAR_5)) {



  FUNC_9(VAR_5, 0);
  goto bail;
 }

 FUNC_4(VAR_5);





 FUNC_8(&VAR_8);






 VAR_7 = FUNC_13(FUNC_1(VAR_5->i_sb), 0);
 if (VAR_7 < 0) {
  FUNC_6(VAR_2, "getting nfs sync lock(PR) failed %d\n", VAR_7);
  FUNC_9(VAR_5, 0);
  goto bail_unblock;
 }
 VAR_7 = FUNC_11(VAR_5, &VAR_9, 1);
 if (VAR_7 < 0) {
  if (VAR_7 != -VAR_1)
   FUNC_7(VAR_7);
  FUNC_9(VAR_5, 0);
  goto bail_unlock_nfs_sync;
 }

 VAR_10 = (struct ocfs2_dinode *)VAR_9->b_data;


 if (FUNC_19(VAR_10->i_flags & FUNC_3(VAR_3))) {
  FUNC_9(VAR_5, 0);
  goto bail_unlock_inode;
 }



 VAR_7 = FUNC_15(VAR_5, VAR_9, &VAR_6);
 if (!VAR_6 || VAR_7 < 0) {



  if (VAR_7 < 0)
   FUNC_7(VAR_7);




  FUNC_9(VAR_5, 1);
  goto bail_unlock_inode;
 }

 FUNC_9(VAR_5, 0);

 VAR_7 = FUNC_17(VAR_5, VAR_9);
 if (VAR_7 < 0) {
  if (VAR_7 != -VAR_0)
   FUNC_7(VAR_7);
  goto bail_unlock_inode;
 }
 FUNC_0(VAR_5)->ip_flags |= VAR_4;

bail_unlock_inode:
 FUNC_12(VAR_5, 1);
 FUNC_2(VAR_9);

bail_unlock_nfs_sync:
 FUNC_14(FUNC_1(VAR_5->i_sb), 0);

bail_unblock:
 FUNC_16(&VAR_8);
bail:
 return;
}
