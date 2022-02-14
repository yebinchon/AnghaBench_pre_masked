
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,struct dentry*,int ,int *) ;
 int FUNC_4 (struct f2fs_sb_info*) ;
 int FUNC_5 (struct f2fs_sb_info*) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_2, struct dentry *VAR_3, umode_t VAR_4)
{
 struct f2fs_sb_info *VAR_5 = FUNC_1(VAR_2);

 if (FUNC_7(FUNC_4(VAR_5)))
  return -VAR_0;
 if (!FUNC_5(VAR_5))
  return -VAR_1;

 if (FUNC_2(VAR_2) || FUNC_0(VAR_5)) {
  int VAR_6 = FUNC_6(VAR_2);
  if (VAR_6)
   return VAR_6;
 }

 return FUNC_3(VAR_2, VAR_3, VAR_4, ((void*)0));
}
