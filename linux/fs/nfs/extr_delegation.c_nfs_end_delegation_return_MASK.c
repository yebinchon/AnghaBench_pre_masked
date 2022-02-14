
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_inode {int dummy; } ;
struct nfs_delegation {int type; int stateid; int flags; } ;
struct nfs_client {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {struct nfs_client* nfs_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct nfs_client*) ;
 int FUNC_3 (struct nfs_delegation*,struct nfs_client*) ;
 int FUNC_4 (struct inode*,int *,int ) ;
 int FUNC_5 (struct nfs_inode*,struct nfs_delegation*,TYPE_1__*) ;
 int FUNC_6 (struct inode*,struct nfs_delegation*,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_2, struct nfs_delegation *VAR_3, int VAR_4)
{
 struct nfs_client *VAR_5 = FUNC_1(VAR_2)->nfs_client;
 struct nfs_inode *VAR_6 = FUNC_0(VAR_2);
 int VAR_7 = 0;

 if (VAR_3 == ((void*)0))
  return 0;
 do {
  if (FUNC_7(VAR_1, &VAR_3->flags))
   break;
  VAR_7 = FUNC_4(VAR_2, &VAR_3->stateid,
    VAR_3->type);
  if (!VAR_4 || VAR_7 != -VAR_0)
   break;



  VAR_7 = FUNC_2(VAR_5);
 } while (VAR_7 == 0);

 if (VAR_7) {
  FUNC_3(VAR_3, VAR_5);
  goto out;
 }
 if (!FUNC_5(VAR_6, VAR_3, FUNC_1(VAR_2)))
  goto out;

 VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_4);
out:
 return VAR_7;
}
