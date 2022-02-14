
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct ovl_fs* redirect_mode; struct ovl_fs* workdir; struct ovl_fs* upperdir; struct ovl_fs* lowerdir; } ;
struct ovl_fs {unsigned int numlower; unsigned int numlowerfs; scalar_t__ creator_cred; TYPE_1__ config; struct ovl_fs* lower_fs; struct ovl_fs* lower_layers; int pseudo_dev; TYPE_2__* mnt; int trap; TYPE_2__* upper_mnt; scalar_t__ upperdir_locked; int workbasedir; scalar_t__ workdir_locked; int workdir; int indexdir; int upperdir_trap; int workdir_trap; int indexdir_trap; int workbasedir_trap; } ;
struct TYPE_4__ {int mnt_root; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ovl_fs*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct ovl_fs *VAR_0)
{
 unsigned VAR_1;

 FUNC_2(VAR_0->workbasedir_trap);
 FUNC_2(VAR_0->indexdir_trap);
 FUNC_2(VAR_0->workdir_trap);
 FUNC_2(VAR_0->upperdir_trap);
 FUNC_0(VAR_0->indexdir);
 FUNC_0(VAR_0->workdir);
 if (VAR_0->workdir_locked)
  FUNC_5(VAR_0->workbasedir);
 FUNC_0(VAR_0->workbasedir);
 if (VAR_0->upperdir_locked)
  FUNC_5(VAR_0->upper_mnt->mnt_root);
 FUNC_4(VAR_0->upper_mnt);
 for (VAR_1 = 0; VAR_1 < VAR_0->numlower; VAR_1++) {
  FUNC_2(VAR_0->lower_layers[VAR_1].trap);
  FUNC_4(VAR_0->lower_layers[VAR_1].mnt);
 }
 for (VAR_1 = 0; VAR_1 < VAR_0->numlowerfs; VAR_1++)
  FUNC_1(VAR_0->lower_fs[VAR_1].pseudo_dev);
 FUNC_3(VAR_0->lower_layers);
 FUNC_3(VAR_0->lower_fs);

 FUNC_3(VAR_0->config.lowerdir);
 FUNC_3(VAR_0->config.upperdir);
 FUNC_3(VAR_0->config.workdir);
 FUNC_3(VAR_0->config.redirect_mode);
 if (VAR_0->creator_cred)
  FUNC_6(VAR_0->creator_cred);
 FUNC_3(VAR_0);
}
