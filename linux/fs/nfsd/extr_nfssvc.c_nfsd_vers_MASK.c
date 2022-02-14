
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int* nfsd_versions; } ;
typedef enum vers_op { ____Placeholder_vers_op } vers_op ;




 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct nfsd_net*) ;
 int FUNC_1 (int) ;

int FUNC_2(struct nfsd_net *VAR_2, int VAR_3, enum vers_op VAR_4)
{
 if (VAR_3 < VAR_0 || VAR_3 >= VAR_1)
  return 0;
 switch(VAR_4) {
 case 129:
  if (VAR_2->nfsd_versions)
   VAR_2->nfsd_versions[VAR_3] = FUNC_1(VAR_3);
  break;
 case 130:
  FUNC_0(VAR_2);
  if (VAR_2->nfsd_versions)
   VAR_2->nfsd_versions[VAR_3] = 0;
  break;
 case 128:
  if (VAR_2->nfsd_versions)
   return VAR_2->nfsd_versions[VAR_3];

 case 131:
  return FUNC_1(VAR_3);
 }
 return 0;
}
