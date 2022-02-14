
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnfs_layout_range {int iomode; } ;
struct nfs4_ff_layout_mirror {TYPE_2__* mirror_ds; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ds_versions; } ;
struct TYPE_3__ {int tightly_coupled; } ;


 struct cred* FUNC_0 (struct nfs4_ff_layout_mirror*,int ) ;
 struct cred* FUNC_1 (struct cred const*) ;

const struct cred *
FUNC_2(struct nfs4_ff_layout_mirror *VAR_0,
        const struct pnfs_layout_range *VAR_1,
        const struct cred *VAR_2)
{
 const struct cred *VAR_3;

 if (VAR_0 && !VAR_0->mirror_ds->ds_versions[0].tightly_coupled) {
  VAR_3 = FUNC_0(VAR_0, VAR_1->iomode);
  if (!VAR_3)
   VAR_3 = FUNC_1(VAR_2);
 } else {
  VAR_3 = FUNC_1(VAR_2);
 }
 return VAR_3;
}
