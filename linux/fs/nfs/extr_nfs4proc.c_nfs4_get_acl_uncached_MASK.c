
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_exception {int interruptible; scalar_t__ retry; } ;
struct inode {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*,void*,size_t) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,struct nfs4_exception*) ;
 int FUNC_3 (struct inode*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_4(struct inode *VAR_0, void *VAR_1, size_t VAR_2)
{
 struct nfs4_exception VAR_3 = {
  .interruptible = 1,
 };
 ssize_t VAR_4;
 do {
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_3(VAR_0, VAR_4);
  if (VAR_4 >= 0)
   break;
  VAR_4 = FUNC_2(FUNC_0(VAR_0), VAR_4, &VAR_3);
 } while (VAR_3.retry);
 return VAR_4;
}
