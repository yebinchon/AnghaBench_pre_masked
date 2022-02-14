
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs4_ff_layout_mirror {TYPE_2__* mirror_ds; } ;
struct TYPE_4__ {TYPE_1__* ds_versions; } ;
struct TYPE_3__ {int version; } ;



__attribute__((used)) static inline int
FUNC_0(const struct nfs4_ff_layout_mirror *VAR_0)
{
 return VAR_0->mirror_ds->ds_versions[0].version;
}
