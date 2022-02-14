
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int * nfsd4_minorversions; int * nfsd_versions; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct nfsd_net *VAR_0)
{
 FUNC_0(VAR_0->nfsd_versions);
 FUNC_0(VAR_0->nfsd4_minorversions);
 VAR_0->nfsd_versions = ((void*)0);
 VAR_0->nfsd4_minorversions = ((void*)0);
}
