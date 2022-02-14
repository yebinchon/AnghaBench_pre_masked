
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct unallocSpaceEntry {int dummy; } ;
struct super_block {int dummy; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct extent_position {int offset; int * bh; int block; } ;
typedef int int8_t ;
struct TYPE_6__ {int i_location; } ;
struct TYPE_5__ {int s_alloc_mutex; } ;
struct TYPE_4__ {unsigned int s_blocksize_bits; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,struct extent_position*,struct kernel_lb_addr*,unsigned int*,int) ;

__attribute__((used)) static unsigned int FUNC_6(struct super_block *VAR_0,
      struct inode *VAR_1)
{
 unsigned int VAR_2 = 0;
 uint32_t VAR_3;
 struct kernel_lb_addr VAR_4;
 int8_t VAR_5;
 struct extent_position VAR_6;

 FUNC_3(&FUNC_1(VAR_0)->s_alloc_mutex);
 VAR_6.block = FUNC_0(VAR_1)->i_location;
 VAR_6.offset = sizeof(struct unallocSpaceEntry);
 VAR_6.bh = ((void*)0);

 while ((VAR_5 = FUNC_5(VAR_1, &VAR_6, &VAR_4, &VAR_3, 1)) != -1)
  VAR_2 += (VAR_3 >> VAR_1->i_sb->s_blocksize_bits);

 FUNC_2(VAR_6.bh);
 FUNC_4(&FUNC_1(VAR_0)->s_alloc_mutex);

 return VAR_2;
}
