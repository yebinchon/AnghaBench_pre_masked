
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_compoundargs {scalar_t__ minorversion; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __be32
FUNC_0(struct nfsd4_compoundargs *VAR_2, void *VAR_3)
{
 if (VAR_2->minorversion == 0)
  return VAR_0;
 return VAR_1;
}
