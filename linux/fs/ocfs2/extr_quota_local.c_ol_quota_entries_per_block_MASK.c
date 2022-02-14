
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct ocfs2_local_disk_dqblk {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct super_block *VAR_1)
{
 return ((VAR_1->s_blocksize - VAR_0) /
  sizeof(struct ocfs2_local_disk_dqblk));
}
