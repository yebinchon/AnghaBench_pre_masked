
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_mirror {int dummy; } ;
struct nfs_pageio_descriptor {size_t pg_mirror_idx; struct nfs_pgio_mirror* pg_mirrors; } ;


 scalar_t__ FUNC_0 (struct nfs_pageio_descriptor*) ;

struct nfs_pgio_mirror *
FUNC_1(struct nfs_pageio_descriptor *VAR_0)
{
 return FUNC_0(VAR_0) ?
  &VAR_0->pg_mirrors[VAR_0->pg_mirror_idx] :
  &VAR_0->pg_mirrors[0];
}
