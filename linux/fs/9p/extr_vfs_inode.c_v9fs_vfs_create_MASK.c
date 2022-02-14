
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct v9fs_session_info {int dummy; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_0 ;
 int FUNC_1 (struct p9_fid*) ;
 int FUNC_2 (struct p9_fid*) ;
 int FUNC_3 (struct v9fs_session_info*,int ) ;
 struct p9_fid* FUNC_4 (struct v9fs_session_info*,struct inode*,struct dentry*,int *,int ,int ) ;
 struct v9fs_session_info* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_1, struct dentry *VAR_2, umode_t VAR_3,
  bool VAR_4)
{
 struct v9fs_session_info *VAR_5 = FUNC_5(VAR_1);
 u32 VAR_6 = FUNC_3(VAR_5, VAR_3);
 struct p9_fid *VAR_7;


 VAR_7 = FUNC_4(VAR_5, VAR_1, VAR_2, ((void*)0), VAR_6, VAR_0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_6(VAR_1);
 FUNC_2(VAR_7);

 return 0;
}
