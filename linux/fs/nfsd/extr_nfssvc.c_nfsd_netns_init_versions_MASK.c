
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int nfsd4_minorversions; scalar_t__ nfsd_versions; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct nfsd_net*) ;

__attribute__((used)) static void
FUNC_3(struct nfsd_net *VAR_0)
{
 if (!VAR_0->nfsd_versions) {
  VAR_0->nfsd_versions = FUNC_1();
  VAR_0->nfsd4_minorversions = FUNC_0();
  if (!VAR_0->nfsd_versions || !VAR_0->nfsd4_minorversions)
   FUNC_2(VAR_0);
 }
}
