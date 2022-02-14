
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_client {int dummy; } ;
struct nfs4_state {scalar_t__ n_rdwr; int flags; scalar_t__ n_wronly; scalar_t__ n_rdonly; TYPE_2__* owner; } ;
struct TYPE_4__ {TYPE_1__* so_server; } ;
struct TYPE_3__ {struct nfs_client* nfs_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfs_client*,struct nfs4_state*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct nfs4_state *VAR_3)
{
 struct nfs_client *VAR_4 = VAR_3->owner->so_server->nfs_client;
 bool VAR_5 = 0;

 if (FUNC_1(VAR_0, &VAR_3->flags) && VAR_3->n_rdonly)
  VAR_5 = 1;
 if (FUNC_1(VAR_2, &VAR_3->flags) && VAR_3->n_wronly)
  VAR_5 = 1;
 if (FUNC_1(VAR_1, &VAR_3->flags) && VAR_3->n_rdwr)
  VAR_5 = 1;
 if (VAR_5)
  FUNC_0(VAR_4, VAR_3);
}
