
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {scalar_t__ cache; } ;
struct TYPE_2__ {scalar_t__ len; unsigned char* name; } ;
struct p9_fid {int i_sb; TYPE_1__ d_name; } ;
struct inode {int i_sb; TYPE_1__ d_name; } ;
struct dentry {int i_sb; TYPE_1__ d_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct p9_fid* FUNC_0 (struct p9_fid*) ;
 struct p9_fid* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct p9_fid*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct p9_fid* FUNC_3 (struct p9_fid*,struct p9_fid*) ;
 int FUNC_4 (struct p9_fid*) ;
 struct p9_fid* FUNC_5 (struct p9_fid*,int,unsigned char const**,int) ;
 int FUNC_6 (int ,char*,struct p9_fid*,struct p9_fid*,struct p9_fid*,unsigned int) ;
 int FUNC_7 (struct p9_fid*,struct p9_fid*) ;
 struct p9_fid* FUNC_8 (struct v9fs_session_info*,struct p9_fid*,int ) ;
 struct p9_fid* FUNC_9 (struct v9fs_session_info*,struct p9_fid*,int ) ;
 struct v9fs_session_info* FUNC_10 (struct p9_fid*) ;
 struct p9_fid* FUNC_11 (struct p9_fid*) ;

struct dentry *FUNC_12(struct inode *VAR_6, struct dentry *VAR_7,
          unsigned int VAR_8)
{
 struct dentry *VAR_9;
 struct v9fs_session_info *VAR_10;
 struct p9_fid *VAR_11, *VAR_12;
 struct inode *VAR_13;
 const unsigned char *VAR_14;

 FUNC_6(VAR_5, "dir: %p dentry: (%pd) %p flags: %x\n",
   VAR_6, VAR_7, VAR_7, VAR_8);

 if (VAR_7->d_name.len > VAR_4)
  return FUNC_1(-VAR_2);

 VAR_10 = FUNC_10(VAR_6);

 VAR_11 = FUNC_11(VAR_7);
 if (FUNC_2(VAR_11))
  return FUNC_0(VAR_11);






 VAR_14 = VAR_7->d_name.name;
 VAR_12 = FUNC_5(VAR_11, 1, &VAR_14, 1);
 if (VAR_12 == FUNC_1(-VAR_3))
  VAR_13 = ((void*)0);
 else if (FUNC_2(VAR_12))
  VAR_13 = FUNC_0(VAR_12);
 else if (VAR_10->cache == VAR_1 || VAR_10->cache == VAR_0)
  VAR_13 = FUNC_8(VAR_10, VAR_12, VAR_6->i_sb);
 else
  VAR_13 = FUNC_9(VAR_10, VAR_12, VAR_6->i_sb);







 VAR_9 = FUNC_3(VAR_13, VAR_7);
 if (!FUNC_2(VAR_12)) {
  if (!VAR_9)
   FUNC_7(VAR_7, VAR_12);
  else if (!FUNC_2(VAR_9))
   FUNC_7(VAR_9, VAR_12);
  else
   FUNC_4(VAR_12);
 }
 return VAR_9;
}
