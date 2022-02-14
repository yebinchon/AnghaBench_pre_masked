
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct qnx4_sb_info* s_fs_info; } ;
struct qnx4_sb_info {int dummy; } ;



__attribute__((used)) static inline struct qnx4_sb_info *FUNC_0(struct super_block *VAR_0)
{
 return VAR_0->s_fs_info;
}
