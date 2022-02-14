
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs4_label {int dummy; } ;
struct nfs4_exception {int interruptible; scalar_t__ retry; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct dentry {int d_name; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct dentry*,struct page*,unsigned int,struct iattr*,struct nfs4_label*) ;
 int FUNC_2 (int ,int,struct nfs4_exception*) ;
 struct nfs4_label* FUNC_3 (struct inode*,struct dentry*,struct iattr*,struct nfs4_label*) ;
 int FUNC_4 (struct nfs4_label*) ;
 int FUNC_5 (struct inode*,int *,int) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct dentry *VAR_1,
  struct page *VAR_2, unsigned int VAR_3, struct iattr *VAR_4)
{
 struct nfs4_exception VAR_5 = {
  .interruptible = 1,
 };
 struct nfs4_label VAR_6, *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_4, &VAR_6);

 do {
  VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
  FUNC_5(VAR_0, &VAR_1->d_name, VAR_8);
  VAR_8 = FUNC_2(FUNC_0(VAR_0), VAR_8,
    &VAR_5);
 } while (VAR_5.retry);

 FUNC_4(VAR_7);
 return VAR_8;
}
