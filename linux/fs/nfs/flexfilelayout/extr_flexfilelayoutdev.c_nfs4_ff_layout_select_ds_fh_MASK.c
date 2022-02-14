
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fh {int dummy; } ;
struct nfs4_ff_layout_mirror {struct nfs_fh* fh_versions; } ;



struct nfs_fh *
FUNC_0(struct nfs4_ff_layout_mirror *VAR_0)
{

 return &VAR_0->fh_versions[0];
}
