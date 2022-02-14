
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bi_level; int bi_blkoff; } ;
union nilfs_binfo {TYPE_1__ bi_dat; } ;
struct nilfs_bmap {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
typedef int __u64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nilfs_bmap*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct nilfs_bmap *VAR_0,
     __u64 VAR_1, __u64 VAR_2,
     struct buffer_head **VAR_3,
     sector_t VAR_4,
     union nilfs_binfo *VAR_5)
{
 FUNC_1(VAR_0, VAR_1, VAR_4);

 VAR_5->bi_dat.bi_blkoff = FUNC_0(VAR_1);
 VAR_5->bi_dat.bi_level = 0;

 return 0;
}
