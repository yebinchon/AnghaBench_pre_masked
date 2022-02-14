
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (char*) ;
 struct dentry* FUNC_3 (struct inode*,struct dentry*) ;
 char* FUNC_4 (struct dentry*) ;
 struct inode* FUNC_5 (int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,char*) ;

__attribute__((used)) static struct dentry *FUNC_8(struct inode *VAR_2, struct dentry *VAR_3,
        unsigned int VAR_4)
{
 struct inode *VAR_5;
 char *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_5(VAR_2->i_sb);
 if (FUNC_1(VAR_5))
  goto out;

 VAR_7 = -VAR_1;
 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6) {
  VAR_7 = FUNC_7(VAR_5, VAR_6);
  FUNC_2(VAR_6);
 }
 if (VAR_7) {
  FUNC_6(VAR_5);
  VAR_5 = (VAR_7 == -VAR_0) ? ((void*)0) : FUNC_0(VAR_7);
 }
 out:
 return FUNC_3(VAR_5, VAR_3);
}
