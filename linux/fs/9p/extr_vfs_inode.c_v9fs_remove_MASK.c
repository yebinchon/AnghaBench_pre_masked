
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {int dummy; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_2 ;
 int FUNC_1 (struct p9_fid*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct p9_fid*) ;
 int FUNC_5 (struct p9_fid*,int ,int ) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct inode*) ;
 struct p9_fid* FUNC_9 (struct dentry*) ;
 struct v9fs_session_info* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 struct p9_fid* FUNC_12 (struct dentry*) ;
 scalar_t__ FUNC_13 (struct v9fs_session_info*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5)
{
 struct inode *VAR_6;
 int VAR_7 = -VAR_1;
 struct p9_fid *VAR_8, *VAR_9;
 struct v9fs_session_info *VAR_10;

 FUNC_6(VAR_2, "inode: %p dentry: %p rmdir: %x\n",
   VAR_3, VAR_4, VAR_5);

 VAR_10 = FUNC_10(VAR_3);
 VAR_6 = FUNC_3(VAR_4);
 VAR_9 = FUNC_12(VAR_4);
 if (FUNC_0(VAR_9)) {
  VAR_7 = FUNC_1(VAR_9);
  FUNC_6(VAR_2, "fid lookup failed %d\n", VAR_7);
  return VAR_7;
 }
 if (FUNC_13(VAR_10))
  VAR_7 = FUNC_5(VAR_9, VAR_4->d_name.name,
         FUNC_7(VAR_5));
 if (VAR_7 == -VAR_1) {

  VAR_8 = FUNC_9(VAR_4);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);
  VAR_7 = FUNC_4(VAR_8);
 }
 if (!VAR_7) {




  if (VAR_5 & VAR_0) {
   FUNC_2(VAR_6);
   FUNC_8(VAR_3);
  } else
   FUNC_8(VAR_6);

  FUNC_11(VAR_6);
  FUNC_11(VAR_3);
 }
 return VAR_7;
}
