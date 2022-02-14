
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_cb_sec {int flavor; } ;
typedef int __be32 ;




 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __be32 FUNC_0(struct nfsd4_cb_sec *VAR_2)
{
 switch (VAR_2->flavor) {
 case 129:
 case 128:
  return VAR_0;
 default:







  return VAR_1;
 }
}
