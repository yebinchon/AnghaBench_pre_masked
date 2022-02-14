
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_compoundargs {unsigned int pagelen; scalar_t__ p; scalar_t__ end; } ;



__attribute__((used)) static unsigned int FUNC_0(struct nfsd4_compoundargs *VAR_0)
{
 unsigned int VAR_1 = (char *)VAR_0->end - (char *)VAR_0->p;

 return VAR_1 + VAR_0->pagelen;
}
