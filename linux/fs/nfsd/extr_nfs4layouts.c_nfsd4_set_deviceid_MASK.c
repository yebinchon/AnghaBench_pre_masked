
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct svc_fh {TYPE_2__* fh_export; } ;
struct nfsd4_deviceid {scalar_t__ pad; int generation; int fsid_idx; } ;
struct TYPE_4__ {TYPE_1__* ex_devid_map; } ;
struct TYPE_3__ {int idx; } ;


 int VAR_0 ;
 int FUNC_0 (struct svc_fh const*) ;

int
FUNC_1(struct nfsd4_deviceid *VAR_1, const struct svc_fh *VAR_2,
  u32 VAR_3)
{
 if (!VAR_2->fh_export->ex_devid_map) {
  FUNC_0(VAR_2);
  if (!VAR_2->fh_export->ex_devid_map)
   return -VAR_0;
 }

 VAR_1->fsid_idx = VAR_2->fh_export->ex_devid_map->idx;
 VAR_1->generation = VAR_3;
 VAR_1->pad = 0;
 return 0;
}
