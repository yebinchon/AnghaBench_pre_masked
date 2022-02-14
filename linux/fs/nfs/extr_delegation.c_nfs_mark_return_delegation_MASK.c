
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {TYPE_1__* nfs_client; } ;
struct nfs_delegation {int flags; } ;
struct TYPE_2__ {int cl_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct nfs_server *VAR_2,
  struct nfs_delegation *VAR_3)
{
 FUNC_0(VAR_1, &VAR_3->flags);
 FUNC_0(VAR_0, &VAR_2->nfs_client->cl_state);
}
