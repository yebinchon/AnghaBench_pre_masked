
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int nfs_client; int pnfs_curr_ld; } ;
struct nfs4_deviceid_node {int ref; } ;
struct nfs4_deviceid {int dummy; } ;


 struct nfs4_deviceid_node* FUNC_0 (int ,int ,struct nfs4_deviceid const*,long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static struct nfs4_deviceid_node *
FUNC_4(struct nfs_server *VAR_0,
  const struct nfs4_deviceid *VAR_1, long VAR_2)
{
 struct nfs4_deviceid_node *VAR_3;

 FUNC_2();
 VAR_3 = FUNC_0(VAR_0->pnfs_curr_ld, VAR_0->nfs_client, VAR_1,
   VAR_2);
 if (VAR_3 != ((void*)0) && !FUNC_1(&VAR_3->ref))
  VAR_3 = ((void*)0);
 FUNC_3();
 return VAR_3;
}
