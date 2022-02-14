
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_opflags; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,char const*) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 struct inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_2, struct inode *VAR_3,
    const char *VAR_4)
{
 int VAR_5;
 struct dentry *VAR_6;
 struct inode *VAR_7;

 VAR_6 = FUNC_1(VAR_2);
 VAR_7 = FUNC_2(VAR_3);
 if (!(VAR_7->i_opflags & VAR_1)) {
  VAR_5 = -VAR_0;
  goto out;
 }
 FUNC_3(VAR_7);
 VAR_5 = FUNC_0(VAR_6, VAR_4);
 FUNC_4(VAR_7);
out:
 return VAR_5;
}
