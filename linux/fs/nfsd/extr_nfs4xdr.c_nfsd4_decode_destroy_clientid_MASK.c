
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_destroy_clientid {int clientid; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static __be32 FUNC_2(struct nfsd4_compoundargs *VAR_2, struct nfsd4_destroy_clientid *VAR_3)
{
 VAR_0;

 FUNC_1(8);
 FUNC_0(&VAR_3->clientid, 8);

 VAR_1;
}
