
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scrub_block {int page_count; scalar_t__ sparity; TYPE_1__* sctx; } ;
struct TYPE_4__ {int num_write_errors; } ;
struct btrfs_fs_info {TYPE_2__ dev_replace; } ;
struct TYPE_3__ {struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct scrub_block*,int) ;

__attribute__((used)) static void FUNC_2(struct scrub_block *VAR_0)
{
 struct btrfs_fs_info *VAR_1 = VAR_0->sctx->fs_info;
 int VAR_2;





 if (VAR_0->sparity)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->page_count; VAR_2++) {
  int VAR_3;

  VAR_3 = FUNC_1(VAR_0, VAR_2);
  if (VAR_3)
   FUNC_0(&VAR_1->dev_replace.num_write_errors);
 }
}
