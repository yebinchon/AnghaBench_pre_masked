
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int dummy; } ;
struct v9fs_inode {int cache_validity; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct p9_fid*) ;
 struct v9fs_inode* FUNC_2 (struct inode*) ;
 int VAR_3 ;
 struct inode* FUNC_3 (struct dentry*) ;
 struct p9_fid* FUNC_4 (struct dentry*) ;
 struct v9fs_session_info* FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct v9fs_session_info*) ;
 int FUNC_7 (struct p9_fid*,struct inode*) ;
 int FUNC_8 (struct p9_fid*,struct inode*) ;

__attribute__((used)) static int FUNC_9(struct dentry *VAR_4, unsigned int VAR_5)
{
 struct p9_fid *VAR_6;
 struct inode *VAR_7;
 struct v9fs_inode *VAR_8;

 if (VAR_5 & VAR_2)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_4);
 if (!VAR_7)
  goto out_valid;

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8->cache_validity & VAR_3) {
  int VAR_9;
  struct v9fs_session_info *VAR_10;
  VAR_6 = FUNC_4(VAR_4);
  if (FUNC_0(VAR_6))
   return FUNC_1(VAR_6);

  VAR_10 = FUNC_5(VAR_7);
  if (FUNC_6(VAR_10))
   VAR_9 = FUNC_8(VAR_6, VAR_7);
  else
   VAR_9 = FUNC_7(VAR_6, VAR_7);
  if (VAR_9 == -VAR_1)
   return 0;
  if (VAR_9 < 0)
   return VAR_9;
 }
out_valid:
 return 1;
}
