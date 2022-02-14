
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_2__* s_bdev; } ;
struct ext4_sb_info {int s_sectors_written_start; TYPE_1__* s_buddy_cache; } ;
typedef int ssize_t ;
struct TYPE_4__ {int bd_part; } ;
struct TYPE_3__ {struct super_block* i_sb; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_2 ;
 int FUNC_1 (char*,int ,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct ext4_sb_info *VAR_3, char *VAR_4)
{
 struct super_block *VAR_5 = VAR_3->s_buddy_cache->i_sb;

 if (!VAR_5->s_bdev->bd_part)
  return FUNC_1(VAR_4, VAR_0, "0\n");
 return FUNC_1(VAR_4, VAR_0, "%lu\n",
   (FUNC_0(VAR_5->s_bdev->bd_part,
     VAR_2[VAR_1]) -
    VAR_3->s_sectors_written_start) >> 1);
}
