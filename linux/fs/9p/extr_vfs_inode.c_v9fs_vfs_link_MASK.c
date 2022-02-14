
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fid {int fid; } ;
struct inode {int i_ino; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct p9_fid*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct p9_fid*) ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct p9_fid*) ;
 int FUNC_4 (int ,char*,int ,struct dentry*,struct dentry*) ;
 int FUNC_5 (char*,char*,int) ;
 struct p9_fid* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct p9_fid*,int ) ;
 int FUNC_9 (struct inode*,struct dentry*,int ,char*) ;

__attribute__((used)) static int
FUNC_10(struct dentry *VAR_3, struct inode *VAR_4,
       struct dentry *VAR_5)
{
 int VAR_6;
 char VAR_7[1 + VAR_2 + 2];
 struct p9_fid *VAR_8;

 FUNC_4(VAR_0, " %lu,%pd,%pd\n",
   VAR_4->i_ino, VAR_5, VAR_3);

 VAR_8 = FUNC_6(VAR_3);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 FUNC_5(VAR_7, "%d\n", VAR_8->fid);
 VAR_6 = FUNC_9(VAR_4, VAR_5, VAR_1, VAR_7);
 if (!VAR_6) {
  FUNC_8(VAR_8, FUNC_2(VAR_3));
  FUNC_7(VAR_4);
 }
 FUNC_3(VAR_8);
 return VAR_6;
}
