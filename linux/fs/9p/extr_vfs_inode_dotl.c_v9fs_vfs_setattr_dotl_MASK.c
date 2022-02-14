
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p9_iattr_dotl {scalar_t__ size; int mtime_nsec; int mtime_sec; int atime_nsec; int atime_sec; int gid; int uid; int mode; int valid; } ;
struct p9_fid {int dummy; } ;
struct inode {int i_mapping; int i_mode; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; TYPE_2__ ia_mtime; TYPE_1__ ia_atime; int ia_gid; int ia_uid; int ia_mode; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_2 ;
 int FUNC_1 (struct p9_fid*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct p9_fid*,struct p9_iattr_dotl*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct inode*,struct iattr*) ;
 int FUNC_10 (struct dentry*,struct iattr*) ;
 int FUNC_11 (struct inode*,scalar_t__) ;
 int FUNC_12 (struct inode*,struct p9_fid*) ;
 struct p9_fid* FUNC_13 (struct dentry*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int) ;

int FUNC_16(struct dentry *VAR_3, struct iattr *VAR_4)
{
 int VAR_5;
 struct p9_fid *VAR_6;
 struct p9_iattr_dotl VAR_7;
 struct inode *VAR_8 = FUNC_3(VAR_3);

 FUNC_8(VAR_2, "\n");

 VAR_5 = FUNC_10(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_7.valid = FUNC_15(VAR_4->ia_valid);
 VAR_7.mode = VAR_4->ia_mode;
 VAR_7.uid = VAR_4->ia_uid;
 VAR_7.gid = VAR_4->ia_gid;
 VAR_7.size = VAR_4->ia_size;
 VAR_7.atime_sec = VAR_4->ia_atime.tv_sec;
 VAR_7.atime_nsec = VAR_4->ia_atime.tv_nsec;
 VAR_7.mtime_sec = VAR_4->ia_mtime.tv_sec;
 VAR_7.mtime_nsec = VAR_4->ia_mtime.tv_nsec;

 VAR_6 = FUNC_13(VAR_3);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);


 if (FUNC_2(VAR_8->i_mode))
  FUNC_4(VAR_8->i_mapping);

 VAR_5 = FUNC_7(VAR_6, &VAR_7);
 if (VAR_5 < 0)
  return VAR_5;

 if ((VAR_4->ia_valid & VAR_1) &&
     VAR_4->ia_size != FUNC_5(VAR_8))
  FUNC_11(VAR_8, VAR_4->ia_size);

 FUNC_14(VAR_8);
 FUNC_9(VAR_8, VAR_4);
 FUNC_6(VAR_8);
 if (VAR_4->ia_valid & VAR_0) {

  VAR_5 = FUNC_12(VAR_8, VAR_6);
  if (VAR_5 < 0)
   return VAR_5;
 }
 return 0;
}
