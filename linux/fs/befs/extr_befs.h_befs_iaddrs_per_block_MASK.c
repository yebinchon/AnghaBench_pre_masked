
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int befs_disk_inode_addr ;
struct TYPE_2__ {int block_size; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static inline unsigned int
FUNC_1(struct super_block *VAR_0)
{
 return FUNC_0(VAR_0)->block_size / sizeof(befs_disk_inode_addr);
}
