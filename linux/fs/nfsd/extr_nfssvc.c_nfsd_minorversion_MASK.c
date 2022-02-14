
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfsd_net {int* nfsd4_minorversions; } ;
typedef enum vers_op { ____Placeholder_vers_op } vers_op ;





 scalar_t__ VAR_0 ;

 int FUNC_0 (struct nfsd_net*) ;
 int FUNC_1 (struct nfsd_net*) ;
 int FUNC_2 (struct nfsd_net*,int,int const) ;

int FUNC_3(struct nfsd_net *VAR_1, u32 VAR_2, enum vers_op VAR_3)
{
 if (VAR_2 > VAR_0 &&
     VAR_3 != 131)
  return -1;

 switch(VAR_3) {
 case 129:
  if (VAR_1->nfsd4_minorversions) {
   FUNC_2(VAR_1, 4, 129);
   VAR_1->nfsd4_minorversions[VAR_2] =
    FUNC_2(VAR_1, 4, 128);
  }
  break;
 case 130:
  FUNC_1(VAR_1);
  if (VAR_1->nfsd4_minorversions) {
   VAR_1->nfsd4_minorversions[VAR_2] = 0;
   FUNC_0(VAR_1);
  }
  break;
 case 128:
  if (VAR_1->nfsd4_minorversions)
   return VAR_1->nfsd4_minorversions[VAR_2];
  return FUNC_2(VAR_1, 4, 128);
 case 131:
  return VAR_2 <= VAR_0 &&
   FUNC_2(VAR_1, 4, 131);
 }
 return 0;
}
