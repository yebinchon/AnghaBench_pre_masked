
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_deviceid_node {TYPE_1__* ld; int ref; int deviceid; int nfs_client; int flags; } ;
struct TYPE_2__ {int (* free_deviceid_node ) (struct nfs4_deviceid_node*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (struct nfs4_deviceid_node*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

bool
FUNC_5(struct nfs4_deviceid_node *VAR_1)
{
 if (FUNC_4(VAR_0, &VAR_1->flags)) {
  if (FUNC_0(&VAR_1->ref, -1, 2))
   return 0;
  FUNC_2(VAR_1->ld, VAR_1->nfs_client, &VAR_1->deviceid);
 }
 if (!FUNC_1(&VAR_1->ref))
  return 0;
 VAR_1->ld->free_deviceid_node(VAR_1);
 return 1;
}
