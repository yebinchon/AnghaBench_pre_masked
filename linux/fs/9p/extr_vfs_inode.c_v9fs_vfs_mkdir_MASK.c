
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
 int VAR_1 ;
 int FUNC_1 (struct p9_fid*) ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct p9_fid*) ;
 int FUNC_4 (int ,char*,struct dentry*) ;
 int FUNC_5 (struct v9fs_session_info*,int) ;
 struct p9_fid* FUNC_6 (struct v9fs_session_info*,struct inode*,struct dentry*,int *,int ,int ) ;
 struct v9fs_session_info* FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_3, struct dentry *VAR_4, umode_t VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 struct p9_fid *VAR_8;
 struct v9fs_session_info *VAR_9;

 FUNC_4(VAR_0, "name %pd\n", VAR_4);
 VAR_6 = 0;
 VAR_9 = FUNC_7(VAR_3);
 VAR_7 = FUNC_5(VAR_9, VAR_5 | VAR_2);
 VAR_8 = FUNC_6(VAR_9, VAR_3, VAR_4, ((void*)0), VAR_7, VAR_1);
 if (FUNC_0(VAR_8)) {
  VAR_6 = FUNC_1(VAR_8);
  VAR_8 = ((void*)0);
 } else {
  FUNC_2(VAR_3);
  FUNC_8(VAR_3);
 }

 if (VAR_8)
  FUNC_3(VAR_8);

 return VAR_6;
}
