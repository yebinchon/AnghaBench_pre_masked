
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scrub_page {int logical; TYPE_3__* recover; TYPE_2__* sblock; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_8__ {int bi_sector; } ;
struct bio {int bi_status; int bi_end_io; int * bi_private; TYPE_4__ bi_iter; } ;
struct TYPE_7__ {int map_length; int bbio; } ;
struct TYPE_6__ {TYPE_1__** pagev; } ;
struct TYPE_5__ {int mirror_num; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct btrfs_fs_info*,struct bio*,int ,int ,int,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct btrfs_fs_info *VAR_2,
     struct bio *VAR_3,
     struct scrub_page *VAR_4)
{
 FUNC_0(VAR_0);
 int VAR_5;
 int VAR_6;

 VAR_3->bi_iter.bi_sector = VAR_4->logical >> 9;
 VAR_3->bi_private = &VAR_0;
 VAR_3->bi_end_io = VAR_1;

 VAR_6 = VAR_4->sblock->pagev[0]->mirror_num;
 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4->recover->bbio,
        VAR_4->recover->map_length,
        VAR_6, 0);
 if (VAR_5)
  return VAR_5;

 FUNC_3(&VAR_0);
 return FUNC_1(VAR_3->bi_status);
}
