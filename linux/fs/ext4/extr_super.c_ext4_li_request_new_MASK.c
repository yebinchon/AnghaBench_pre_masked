
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_sb_info {int dummy; } ;
struct ext4_li_request {scalar_t__ lr_next_sched; int lr_next_group; struct ext4_sb_info* lr_sbi; struct super_block* lr_super; } ;
typedef int ext4_group_t ;


 int VAR_0 ;
 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ext4_li_request* FUNC_1 (int,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static struct ext4_li_request *FUNC_3(struct super_block *VAR_4,
         ext4_group_t VAR_5)
{
 struct ext4_sb_info *VAR_6 = FUNC_0(VAR_4);
 struct ext4_li_request *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->lr_super = VAR_4;
 VAR_7->lr_sbi = VAR_6;
 VAR_7->lr_next_group = VAR_5;






 VAR_7->lr_next_sched = VAR_3 + (FUNC_2() %
    (VAR_0 * VAR_2));
 return VAR_7;
}
