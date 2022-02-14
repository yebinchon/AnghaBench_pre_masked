
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct omfs_sb_info {scalar_t__ s_num_blocks; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;


 struct omfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct omfs_sb_info*,scalar_t__) ;
 struct buffer_head* FUNC_2 (struct super_block*,int ) ;

struct buffer_head *FUNC_3(struct super_block *VAR_0, sector_t VAR_1)
{
 struct omfs_sb_info *VAR_2 = FUNC_0(VAR_0);
 if (VAR_1 >= VAR_2->s_num_blocks)
  return ((void*)0);

 return FUNC_2(VAR_0, FUNC_1(VAR_2, VAR_1));
}
