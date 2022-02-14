
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int so_strhash; struct nfs4_client* so_client; } ;
struct nfs4_lockowner {TYPE_1__ lo_owner; } ;
struct nfs4_client {int cl_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfs4_lockowner *VAR_0)
{
 struct nfs4_client *VAR_1 = VAR_0->lo_owner.so_client;

 FUNC_1(&VAR_1->cl_lock);

 FUNC_0(&VAR_0->lo_owner.so_strhash);
}
