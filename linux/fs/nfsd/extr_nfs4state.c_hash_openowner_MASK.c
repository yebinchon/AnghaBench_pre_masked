
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int so_strhash; } ;
struct nfs4_openowner {int oo_perclient; TYPE_1__ oo_owner; } ;
struct nfs4_client {int cl_openowners; int * cl_ownerstr_hashtbl; int cl_lock; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfs4_openowner *VAR_0, struct nfs4_client *VAR_1, unsigned int VAR_2)
{
 FUNC_1(&VAR_1->cl_lock);

 FUNC_0(&VAR_0->oo_owner.so_strhash,
   &VAR_1->cl_ownerstr_hashtbl[VAR_2]);
 FUNC_0(&VAR_0->oo_perclient, &VAR_1->cl_openowners);
}
