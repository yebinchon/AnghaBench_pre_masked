
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {scalar_t__* nfsd4_minorversions; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct nfsd_net*,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct nfsd_net *VAR_2)
{
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 <= VAR_1; VAR_3++) {
  if (VAR_2->nfsd4_minorversions[VAR_3])
   return;
 }
 FUNC_0(VAR_2, 4, VAR_0);
}
