
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_nlink; } ;
struct dentry {int d_sb; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*) ;
 struct cred* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct inode*) ;
 int FUNC_5 (struct cred const*) ;

void FUNC_6(struct dentry *VAR_1)
{
 struct inode *VAR_2 = FUNC_0(VAR_1);

 if (FUNC_4(VAR_0, VAR_2) && VAR_2->i_nlink == 0) {
  const struct cred *VAR_3;

  VAR_3 = FUNC_3(VAR_1->d_sb);
  FUNC_1(VAR_1);
  FUNC_5(VAR_3);
 }

 FUNC_2(VAR_2);
}
