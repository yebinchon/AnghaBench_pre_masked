
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_stid {int sc_type; } ;
typedef int __be32 ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __be32
FUNC_0(struct nfs4_stid *VAR_3)
{
 __be32 VAR_4 = VAR_0;

 switch (VAR_3->sc_type) {
 default:
  break;
 case 0:
 case 129:
 case 130:
  VAR_4 = VAR_1;
  break;
 case 128:
  VAR_4 = VAR_2;
 }
 return VAR_4;
}
