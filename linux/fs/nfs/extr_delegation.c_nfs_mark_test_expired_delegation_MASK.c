
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {TYPE_2__* nfs_client; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct nfs_delegation {int flags; TYPE_1__ stateid; } ;
struct TYPE_4__ {int cl_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct nfs_server *VAR_4,
     struct nfs_delegation *VAR_5)
{
 if (VAR_5->stateid.type == VAR_1)
  return;
 FUNC_0(VAR_2, &VAR_5->flags);
 FUNC_1(VAR_3, &VAR_5->flags);
 FUNC_1(VAR_0, &VAR_4->nfs_client->cl_state);
}
