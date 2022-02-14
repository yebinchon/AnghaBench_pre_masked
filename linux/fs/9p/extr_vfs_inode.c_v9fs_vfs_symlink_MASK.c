
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,struct dentry*,char const*) ;
 int FUNC_1 (struct inode*,struct dentry*,int ,char const*) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_2, struct dentry *VAR_3, const char *VAR_4)
{
 FUNC_0(VAR_0, " %lu,%pd,%s\n",
   VAR_2->i_ino, VAR_3, VAR_4);

 return FUNC_1(VAR_2, VAR_3, VAR_1, VAR_4);
}
