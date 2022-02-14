
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qstr {int dummy; } ;
struct nfs4_secinfo_flavors {int dummy; } ;
struct nfs4_exception {int interruptible; scalar_t__ retry; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {int nfs_client; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct qstr const*,struct nfs4_secinfo_flavors*,int) ;
 int FUNC_3 (TYPE_1__*,int,struct nfs4_exception*) ;
 int FUNC_4 (struct inode*,struct qstr const*,int) ;

int FUNC_5(struct inode *VAR_1, const struct qstr *VAR_2,
        struct nfs4_secinfo_flavors *VAR_3)
{
 struct nfs4_exception VAR_4 = {
  .interruptible = 1,
 };
 int VAR_5;
 do {
  VAR_5 = -VAR_0;


  if (FUNC_1(FUNC_0(VAR_1)->nfs_client))
   VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, 1);







  if (VAR_5 == -VAR_0)
   VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, 0);

  FUNC_4(VAR_1, VAR_2, VAR_5);
  VAR_5 = FUNC_3(FUNC_0(VAR_1), VAR_5,
    &VAR_4);
 } while (VAR_4.retry);
 return VAR_5;
}
