
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int xfs_lsn_t ;
struct TYPE_18__ {int t_nsec; int t_sec; } ;
struct TYPE_16__ {int t_nsec; int t_sec; } ;
struct TYPE_14__ {int t_nsec; int t_sec; } ;
struct TYPE_12__ {int t_nsec; int t_sec; } ;
struct xfs_log_dinode {int di_version; int di_flushiter; int di_uuid; int di_pad2; int di_lsn; int di_ino; int di_cowextsize; int di_flags2; TYPE_7__ di_crtime; int di_changecount; int di_next_unlinked; int di_flags; int di_dmstate; int di_dmevmask; int di_aformat; int di_forkoff; int di_anextents; int di_nextents; int di_extsize; int di_nblocks; int di_size; int di_mode; int di_gen; int di_nlink; TYPE_5__ di_ctime; TYPE_3__ di_mtime; TYPE_1__ di_atime; int di_pad3; int di_pad; int di_projid_hi; int di_projid_lo; int di_gid; int di_uid; int di_format; int di_magic; } ;
struct TYPE_19__ {int t_nsec; int t_sec; } ;
struct xfs_icdinode {int di_version; int di_flushiter; int di_cowextsize; int di_flags2; TYPE_8__ di_crtime; int di_flags; int di_dmstate; int di_dmevmask; int di_aformat; int di_forkoff; int di_anextents; int di_nextents; int di_extsize; int di_nblocks; int di_size; int di_projid_hi; int di_projid_lo; int di_gid; int di_uid; int di_format; } ;
struct xfs_inode {TYPE_10__* i_mount; int i_ino; struct xfs_icdinode i_d; } ;
struct TYPE_17__ {int tv_nsec; int tv_sec; } ;
struct TYPE_15__ {int tv_nsec; int tv_sec; } ;
struct TYPE_13__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_mode; int i_generation; int i_nlink; TYPE_6__ i_ctime; TYPE_4__ i_mtime; TYPE_2__ i_atime; } ;
struct TYPE_20__ {int sb_meta_uuid; } ;
struct TYPE_11__ {TYPE_9__ m_sb; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct xfs_inode*) ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(
 struct xfs_inode *VAR_2,
 struct xfs_log_dinode *VAR_3,
 xfs_lsn_t VAR_4)
{
 struct xfs_icdinode *VAR_5 = &VAR_2->i_d;
 struct inode *VAR_6 = FUNC_0(VAR_2);

 VAR_3->di_magic = VAR_1;

 VAR_3->di_version = VAR_5->di_version;
 VAR_3->di_format = VAR_5->di_format;
 VAR_3->di_uid = VAR_5->di_uid;
 VAR_3->di_gid = VAR_5->di_gid;
 VAR_3->di_projid_lo = VAR_5->di_projid_lo;
 VAR_3->di_projid_hi = VAR_5->di_projid_hi;

 FUNC_2(VAR_3->di_pad, 0, sizeof(VAR_3->di_pad));
 FUNC_2(VAR_3->di_pad3, 0, sizeof(VAR_3->di_pad3));
 VAR_3->di_atime.t_sec = VAR_6->i_atime.tv_sec;
 VAR_3->di_atime.t_nsec = VAR_6->i_atime.tv_nsec;
 VAR_3->di_mtime.t_sec = VAR_6->i_mtime.tv_sec;
 VAR_3->di_mtime.t_nsec = VAR_6->i_mtime.tv_nsec;
 VAR_3->di_ctime.t_sec = VAR_6->i_ctime.tv_sec;
 VAR_3->di_ctime.t_nsec = VAR_6->i_ctime.tv_nsec;
 VAR_3->di_nlink = VAR_6->i_nlink;
 VAR_3->di_gen = VAR_6->i_generation;
 VAR_3->di_mode = VAR_6->i_mode;

 VAR_3->di_size = VAR_5->di_size;
 VAR_3->di_nblocks = VAR_5->di_nblocks;
 VAR_3->di_extsize = VAR_5->di_extsize;
 VAR_3->di_nextents = VAR_5->di_nextents;
 VAR_3->di_anextents = VAR_5->di_anextents;
 VAR_3->di_forkoff = VAR_5->di_forkoff;
 VAR_3->di_aformat = VAR_5->di_aformat;
 VAR_3->di_dmevmask = VAR_5->di_dmevmask;
 VAR_3->di_dmstate = VAR_5->di_dmstate;
 VAR_3->di_flags = VAR_5->di_flags;


 VAR_3->di_next_unlinked = VAR_0;

 if (VAR_5->di_version == 3) {
  VAR_3->di_changecount = FUNC_1(VAR_6);
  VAR_3->di_crtime.t_sec = VAR_5->di_crtime.t_sec;
  VAR_3->di_crtime.t_nsec = VAR_5->di_crtime.t_nsec;
  VAR_3->di_flags2 = VAR_5->di_flags2;
  VAR_3->di_cowextsize = VAR_5->di_cowextsize;
  VAR_3->di_ino = VAR_2->i_ino;
  VAR_3->di_lsn = VAR_4;
  FUNC_2(VAR_3->di_pad2, 0, sizeof(VAR_3->di_pad2));
  FUNC_3(&VAR_3->di_uuid, &VAR_2->i_mount->m_sb.sb_meta_uuid);
  VAR_3->di_flushiter = 0;
 } else {
  VAR_3->di_flushiter = VAR_5->di_flushiter;
 }
}
