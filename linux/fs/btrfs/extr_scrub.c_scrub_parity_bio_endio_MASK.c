
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scrub_parity {int work; int nsectors; int dbitmap; int ebitmap; TYPE_1__* sctx; } ;
struct btrfs_fs_info {int scrub_parity_workers; } ;
struct bio {scalar_t__ bi_status; scalar_t__ bi_private; } ;
struct TYPE_2__ {struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_2)
{
 struct scrub_parity *VAR_3 = (struct scrub_parity *)VAR_2->bi_private;
 struct btrfs_fs_info *VAR_4 = VAR_3->sctx->fs_info;

 if (VAR_2->bi_status)
  FUNC_1(VAR_3->ebitmap, VAR_3->ebitmap, VAR_3->dbitmap,
     VAR_3->nsectors);

 FUNC_0(VAR_2);

 FUNC_2(&VAR_3->work, VAR_0,
   VAR_1, ((void*)0), ((void*)0));
 FUNC_3(VAR_4->scrub_parity_workers, &VAR_3->work);
}
