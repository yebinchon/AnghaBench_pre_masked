
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_super {int s_mount_opt; int fs_generation; } ;
struct TYPE_8__ {int i_rdev; } ;
struct TYPE_9__ {TYPE_1__ dev1; } ;
struct ocfs2_dinode {int i_flags; int i_fs_generation; int i_clusters; int i_attr; int i_generation; int i_uid; int i_gid; int i_atime_nsec; int i_mtime_nsec; int i_ctime_nsec; int i_blkno; int i_size; int i_ctime; int i_mtime; int i_atime; int i_mode; TYPE_2__ id1; int i_dyn_features; } ;
struct TYPE_13__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_12__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_11__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct inode {int i_generation; int i_mode; struct super_block* i_sb; int i_ino; int i_rdev; int * i_op; int * i_fop; int i_flags; TYPE_6__ i_ctime; TYPE_5__ i_mtime; TYPE_4__ i_atime; TYPE_3__* i_mapping; scalar_t__ i_blocks; } ;
struct TYPE_14__ {int ip_clusters; int ip_attr; scalar_t__ ip_blkno; int ip_dir_lock_gen; int ip_la_data_resv; scalar_t__ ip_last_used_group; scalar_t__ ip_last_used_slot; int ip_rw_lockres; int ip_open_lockres; int ip_inode_lockres; int ip_flags; void* ip_dyn_features; } ;
struct TYPE_10__ {int * a_ops; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct ocfs2_dinode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct ocfs2_super* FUNC_4 (struct super_block*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;


 int VAR_14 ;

 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_15 ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct inode*,scalar_t__) ;
 int FUNC_11 (struct inode*,int) ;
 int FUNC_12 (struct inode*,int,int ) ;
 int FUNC_13 (struct super_block*,scalar_t__) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*,int) ;
 void* FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int ,char*,unsigned long long,unsigned long long) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_20 (int *,int ,int,struct inode*) ;
 scalar_t__ FUNC_21 (struct inode*) ;
 scalar_t__ FUNC_22 (struct ocfs2_super*) ;
 int FUNC_23 (struct ocfs2_dinode*) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (struct inode*) ;
 int VAR_24 ;
 int FUNC_26 () ;
 int VAR_25 ;
 int FUNC_27 (struct inode*,int ) ;
 int FUNC_28 (scalar_t__,int) ;

