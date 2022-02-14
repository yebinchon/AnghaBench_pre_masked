
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_local_disk_dqblk {int dummy; } ;


 int FUNC_0 (struct super_block*) ;

__attribute__((used)) static unsigned int FUNC_1(struct super_block *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0);

 return (VAR_2 % VAR_3) * sizeof(struct ocfs2_local_disk_dqblk);
}
