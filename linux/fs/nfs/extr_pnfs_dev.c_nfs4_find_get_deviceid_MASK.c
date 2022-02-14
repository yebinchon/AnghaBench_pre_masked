
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {TYPE_1__* pnfs_curr_ld; } ;
struct nfs4_deviceid_node {int ref; int node; } ;
struct nfs4_deviceid {int dummy; } ;
struct cred {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* free_deviceid_node ) (struct nfs4_deviceid_node*) ;} ;


 struct nfs4_deviceid_node* FUNC_0 (struct nfs_server*,struct nfs4_deviceid const*,long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * VAR_0 ;
 long FUNC_3 (struct nfs4_deviceid const*) ;
 int VAR_1 ;
 struct nfs4_deviceid_node* FUNC_4 (struct nfs_server*,struct nfs4_deviceid const*,struct cred const*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nfs4_deviceid_node*) ;

struct nfs4_deviceid_node *
FUNC_8(struct nfs_server *VAR_2,
  const struct nfs4_deviceid *VAR_3, const struct cred *VAR_4,
  gfp_t VAR_5)
{
 long VAR_6 = FUNC_3(VAR_3);
 struct nfs4_deviceid_node *VAR_7, *VAR_8;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_8)
  return VAR_8;

 FUNC_5(&VAR_1);
 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_6);
 if (VAR_7) {
  FUNC_6(&VAR_1);
  VAR_2->pnfs_curr_ld->free_deviceid_node(VAR_8);
  return VAR_7;
 }
 FUNC_2(&VAR_8->node, &VAR_0[VAR_6]);
 FUNC_1(&VAR_8->ref);
 FUNC_6(&VAR_1);

 return VAR_8;
}
