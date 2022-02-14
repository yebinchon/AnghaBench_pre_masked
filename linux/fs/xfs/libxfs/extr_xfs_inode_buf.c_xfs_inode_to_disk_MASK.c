
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
struct TYPE_19__ {int t_nsec; int t_sec; } ;
struct xfs_icdinode {int di_version; int di_flushiter; int di_cowextsize; int di_flags2; TYPE_8__ di_crtime; int di_flags; int di_dmstate; int di_dmevmask; int di_aformat; int di_forkoff; int di_anextents; int di_nextents; int di_extsize; int di_nblocks; int di_size; int di_projid_hi; int di_projid_lo; int di_gid; int di_uid; int di_format; } ;
struct xfs_inode {TYPE_10__* i_mount; int i_ino; struct xfs_icdinode i_d; } ;
struct TYPE_18__ {void* t_nsec; void* t_sec; } ;
struct TYPE_16__ {void* t_nsec; void* t_sec; } ;
struct TYPE_14__ {void* t_nsec; void* t_sec; } ;
struct TYPE_12__ {void* t_nsec; void* t_sec; } ;
struct xfs_dinode {int di_version; void* di_flushiter; int di_uuid; int di_pad2; void* di_lsn; void* di_ino; void* di_cowextsize; void* di_flags2; TYPE_7__ di_crtime; void* di_changecount; void* di_flags; void* di_dmstate; void* di_dmevmask; int di_aformat; int di_forkoff; void* di_anextents; void* di_nextents; void* di_extsize; void* di_nblocks; void* di_size; void* di_mode; void* di_gen; void* di_nlink; TYPE_5__ di_ctime; TYPE_3__ di_mtime; TYPE_1__ di_atime; int di_pad; void* di_projid_hi; void* di_projid_lo; void* di_gid; void* di_uid; int di_format; scalar_t__ di_onlink; void* di_magic; } ;
struct TYPE_17__ {int tv_nsec; int tv_sec; } ;
struct TYPE_15__ {int tv_nsec; int tv_sec; } ;
struct TYPE_13__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_mode; int i_generation; int i_nlink; TYPE_6__ i_ctime; TYPE_4__ i_mtime; TYPE_2__ i_atime; } ;
struct TYPE_20__ {int sb_meta_uuid; } ;
struct TYPE_11__ {TYPE_9__ m_sb; } ;


 struct inode* FUNC_0 (struct xfs_inode*) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *,int *) ;

void
FUNC_7(
 struct xfs_inode *VAR_1,
 struct xfs_dinode *VAR_2,
 xfs_lsn_t VAR_3)
{
 struct xfs_icdinode *VAR_4 = &VAR_1->i_d;
 struct inode *VAR_5 = FUNC_0(VAR_1);

 VAR_2->di_magic = FUNC_1(VAR_0);
 VAR_2->di_onlink = 0;

 VAR_2->di_version = VAR_4->di_version;
 VAR_2->di_format = VAR_4->di_format;
 VAR_2->di_uid = FUNC_2(VAR_4->di_uid);
 VAR_2->di_gid = FUNC_2(VAR_4->di_gid);
 VAR_2->di_projid_lo = FUNC_1(VAR_4->di_projid_lo);
 VAR_2->di_projid_hi = FUNC_1(VAR_4->di_projid_hi);

 FUNC_5(VAR_2->di_pad, 0, sizeof(VAR_2->di_pad));
 VAR_2->di_atime.t_sec = FUNC_2(VAR_5->i_atime.tv_sec);
 VAR_2->di_atime.t_nsec = FUNC_2(VAR_5->i_atime.tv_nsec);
 VAR_2->di_mtime.t_sec = FUNC_2(VAR_5->i_mtime.tv_sec);
 VAR_2->di_mtime.t_nsec = FUNC_2(VAR_5->i_mtime.tv_nsec);
 VAR_2->di_ctime.t_sec = FUNC_2(VAR_5->i_ctime.tv_sec);
 VAR_2->di_ctime.t_nsec = FUNC_2(VAR_5->i_ctime.tv_nsec);
 VAR_2->di_nlink = FUNC_2(VAR_5->i_nlink);
 VAR_2->di_gen = FUNC_2(VAR_5->i_generation);
 VAR_2->di_mode = FUNC_1(VAR_5->i_mode);

 VAR_2->di_size = FUNC_3(VAR_4->di_size);
 VAR_2->di_nblocks = FUNC_3(VAR_4->di_nblocks);
 VAR_2->di_extsize = FUNC_2(VAR_4->di_extsize);
 VAR_2->di_nextents = FUNC_2(VAR_4->di_nextents);
 VAR_2->di_anextents = FUNC_1(VAR_4->di_anextents);
 VAR_2->di_forkoff = VAR_4->di_forkoff;
 VAR_2->di_aformat = VAR_4->di_aformat;
 VAR_2->di_dmevmask = FUNC_2(VAR_4->di_dmevmask);
 VAR_2->di_dmstate = FUNC_1(VAR_4->di_dmstate);
 VAR_2->di_flags = FUNC_1(VAR_4->di_flags);

 if (VAR_4->di_version == 3) {
  VAR_2->di_changecount = FUNC_3(FUNC_4(VAR_5));
  VAR_2->di_crtime.t_sec = FUNC_2(VAR_4->di_crtime.t_sec);
  VAR_2->di_crtime.t_nsec = FUNC_2(VAR_4->di_crtime.t_nsec);
  VAR_2->di_flags2 = FUNC_3(VAR_4->di_flags2);
  VAR_2->di_cowextsize = FUNC_2(VAR_4->di_cowextsize);
  VAR_2->di_ino = FUNC_3(VAR_1->i_ino);
  VAR_2->di_lsn = FUNC_3(VAR_3);
  FUNC_5(VAR_2->di_pad2, 0, sizeof(VAR_2->di_pad2));
  FUNC_6(&VAR_2->di_uuid, &VAR_1->i_mount->m_sb.sb_meta_uuid);
  VAR_2->di_flushiter = 0;
 } else {
  VAR_2->di_flushiter = FUNC_1(VAR_4->di_flushiter);
 }
}
