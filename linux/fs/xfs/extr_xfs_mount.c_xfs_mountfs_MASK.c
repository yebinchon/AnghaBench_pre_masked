
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint ;
struct TYPE_5__ {int * b; } ;
struct xfs_sb {int sb_versionnum; scalar_t__ sb_spino_align; int sb_qflags; int sb_rootino; int sb_logblocks; int sb_logstart; int sb_agcount; TYPE_2__ sb_uuid; int sb_features2; int sb_bad_features2; } ;
struct TYPE_4__ {int xs_kobj; } ;
struct xfs_mount {int m_update_sb; int m_flags; int m_fail_unmount; char* m_fsname; int* m_fixedfsid; scalar_t__ m_logdev_targp; scalar_t__ m_qflags; scalar_t__ m_ddev_targp; int m_kobj; TYPE_1__ m_stats; int m_reclaim_work; struct xfs_sb m_sb; struct xfs_inode* m_rootip; int m_maxagi; } ;
struct xfs_inode {scalar_t__ i_ino; } ;
struct xfs_ino_geometry {int inode_cluster_size_raw; } ;
struct TYPE_6__ {int i_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xfs_ino_geometry* FUNC_1 (struct xfs_mount*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (struct xfs_inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct xfs_mount*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*,int ,struct xfs_mount*) ;
 int FUNC_6 (struct xfs_mount*,int ) ;
 int FUNC_7 (struct xfs_mount*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (struct xfs_mount*) ;
 scalar_t__ FUNC_9 (struct xfs_mount*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct xfs_mount*) ;
 int FUNC_15 (struct xfs_mount*,int ) ;
 int FUNC_16 (struct xfs_mount*) ;
 int FUNC_17 (struct xfs_mount*) ;
 int FUNC_18 (struct xfs_mount*) ;
 int FUNC_19 (struct xfs_mount*) ;
 int FUNC_20 (struct xfs_mount*) ;
 int FUNC_21 (struct xfs_mount*,char*,int) ;
 int FUNC_22 (struct xfs_mount*) ;
 int FUNC_23 (struct xfs_mount*) ;
 int FUNC_24 (struct xfs_mount*) ;
 int FUNC_25 (struct xfs_mount*) ;
 int FUNC_26 (struct xfs_mount*,int ) ;
 int FUNC_27 (struct xfs_mount*) ;
 int FUNC_28 (struct xfs_mount*) ;
 int FUNC_29 (struct xfs_mount*) ;
 int FUNC_30 (struct xfs_mount*) ;
 int FUNC_31 (struct xfs_mount*) ;
 int FUNC_32 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_inode**) ;
 int FUNC_33 (struct xfs_mount*,int ,int *) ;
 int FUNC_34 (struct xfs_inode*) ;
 int FUNC_35 (struct xfs_inode*,int ) ;
 int FUNC_36 (struct xfs_mount*,scalar_t__,int ,int ) ;
 int FUNC_37 (struct xfs_mount*) ;
 int FUNC_38 (struct xfs_mount*) ;
 int FUNC_39 (struct xfs_mount*) ;
 int VAR_17 ;
 int FUNC_40 (struct xfs_mount*,char*) ;
 int FUNC_41 (struct xfs_mount*) ;
 int FUNC_42 (struct xfs_mount*,scalar_t__*,scalar_t__*) ;
 int FUNC_43 (struct xfs_mount*) ;
 int FUNC_44 (struct xfs_mount*) ;
 int FUNC_45 (struct xfs_mount*) ;
 int FUNC_46 (struct xfs_mount*,int ) ;
 int FUNC_47 (struct xfs_mount*) ;
 int FUNC_48 (struct xfs_mount*) ;
 int FUNC_49 (struct xfs_mount*,int *,int *) ;
 int FUNC_50 (struct xfs_mount*) ;
 int FUNC_51 (struct xfs_mount*) ;
 int FUNC_52 (struct xfs_mount*) ;
 int FUNC_53 (struct xfs_mount*) ;
 scalar_t__ FUNC_54 (struct xfs_sb*) ;
 int FUNC_55 (struct xfs_mount*,struct xfs_sb*) ;
 scalar_t__ FUNC_56 (struct xfs_sb*) ;
 scalar_t__ FUNC_57 (struct xfs_sb*) ;
 int FUNC_58 (struct xfs_sb*) ;
 int FUNC_59 (struct xfs_mount*) ;
 int FUNC_60 (struct xfs_mount*) ;
 int VAR_18 ;
 int FUNC_61 (struct xfs_mount*,int) ;
 int FUNC_62 (int *) ;
 int FUNC_63 (int *,int *,int *,char*) ;
 int FUNC_64 (struct xfs_mount*) ;
 int FUNC_65 (struct xfs_mount*) ;
 int FUNC_66 (struct xfs_mount*) ;
 int FUNC_67 (struct xfs_mount*) ;
 int FUNC_68 (scalar_t__) ;
 int FUNC_69 (struct xfs_mount*,char*,...) ;

int
FUNC_70(
 struct xfs_mount *VAR_19)
{
 struct xfs_sb *VAR_20 = &(VAR_19->m_sb);
 struct xfs_inode *VAR_21;
 struct xfs_ino_geometry *VAR_22 = FUNC_1(VAR_19);
 uint64_t VAR_23;
 uint VAR_24 = 0;
 uint VAR_25 = 0;
 int VAR_26 = 0;

 FUNC_55(VAR_19, VAR_20);
 if (FUNC_54(VAR_20)) {
  FUNC_69(VAR_19, "correcting sb_features alignment problem");
  VAR_20->sb_features2 |= VAR_20->sb_bad_features2;
  VAR_19->m_update_sb = 1;





  if (FUNC_56(&VAR_19->m_sb) &&
     !(VAR_19->m_flags & VAR_12))
   VAR_19->m_flags |= VAR_11;
 }

 if (FUNC_56(&VAR_19->m_sb) &&
    (VAR_19->m_flags & VAR_12)) {
  FUNC_58(&VAR_19->m_sb);
  VAR_19->m_update_sb = 1;


  if (!VAR_20->sb_features2)
   VAR_19->m_update_sb = 1;
 }


 if (!(VAR_19->m_sb.sb_versionnum & VAR_16)) {
  VAR_19->m_sb.sb_versionnum |= VAR_16;
  VAR_19->m_update_sb = 1;
 }







 VAR_26 = FUNC_65(VAR_19);
 if (VAR_26)
  goto out;

 FUNC_14(VAR_19);
 FUNC_15(VAR_19, VAR_7);
 FUNC_15(VAR_19, VAR_6);
 FUNC_31(VAR_19);
 FUNC_50(VAR_19);
 FUNC_47(VAR_19);


 VAR_19->m_fail_unmount = 1;

 VAR_26 = FUNC_63(&VAR_19->m_kobj, &VAR_17, ((void*)0), VAR_19->m_fsname);
 if (VAR_26)
  goto out;

 VAR_26 = FUNC_63(&VAR_19->m_stats.xs_kobj, &VAR_18,
          &VAR_19->m_kobj, "stats");
 if (VAR_26)
  goto out_remove_sysfs;

 VAR_26 = FUNC_23(VAR_19);
 if (VAR_26)
  goto out_del_stats;

 VAR_26 = FUNC_25(VAR_19);
 if (VAR_26)
  goto out_remove_error_sysfs;

 VAR_26 = FUNC_66(VAR_19);
 if (VAR_26)
  goto out_remove_errortag;




 FUNC_60(VAR_19);


 FUNC_59(VAR_19);






 if (FUNC_57(&VAR_19->m_sb) &&
     VAR_19->m_sb.sb_spino_align !=
   FUNC_4(VAR_19, VAR_22->inode_cluster_size_raw)) {
  FUNC_69(VAR_19,
 "Sparse inode block alignment (%u) must match cluster size (%llu).",
    VAR_19->m_sb.sb_spino_align,
    FUNC_4(VAR_19, VAR_22->inode_cluster_size_raw));
  VAR_26 = -VAR_1;
  goto out_remove_uuid;
 }




 VAR_26 = FUNC_16(VAR_19);
 if (VAR_26)
  goto out_remove_uuid;




 VAR_26 = FUNC_51(VAR_19);
 if (VAR_26) {
  FUNC_69(VAR_19, "RT mount failed");
  goto out_remove_uuid;
 }





 VAR_19->m_fixedfsid[0] =
  (FUNC_11(&VAR_20->sb_uuid.b[8]) << 16) |
   FUNC_11(&VAR_20->sb_uuid.b[4]);
 VAR_19->m_fixedfsid[1] = FUNC_12(&VAR_20->sb_uuid.b[0]);

 VAR_26 = FUNC_18(VAR_19);
 if (VAR_26) {
  FUNC_69(VAR_19, "Failed dir/attr init: %d", VAR_26);
  goto out_remove_uuid;
 }




 FUNC_64(VAR_19);




 VAR_26 = FUNC_33(VAR_19, VAR_20->sb_agcount, &VAR_19->m_maxagi);
 if (VAR_26) {
  FUNC_69(VAR_19, "Failed per-ag init: %d", VAR_26);
  goto out_free_dir;
 }

 if (!VAR_20->sb_logblocks) {
  FUNC_69(VAR_19, "no log defined");
  FUNC_5("xfs_mountfs", VAR_8, VAR_19);
  VAR_26 = -VAR_0;
  goto out_free_perag;
 }






 VAR_26 = FUNC_36(VAR_19, VAR_19->m_logdev_targp,
         FUNC_7(VAR_19, VAR_20->sb_logstart),
         FUNC_6(VAR_19, VAR_20->sb_logblocks));
 if (VAR_26) {
  FUNC_69(VAR_19, "log mount failed");
  goto out_fail_wait;
 }


 VAR_26 = FUNC_17(VAR_19);
 if (VAR_26)
  goto out_log_dealloc;





 VAR_26 = FUNC_32(VAR_19, ((void*)0), VAR_20->sb_rootino, VAR_9,
    VAR_10, &VAR_21);
 if (VAR_26) {
  FUNC_69(VAR_19,
   "Failed to read root inode 0x%llx, error %d",
   VAR_20->sb_rootino, -VAR_26);
  goto out_log_dealloc;
 }

 FUNC_0(VAR_21 != ((void*)0));

 if (FUNC_13(!FUNC_2(FUNC_3(VAR_21)->i_mode))) {
  FUNC_69(VAR_19, "corrupted root inode %llu: not a directory",
   (unsigned long long)VAR_21->i_ino);
  FUNC_35(VAR_21, VAR_10);
  FUNC_5("xfs_mountfs_int(2)", VAR_8,
     VAR_19);
  VAR_26 = -VAR_0;
  goto out_rele_rip;
 }
 VAR_19->m_rootip = VAR_21;

 FUNC_35(VAR_21, VAR_10);




 VAR_26 = FUNC_52(VAR_19);
 if (VAR_26) {



  FUNC_69(VAR_19, "failed to read RT inodes");
  goto out_rele_rip;
 }






 if (VAR_19->m_update_sb && !(VAR_19->m_flags & VAR_14)) {
  VAR_26 = FUNC_61(VAR_19, 0);
  if (VAR_26) {
   FUNC_69(VAR_19, "failed to write sb changes");
   goto out_rtunmount;
  }
 }




 if (FUNC_9(VAR_19)) {
  VAR_26 = FUNC_42(VAR_19, &VAR_24, &VAR_25);
  if (VAR_26)
   goto out_rtunmount;
 } else {
  FUNC_0(!FUNC_8(VAR_19));






  if (VAR_19->m_sb.sb_qflags & VAR_5) {
   FUNC_40(VAR_19, "resetting quota flags");
   VAR_26 = FUNC_39(VAR_19);
   if (VAR_26)
    goto out_rtunmount;
  }
 }






 VAR_26 = FUNC_38(VAR_19);
 if (VAR_26) {
  FUNC_69(VAR_19, "log mount finish failed");
  goto out_rtunmount;
 }
 if ((VAR_19->m_flags & (VAR_14|VAR_13)) ==
       VAR_14) {
  FUNC_45(VAR_19);
 }




 if (VAR_24) {
  FUNC_0(VAR_19->m_qflags == 0);
  VAR_19->m_qflags = VAR_25;

  FUNC_41(VAR_19);
 }
 if (!(VAR_19->m_flags & VAR_14)) {
  VAR_23 = FUNC_20(VAR_19);
  VAR_26 = FUNC_49(VAR_19, &VAR_23, ((void*)0));
  if (VAR_26)
   FUNC_69(VAR_19,
 "Unable to allocate reserve blocks. Continuing without reserve pool.");


  VAR_26 = FUNC_48(VAR_19);
  if (VAR_26) {
   FUNC_21(VAR_19,
 "Error %d recovering leftover CoW allocations.", VAR_26);
   FUNC_26(VAR_19, VAR_3);
   goto out_quota;
  }


  VAR_26 = FUNC_28(VAR_19);
  if (VAR_26 && VAR_26 != -VAR_2)
   goto out_agresv;
 }

 return 0;

 out_agresv:
 FUNC_29(VAR_19);
 out_quota:
 FUNC_44(VAR_19);
 out_rtunmount:
 FUNC_53(VAR_19);
 out_rele_rip:
 FUNC_34(VAR_21);

 FUNC_43(VAR_19);
 FUNC_10(&VAR_19->m_reclaim_work);
 FUNC_46(VAR_19, VAR_4);
 FUNC_30(VAR_19);
 out_log_dealloc:
 VAR_19->m_flags |= VAR_15;
 FUNC_37(VAR_19);
 out_fail_wait:
 if (VAR_19->m_logdev_targp && VAR_19->m_logdev_targp != VAR_19->m_ddev_targp)
  FUNC_68(VAR_19->m_logdev_targp);
 FUNC_68(VAR_19->m_ddev_targp);
 out_free_perag:
 FUNC_27(VAR_19);
 out_free_dir:
 FUNC_19(VAR_19);
 out_remove_uuid:
 FUNC_67(VAR_19);
 out_remove_errortag:
 FUNC_24(VAR_19);
 out_remove_error_sysfs:
 FUNC_22(VAR_19);
 out_del_stats:
 FUNC_62(&VAR_19->m_stats.xs_kobj);
 out_remove_sysfs:
 FUNC_62(&VAR_19->m_kobj);
 out:
 return VAR_26;
}