void FUNC_29(struct inode *VAR_26, struct ocfs2_dinode *VAR_27,
     int VAR_28)
{
 struct super_block *VAR_29;
 struct ocfs2_super *VAR_30;
 int VAR_31 = 1;

 VAR_29 = VAR_26->i_sb;
 VAR_30 = FUNC_4(VAR_29);

 if ((VAR_30->s_mount_opt & VAR_8) ||
     FUNC_22(VAR_30) || !FUNC_26())
  VAR_31 = 0;





 FUNC_1(!FUNC_3(VAR_27));



 FUNC_1(!(VAR_27->i_flags & FUNC_7(VAR_13)));
 FUNC_1(FUNC_17(VAR_27->i_fs_generation) != VAR_30->fs_generation);


 FUNC_2(VAR_26)->ip_clusters = FUNC_17(VAR_27->i_clusters);
 FUNC_2(VAR_26)->ip_attr = FUNC_17(VAR_27->i_attr);
 FUNC_2(VAR_26)->ip_dyn_features = FUNC_16(VAR_27->i_dyn_features);

 FUNC_15(VAR_26, 1);
 VAR_26->i_generation = FUNC_17(VAR_27->i_generation);
 VAR_26->i_rdev = FUNC_8(FUNC_18(VAR_27->id1.dev1.i_rdev));
 VAR_26->i_mode = FUNC_16(VAR_27->i_mode);
 FUNC_11(VAR_26, FUNC_17(VAR_27->i_uid));
 FUNC_9(VAR_26, FUNC_17(VAR_27->i_gid));


 if (FUNC_6(VAR_26->i_mode) && !VAR_27->i_clusters) {
  VAR_26->i_blocks = 0;
  VAR_26->i_mapping->a_ops = &VAR_20;
 } else {
  VAR_26->i_blocks = FUNC_21(VAR_26);
  VAR_26->i_mapping->a_ops = &VAR_16;
 }
 VAR_26->i_atime.tv_sec = FUNC_18(VAR_27->i_atime);
 VAR_26->i_atime.tv_nsec = FUNC_17(VAR_27->i_atime_nsec);
 VAR_26->i_mtime.tv_sec = FUNC_18(VAR_27->i_mtime);
 VAR_26->i_mtime.tv_nsec = FUNC_17(VAR_27->i_mtime_nsec);
 VAR_26->i_ctime.tv_sec = FUNC_18(VAR_27->i_ctime);
 VAR_26->i_ctime.tv_nsec = FUNC_17(VAR_27->i_ctime_nsec);

 if (FUNC_2(VAR_26)->ip_blkno != FUNC_18(VAR_27->i_blkno))
  FUNC_19(VAR_0,
       "ip_blkno %llu != i_blkno %llu!\n",
       (unsigned long long)FUNC_2(VAR_26)->ip_blkno,
       (unsigned long long)FUNC_18(VAR_27->i_blkno));

 FUNC_27(VAR_26, FUNC_23(VAR_27));

 FUNC_28(FUNC_2(VAR_26)->ip_blkno,
       FUNC_17(VAR_27->i_flags));
 if (VAR_27->i_flags & FUNC_7(VAR_12)) {
  FUNC_2(VAR_26)->ip_flags |= VAR_3;
  VAR_26->i_flags |= VAR_15;
 }

 if (VAR_27->i_flags & FUNC_7(VAR_4)) {
  FUNC_2(VAR_26)->ip_flags |= VAR_2;
 } else if (VAR_27->i_flags & FUNC_7(VAR_1)) {
  FUNC_2(VAR_26)->ip_flags |= VAR_2;
 } else if (VAR_27->i_flags & FUNC_7(VAR_9)) {
  VAR_26->i_flags |= VAR_15;
 } else if (VAR_27->i_flags & FUNC_7(VAR_11)) {


  FUNC_0();
 }

 switch (VAR_26->i_mode & VAR_14) {
     case 128:
      if (VAR_31)
       VAR_26->i_fop = &VAR_22;
      else
       VAR_26->i_fop = &VAR_23;
      VAR_26->i_op = &VAR_21;
      FUNC_10(VAR_26, FUNC_18(VAR_27->i_size));
      break;
     case 130:
      VAR_26->i_op = &VAR_17;
      if (VAR_31)
       VAR_26->i_fop = &VAR_18;
      else
       VAR_26->i_fop = &VAR_19;
      FUNC_10(VAR_26, FUNC_18(VAR_27->i_size));
      FUNC_2(VAR_26)->ip_dir_lock_gen = 1;
      break;
     case 129:
      VAR_26->i_op = &VAR_25;
      FUNC_14(VAR_26);
      FUNC_10(VAR_26, FUNC_18(VAR_27->i_size));
      break;
     default:
      VAR_26->i_op = &VAR_24;
      FUNC_12(VAR_26, VAR_26->i_mode,
           VAR_26->i_rdev);
      break;
 }

 if (VAR_28) {
  VAR_26->i_ino = FUNC_13(VAR_26->i_sb,
          FUNC_18(VAR_27->i_blkno));






  FUNC_1(FUNC_17(VAR_27->i_flags) & VAR_12);

  FUNC_20(&FUNC_2(VAR_26)->ip_inode_lockres,
       VAR_5, 0, VAR_26);

  FUNC_20(&FUNC_2(VAR_26)->ip_open_lockres,
       VAR_6, 0, VAR_26);
 }

 FUNC_20(&FUNC_2(VAR_26)->ip_rw_lockres,
      VAR_7, VAR_26->i_generation,
      VAR_26);

 FUNC_25(VAR_26);

 FUNC_2(VAR_26)->ip_last_used_slot = 0;
 FUNC_2(VAR_26)->ip_last_used_group = 0;

 if (FUNC_5(VAR_26->i_mode))
  FUNC_24(&FUNC_2(VAR_26)->ip_la_data_resv,
        VAR_10);
}
