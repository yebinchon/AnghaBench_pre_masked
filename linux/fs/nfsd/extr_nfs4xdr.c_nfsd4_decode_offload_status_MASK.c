
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_offload_status {int stateid; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct nfsd4_compoundargs*,int *) ;

__attribute__((used)) static __be32
FUNC_1(struct nfsd4_compoundargs *VAR_0,
       struct nfsd4_offload_status *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_1->stateid);
}
