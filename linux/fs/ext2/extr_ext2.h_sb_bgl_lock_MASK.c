
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_sb_info {int s_blockgroup_lock; } ;
typedef int spinlock_t ;


 int * FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static inline spinlock_t *
FUNC_1(struct ext2_sb_info *VAR_0, unsigned int VAR_1)
{
 return FUNC_0(VAR_0->s_blockgroup_lock, VAR_1);
}
