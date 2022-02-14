
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pr_ops {int (* pr_register ) (TYPE_3__*,int ,int ,int) ;} ;
struct pnfs_block_dev {int nr_children; TYPE_3__* bdev; int pr_key; scalar_t__ pr_registered; struct pnfs_block_dev* children; } ;
struct TYPE_7__ {TYPE_2__* bd_disk; } ;
struct TYPE_6__ {TYPE_1__* fops; } ;
struct TYPE_5__ {struct pr_ops* pr_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (struct pnfs_block_dev*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct pnfs_block_dev *VAR_2)
{
 if (VAR_2->nr_children) {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2->nr_children; VAR_3++)
   FUNC_4(&VAR_2->children[VAR_3]);
  FUNC_1(VAR_2->children);
 } else {
  if (VAR_2->pr_registered) {
   const struct pr_ops *VAR_4 =
    VAR_2->bdev->bd_disk->fops->pr_ops;
   int VAR_5;

   VAR_5 = VAR_4->pr_register(VAR_2->bdev, VAR_2->pr_key, 0,
    0);
   if (VAR_5)
    FUNC_2("failed to unregister PR key.\n");
  }

  if (VAR_2->bdev)
   FUNC_0(VAR_2->bdev, VAR_0 | VAR_1);
 }
}
