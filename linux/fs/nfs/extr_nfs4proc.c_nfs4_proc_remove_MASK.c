
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_exception {int interruptible; scalar_t__ retry; } ;
struct inode {int i_nlink; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int *,int ) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,int,struct nfs4_exception*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int *,int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct nfs4_exception VAR_3 = {
  .interruptible = 1,
 };
 struct inode *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 if (VAR_4) {
  if (VAR_4->i_nlink == 1)
   FUNC_5(VAR_4);
  else
   FUNC_4(VAR_4);
 }
 do {
  VAR_5 = FUNC_1(VAR_1, &VAR_2->d_name, VAR_0);
  FUNC_6(VAR_1, &VAR_2->d_name, VAR_5);
  VAR_5 = FUNC_3(FUNC_0(VAR_1), VAR_5,
    &VAR_3);
 } while (VAR_3.retry);
 return VAR_5;
}
