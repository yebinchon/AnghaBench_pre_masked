
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct nfs4_exception {int interruptible; scalar_t__ retry; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct qstr const*,int ) ;
 int FUNC_2 (int ,int,struct nfs4_exception*) ;
 int FUNC_3 (struct inode*,struct qstr const*,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, const struct qstr *VAR_2)
{
 struct nfs4_exception VAR_3 = {
  .interruptible = 1,
 };
 int VAR_4;

 do {
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_0);
  FUNC_3(VAR_1, VAR_2, VAR_4);
  VAR_4 = FUNC_2(FUNC_0(VAR_1), VAR_4,
    &VAR_3);
 } while (VAR_3.retry);
 return VAR_4;
}
