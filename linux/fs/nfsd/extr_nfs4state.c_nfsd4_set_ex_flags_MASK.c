
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_exchange_id {int flags; } ;
struct nfs4_client {int cl_exchange_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct nfs4_client *VAR_3, struct nfsd4_exchange_id *VAR_4)
{



 VAR_3->cl_exchange_flags |= VAR_1;



 VAR_3->cl_exchange_flags |= VAR_0;


 VAR_4->flags = VAR_3->cl_exchange_flags;
}
