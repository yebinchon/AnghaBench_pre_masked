
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs_delegation {int stateid; } ;
struct nfs_client {int dummy; } ;
struct inode {int dummy; } ;
typedef int nfs4_stateid ;
struct TYPE_5__ {int delegation; } ;
struct TYPE_4__ {struct nfs_client* nfs_client; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct nfs_client*) ;
 scalar_t__ FUNC_3 (int *,int const*) ;
 int FUNC_4 (TYPE_1__*,struct nfs_delegation*) ;
 struct nfs_delegation* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(struct inode *VAR_0,
  const nfs4_stateid *VAR_1)
{
 struct nfs_client *VAR_2 = FUNC_1(VAR_0)->nfs_client;
 struct nfs_delegation *VAR_3;
 bool VAR_4 = 0;

 FUNC_6();
 VAR_3 = FUNC_5(FUNC_0(VAR_0)->delegation);
 if (VAR_3 &&
     FUNC_3(&VAR_3->stateid, VAR_1)) {
  FUNC_4(FUNC_1(VAR_0), VAR_3);
  VAR_4 = 1;
 }
 FUNC_7();
 if (VAR_4)
  FUNC_2(VAR_2);
}
