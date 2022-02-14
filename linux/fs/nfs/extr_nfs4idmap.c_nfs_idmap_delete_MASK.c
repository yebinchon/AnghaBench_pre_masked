
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client {TYPE_1__* cl_rpcclient; int cl_net; struct idmap* cl_idmap; } ;
struct idmap {int cred; int idmap_pipe; int idmap_pdo; } ;
struct TYPE_2__ {int cl_pipedir_objects; } ;


 int FUNC_0 (struct idmap*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int *) ;

void
FUNC_4(struct nfs_client *VAR_0)
{
 struct idmap *VAR_1 = VAR_0->cl_idmap;

 if (!VAR_1)
  return;
 VAR_0->cl_idmap = ((void*)0);
 FUNC_3(VAR_0->cl_net,
   &VAR_0->cl_rpcclient->cl_pipedir_objects,
   &VAR_1->idmap_pdo);
 FUNC_2(VAR_1->idmap_pipe);
 FUNC_1(VAR_1->cred);
 FUNC_0(VAR_1);
}
