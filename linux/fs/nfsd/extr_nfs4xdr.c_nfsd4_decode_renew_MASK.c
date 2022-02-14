
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_compoundargs {int minorversion; } ;
typedef int clientid_t ;
typedef int __be32 ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;

__attribute__((used)) static __be32
FUNC_2(struct nfsd4_compoundargs *VAR_3, clientid_t *VAR_4)
{
 VAR_0;

 if (VAR_3->minorversion >= 1)
  return VAR_2;

 FUNC_1(sizeof(clientid_t));
 FUNC_0(VAR_4, sizeof(clientid_t));

 VAR_1;
}
