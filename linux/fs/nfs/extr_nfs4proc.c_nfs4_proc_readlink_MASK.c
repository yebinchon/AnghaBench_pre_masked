
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs4_exception {int interruptible; scalar_t__ retry; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct page*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int,struct nfs4_exception*) ;
 int FUNC_3 (struct inode*,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct page *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3)
{
 struct nfs4_exception VAR_4 = {
  .interruptible = 1,
 };
 int VAR_5;
 do {
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  FUNC_3(VAR_0, VAR_5);
  VAR_5 = FUNC_2(FUNC_0(VAR_0), VAR_5,
    &VAR_4);
 } while (VAR_4.retry);
 return VAR_5;
}
