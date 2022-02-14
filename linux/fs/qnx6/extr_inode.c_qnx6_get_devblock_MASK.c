
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct qnx6_sb_info {int s_blks_off; } ;
typedef int __fs32 ;


 struct qnx6_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct qnx6_sb_info*,int ) ;

__attribute__((used)) static unsigned FUNC_2(struct super_block *VAR_0, __fs32 VAR_1)
{
 struct qnx6_sb_info *VAR_2 = FUNC_0(VAR_0);
 return FUNC_1(VAR_2, VAR_1) + VAR_2->s_blks_off;
}
