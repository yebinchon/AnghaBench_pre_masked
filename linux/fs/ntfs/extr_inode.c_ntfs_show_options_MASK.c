
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct dentry {int d_sb; } ;
struct TYPE_9__ {scalar_t__ fmask; scalar_t__ dmask; int on_errors; scalar_t__ mft_zone_multiplier; TYPE_1__* nls_map; int gid; int uid; } ;
typedef TYPE_2__ ntfs_volume ;
struct TYPE_10__ {int val; scalar_t__ str; } ;
struct TYPE_8__ {scalar_t__ charset; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_6 (struct seq_file*,char*,...) ;

int FUNC_7(struct seq_file *VAR_2, struct dentry *VAR_3)
{
 ntfs_volume *VAR_4 = FUNC_0(VAR_3->d_sb);
 int VAR_5;

 FUNC_6(VAR_2, ",uid=%i", FUNC_5(&VAR_0, VAR_4->uid));
 FUNC_6(VAR_2, ",gid=%i", FUNC_4(&VAR_0, VAR_4->gid));
 if (VAR_4->fmask == VAR_4->dmask)
  FUNC_6(VAR_2, ",umask=0%o", VAR_4->fmask);
 else {
  FUNC_6(VAR_2, ",fmask=0%o", VAR_4->fmask);
  FUNC_6(VAR_2, ",dmask=0%o", VAR_4->dmask);
 }
 FUNC_6(VAR_2, ",nls=%s", VAR_4->nls_map->charset);
 if (FUNC_1(VAR_4))
  FUNC_6(VAR_2, ",case_sensitive");
 if (FUNC_2(VAR_4))
  FUNC_6(VAR_2, ",show_sys_files");
 if (!FUNC_3(VAR_4))
  FUNC_6(VAR_2, ",disable_sparse");
 for (VAR_5 = 0; VAR_1[VAR_5].val; VAR_5++) {
  if (VAR_1[VAR_5].val & VAR_4->on_errors)
   FUNC_6(VAR_2, ",errors=%s", VAR_1[VAR_5].str);
 }
 FUNC_6(VAR_2, ",mft_zone_multiplier=%i", VAR_4->mft_zone_multiplier);
 return 0;
}
