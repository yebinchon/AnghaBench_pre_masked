
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layoutdriver_type {int dummy; } ;
struct nfs_client {int dummy; } ;
struct nfs4_deviceid_node {int flags; int node; } ;
struct nfs4_deviceid {int dummy; } ;


 int VAR_0 ;
 struct nfs4_deviceid_node* FUNC_0 (struct pnfs_layoutdriver_type const*,struct nfs_client const*,struct nfs4_deviceid const*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfs4_deviceid const*) ;
 int VAR_1 ;
 int FUNC_4 (struct nfs4_deviceid_node*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void
FUNC_9(const struct pnfs_layoutdriver_type *VAR_2,
    const struct nfs_client *VAR_3, const struct nfs4_deviceid *VAR_4)
{
 struct nfs4_deviceid_node *VAR_5;

 FUNC_7(&VAR_1);
 FUNC_5();
 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4, FUNC_3(VAR_4));
 FUNC_6();
 if (!VAR_5) {
  FUNC_8(&VAR_1);
  return;
 }
 FUNC_2(&VAR_5->node);
 FUNC_1(VAR_0, &VAR_5->flags);
 FUNC_8(&VAR_1);


 FUNC_4(VAR_5);
}
