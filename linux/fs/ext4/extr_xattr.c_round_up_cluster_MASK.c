
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_blkbits; struct super_block* i_sb; } ;
struct TYPE_2__ {int s_cluster_bits; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static inline size_t FUNC_1(struct inode *VAR_0, size_t VAR_1)
{
 struct super_block *VAR_2 = VAR_0->i_sb;
 size_t VAR_3 = 1 << (FUNC_0(VAR_2)->s_cluster_bits +
        VAR_0->i_blkbits);
 size_t VAR_4 = ~(VAR_3 - 1);

 return (VAR_1 + VAR_3 - 1) & VAR_4;
}
