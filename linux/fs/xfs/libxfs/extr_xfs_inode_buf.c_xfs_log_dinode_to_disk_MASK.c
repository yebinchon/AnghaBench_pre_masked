
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


struct TYPE_16__ {int t_nsec; int t_sec; } ;
struct TYPE_14__ {int t_nsec; int t_sec; } ;
struct TYPE_12__ {int t_nsec; int t_sec; } ;
struct TYPE_10__ {int t_nsec; int t_sec; } ;
struct xfs_log_dinode {int di_version; int di_flushiter; int di_uuid; int di_pad2; int di_lsn; int di_ino; int di_cowextsize; int di_flags2; TYPE_8__ di_crtime; int di_changecount; int di_gen; int di_flags; int di_dmstate; int di_dmevmask; int di_aformat; int di_forkoff; int di_anextents; int di_nextents; int di_extsize; int di_nblocks; int di_size; TYPE_6__ di_ctime; TYPE_4__ di_mtime; TYPE_2__ di_atime; int di_pad; int di_projid_hi; int di_projid_lo; int di_nlink; int di_gid; int di_uid; int di_format; int di_mode; int di_magic; } ;
struct TYPE_15__ {void* t_nsec; void* t_sec; } ;
struct TYPE_13__ {void* t_nsec; void* t_sec; } ;
struct TYPE_11__ {void* t_nsec; void* t_sec; } ;
struct TYPE_9__ {void* t_nsec; void* t_sec; } ;
struct xfs_dinode {int di_version; void* di_flushiter; int di_uuid; int di_pad2; void* di_lsn; void* di_ino; void* di_cowextsize; void* di_flags2; TYPE_7__ di_crtime; void* di_changecount; void* di_gen; void* di_flags; void* di_dmstate; void* di_dmevmask; int di_aformat; int di_forkoff; void* di_anextents; void* di_nextents; void* di_extsize; void* di_nblocks; void* di_size; TYPE_5__ di_ctime; TYPE_3__ di_mtime; TYPE_1__ di_atime; int di_pad; void* di_projid_hi; void* di_projid_lo; void* di_nlink; void* di_gid; void* di_uid; scalar_t__ di_onlink; int di_format; void* di_mode; void* di_magic; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,int *) ;

void
FUNC_5(
 struct xfs_log_dinode *VAR_0,
 struct xfs_dinode *VAR_1)
{
 VAR_1->di_magic = FUNC_0(VAR_0->di_magic);
 VAR_1->di_mode = FUNC_0(VAR_0->di_mode);
 VAR_1->di_version = VAR_0->di_version;
 VAR_1->di_format = VAR_0->di_format;
 VAR_1->di_onlink = 0;
 VAR_1->di_uid = FUNC_1(VAR_0->di_uid);
 VAR_1->di_gid = FUNC_1(VAR_0->di_gid);
 VAR_1->di_nlink = FUNC_1(VAR_0->di_nlink);
 VAR_1->di_projid_lo = FUNC_0(VAR_0->di_projid_lo);
 VAR_1->di_projid_hi = FUNC_0(VAR_0->di_projid_hi);
 FUNC_3(VAR_1->di_pad, VAR_0->di_pad, sizeof(VAR_1->di_pad));

 VAR_1->di_atime.t_sec = FUNC_1(VAR_0->di_atime.t_sec);
 VAR_1->di_atime.t_nsec = FUNC_1(VAR_0->di_atime.t_nsec);
 VAR_1->di_mtime.t_sec = FUNC_1(VAR_0->di_mtime.t_sec);
 VAR_1->di_mtime.t_nsec = FUNC_1(VAR_0->di_mtime.t_nsec);
 VAR_1->di_ctime.t_sec = FUNC_1(VAR_0->di_ctime.t_sec);
 VAR_1->di_ctime.t_nsec = FUNC_1(VAR_0->di_ctime.t_nsec);

 VAR_1->di_size = FUNC_2(VAR_0->di_size);
 VAR_1->di_nblocks = FUNC_2(VAR_0->di_nblocks);
 VAR_1->di_extsize = FUNC_1(VAR_0->di_extsize);
 VAR_1->di_nextents = FUNC_1(VAR_0->di_nextents);
 VAR_1->di_anextents = FUNC_0(VAR_0->di_anextents);
 VAR_1->di_forkoff = VAR_0->di_forkoff;
 VAR_1->di_aformat = VAR_0->di_aformat;
 VAR_1->di_dmevmask = FUNC_1(VAR_0->di_dmevmask);
 VAR_1->di_dmstate = FUNC_0(VAR_0->di_dmstate);
 VAR_1->di_flags = FUNC_0(VAR_0->di_flags);
 VAR_1->di_gen = FUNC_1(VAR_0->di_gen);

 if (VAR_0->di_version == 3) {
  VAR_1->di_changecount = FUNC_2(VAR_0->di_changecount);
  VAR_1->di_crtime.t_sec = FUNC_1(VAR_0->di_crtime.t_sec);
  VAR_1->di_crtime.t_nsec = FUNC_1(VAR_0->di_crtime.t_nsec);
  VAR_1->di_flags2 = FUNC_2(VAR_0->di_flags2);
  VAR_1->di_cowextsize = FUNC_1(VAR_0->di_cowextsize);
  VAR_1->di_ino = FUNC_2(VAR_0->di_ino);
  VAR_1->di_lsn = FUNC_2(VAR_0->di_lsn);
  FUNC_3(VAR_1->di_pad2, VAR_0->di_pad2, sizeof(VAR_1->di_pad2));
  FUNC_4(&VAR_1->di_uuid, &VAR_0->di_uuid);
  VAR_1->di_flushiter = 0;
 } else {
  VAR_1->di_flushiter = FUNC_0(VAR_0->di_flushiter);
 }
}
