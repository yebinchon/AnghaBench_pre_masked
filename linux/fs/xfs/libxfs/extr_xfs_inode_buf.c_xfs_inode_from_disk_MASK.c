
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {void* t_nsec; void* t_sec; } ;
struct xfs_icdinode {int di_version; void* di_cowextsize; void* di_flags2; TYPE_7__ di_crtime; void* di_flags; void* di_dmstate; void* di_dmevmask; int di_aformat; int di_forkoff; void* di_anextents; void* di_nextents; void* di_extsize; void* di_nblocks; void* di_size; void* di_flushiter; void* di_gid; void* di_uid; int di_format; void* di_projid_hi; void* di_projid_lo; } ;
struct xfs_inode {struct xfs_icdinode i_d; } ;
struct TYPE_16__ {int t_nsec; int t_sec; } ;
struct TYPE_14__ {int t_nsec; int t_sec; } ;
struct TYPE_12__ {int t_nsec; int t_sec; } ;
struct TYPE_10__ {int t_nsec; int t_sec; } ;
struct xfs_dinode {int di_version; int di_cowextsize; int di_flags2; TYPE_8__ di_crtime; int di_changecount; int di_flags; int di_dmstate; int di_dmevmask; int di_aformat; int di_forkoff; int di_anextents; int di_nextents; int di_extsize; int di_nblocks; int di_size; int di_mode; int di_gen; TYPE_6__ di_ctime; TYPE_4__ di_mtime; TYPE_2__ di_atime; int di_flushiter; int di_gid; int di_uid; int di_format; int di_projid_hi; int di_projid_lo; int di_nlink; int di_onlink; } ;
struct TYPE_13__ {int tv_sec; int tv_nsec; } ;
struct TYPE_11__ {int tv_sec; int tv_nsec; } ;
struct TYPE_9__ {int tv_sec; int tv_nsec; } ;
struct inode {void* i_mode; void* i_generation; TYPE_5__ i_ctime; TYPE_3__ i_mtime; TYPE_1__ i_atime; } ;


 struct inode* FUNC_0 (struct xfs_inode*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,void*) ;
 int FUNC_5 (struct inode*,void*) ;

void
FUNC_6(
 struct xfs_inode *VAR_0,
 struct xfs_dinode *VAR_1)
{
 struct xfs_icdinode *VAR_2 = &VAR_0->i_d;
 struct inode *VAR_3 = FUNC_0(VAR_0);






 VAR_2->di_version = VAR_1->di_version;
 if (VAR_2->di_version == 1) {
  FUNC_5(VAR_3, FUNC_1(VAR_1->di_onlink));
  VAR_2->di_projid_lo = 0;
  VAR_2->di_projid_hi = 0;
  VAR_2->di_version = 2;
 } else {
  FUNC_5(VAR_3, FUNC_2(VAR_1->di_nlink));
  VAR_2->di_projid_lo = FUNC_1(VAR_1->di_projid_lo);
  VAR_2->di_projid_hi = FUNC_1(VAR_1->di_projid_hi);
 }

 VAR_2->di_format = VAR_1->di_format;
 VAR_2->di_uid = FUNC_2(VAR_1->di_uid);
 VAR_2->di_gid = FUNC_2(VAR_1->di_gid);
 VAR_2->di_flushiter = FUNC_1(VAR_1->di_flushiter);







 VAR_3->i_atime.tv_sec = (int)FUNC_2(VAR_1->di_atime.t_sec);
 VAR_3->i_atime.tv_nsec = (int)FUNC_2(VAR_1->di_atime.t_nsec);
 VAR_3->i_mtime.tv_sec = (int)FUNC_2(VAR_1->di_mtime.t_sec);
 VAR_3->i_mtime.tv_nsec = (int)FUNC_2(VAR_1->di_mtime.t_nsec);
 VAR_3->i_ctime.tv_sec = (int)FUNC_2(VAR_1->di_ctime.t_sec);
 VAR_3->i_ctime.tv_nsec = (int)FUNC_2(VAR_1->di_ctime.t_nsec);
 VAR_3->i_generation = FUNC_2(VAR_1->di_gen);
 VAR_3->i_mode = FUNC_1(VAR_1->di_mode);

 VAR_2->di_size = FUNC_3(VAR_1->di_size);
 VAR_2->di_nblocks = FUNC_3(VAR_1->di_nblocks);
 VAR_2->di_extsize = FUNC_2(VAR_1->di_extsize);
 VAR_2->di_nextents = FUNC_2(VAR_1->di_nextents);
 VAR_2->di_anextents = FUNC_1(VAR_1->di_anextents);
 VAR_2->di_forkoff = VAR_1->di_forkoff;
 VAR_2->di_aformat = VAR_1->di_aformat;
 VAR_2->di_dmevmask = FUNC_2(VAR_1->di_dmevmask);
 VAR_2->di_dmstate = FUNC_1(VAR_1->di_dmstate);
 VAR_2->di_flags = FUNC_1(VAR_1->di_flags);

 if (VAR_2->di_version == 3) {
  FUNC_4(VAR_3,
        FUNC_3(VAR_1->di_changecount));
  VAR_2->di_crtime.t_sec = FUNC_2(VAR_1->di_crtime.t_sec);
  VAR_2->di_crtime.t_nsec = FUNC_2(VAR_1->di_crtime.t_nsec);
  VAR_2->di_flags2 = FUNC_3(VAR_1->di_flags2);
  VAR_2->di_cowextsize = FUNC_2(VAR_1->di_cowextsize);
 }
}
