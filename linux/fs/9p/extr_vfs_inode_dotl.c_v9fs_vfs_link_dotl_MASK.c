
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_session_info {scalar_t__ cache; } ;
struct p9_fid {int dummy; } ;
struct inode {int i_ino; } ;
struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_2 ;
 int FUNC_1 (struct p9_fid*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct p9_fid*,struct p9_fid*,int ) ;
 int FUNC_6 (int ,char*,int,...) ;
 struct p9_fid* FUNC_7 (struct dentry*) ;
 struct v9fs_session_info* FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 struct p9_fid* FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct p9_fid*,int ) ;

__attribute__((used)) static int
FUNC_12(struct dentry *VAR_3, struct inode *VAR_4,
  struct dentry *VAR_5)
{
 int VAR_6;
 struct p9_fid *VAR_7, *VAR_8;
 struct v9fs_session_info *VAR_9;

 FUNC_6(VAR_2, "dir ino: %lu, old_name: %pd, new_name: %pd\n",
   VAR_4->i_ino, VAR_3, VAR_5);

 VAR_9 = FUNC_8(VAR_4);
 VAR_7 = FUNC_10(VAR_5);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = FUNC_7(VAR_3);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_6 = FUNC_5(VAR_7, VAR_8, VAR_5->d_name.name);

 if (VAR_6 < 0) {
  FUNC_6(VAR_2, "p9_client_link failed %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_9(VAR_4);
 if (VAR_9->cache == VAR_1 || VAR_9->cache == VAR_0) {

  struct p9_fid *VAR_10;
  VAR_10 = FUNC_7(VAR_3);
  if (FUNC_0(VAR_10))
   return FUNC_1(VAR_10);

  FUNC_11(VAR_10, FUNC_2(VAR_3));
 }
 FUNC_4(FUNC_2(VAR_3));
 FUNC_3(VAR_5, FUNC_2(VAR_3));

 return VAR_6;
}
