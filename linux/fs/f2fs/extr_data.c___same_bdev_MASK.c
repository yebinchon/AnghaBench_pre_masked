
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct block_device {scalar_t__ bd_disk; scalar_t__ bd_partno; } ;
struct bio {scalar_t__ bi_disk; scalar_t__ bi_partno; } ;
typedef int block_t ;


 struct block_device* FUNC_0 (struct f2fs_sb_info*,int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct f2fs_sb_info *VAR_0,
    block_t VAR_1, struct bio *VAR_2)
{
 struct block_device *VAR_3 = FUNC_0(VAR_0, VAR_1, ((void*)0));
 return VAR_2->bi_disk == VAR_3->bd_disk && VAR_2->bi_partno == VAR_3->bd_partno;
}
