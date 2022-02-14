
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_setclientid_confirm {int sc_confirm; int sc_clientid; } ;
struct nfsd4_compoundargs {int minorversion; } ;
typedef int __be32 ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;

__attribute__((used)) static __be32
FUNC_2(struct nfsd4_compoundargs *VAR_4, struct nfsd4_setclientid_confirm *VAR_5)
{
 VAR_0;

 if (VAR_4->minorversion >= 1)
  return VAR_3;

 FUNC_1(8 + VAR_2);
 FUNC_0(&VAR_5->sc_clientid, 8);
 FUNC_0(&VAR_5->sc_confirm, VAR_2);

 VAR_1;
}
