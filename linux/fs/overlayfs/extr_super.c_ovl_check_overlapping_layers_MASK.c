
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ovl_fs {int numlower; TYPE_2__* lower_layers; int workbasedir; TYPE_3__* upper_mnt; } ;
struct TYPE_6__ {int mnt_root; } ;
struct TYPE_5__ {TYPE_1__* mnt; } ;
struct TYPE_4__ {int mnt_root; } ;


 int FUNC_0 (struct super_block*,struct ovl_fs*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0,
     struct ovl_fs *VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1->upper_mnt) {
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_1->upper_mnt->mnt_root,
          "upperdir");
  if (VAR_3)
   return VAR_3;
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_1->workbasedir, "workdir");
  if (VAR_3)
   return VAR_3;
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->numlower; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0, VAR_1,
          VAR_1->lower_layers[VAR_2].mnt->mnt_root,
          "lowerdir");
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
