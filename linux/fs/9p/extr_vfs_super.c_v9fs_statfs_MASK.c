
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {int dummy; } ;
struct p9_rstatfs {int fsid; int namelen; int ffree; int files; int bavail; int bfree; int blocks; int bsize; int type; } ;
struct p9_fid {int dummy; } ;
struct TYPE_2__ {int* val; } ;
struct kstatfs {int f_namelen; TYPE_1__ f_fsid; int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; int f_bsize; int f_type; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int FUNC_1 (struct p9_fid*) ;
 int FUNC_2 (struct p9_fid*,struct p9_rstatfs*) ;
 int FUNC_3 (struct dentry*,struct kstatfs*) ;
 struct v9fs_session_info* FUNC_4 (struct dentry*) ;
 struct p9_fid* FUNC_5 (struct dentry*) ;
 scalar_t__ FUNC_6 (struct v9fs_session_info*) ;

__attribute__((used)) static int FUNC_7(struct dentry *VAR_1, struct kstatfs *VAR_2)
{
 struct v9fs_session_info *VAR_3;
 struct p9_fid *VAR_4;
 struct p9_rstatfs VAR_5;
 int VAR_6;

 VAR_4 = FUNC_5(VAR_1);
 if (FUNC_0(VAR_4)) {
  VAR_6 = FUNC_1(VAR_4);
  goto done;
 }

 VAR_3 = FUNC_4(VAR_1);
 if (FUNC_6(VAR_3)) {
  VAR_6 = FUNC_2(VAR_4, &VAR_5);
  if (VAR_6 == 0) {
   VAR_2->f_type = VAR_5.type;
   VAR_2->f_bsize = VAR_5.bsize;
   VAR_2->f_blocks = VAR_5.blocks;
   VAR_2->f_bfree = VAR_5.bfree;
   VAR_2->f_bavail = VAR_5.bavail;
   VAR_2->f_files = VAR_5.files;
   VAR_2->f_ffree = VAR_5.ffree;
   VAR_2->f_fsid.val[0] = VAR_5.fsid & 0xFFFFFFFFUL;
   VAR_2->f_fsid.val[1] = (VAR_5.fsid >> 32) & 0xFFFFFFFFUL;
   VAR_2->f_namelen = VAR_5.namelen;
  }
  if (VAR_6 != -VAR_0)
   goto done;
 }
 VAR_6 = FUNC_3(VAR_1, VAR_2);
done:
 return VAR_6;
}
