
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext2_reserve_window {scalar_t__ _rsv_start; scalar_t__ _rsv_end; } ;
typedef scalar_t__ ext2_grpblk_t ;
typedef scalar_t__ ext2_fsblk_t ;


 scalar_t__ FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*,unsigned int) ;

__attribute__((used)) static int
FUNC_2(struct ext2_reserve_window *VAR_0, ext2_grpblk_t VAR_1,
   unsigned int VAR_2, struct super_block * VAR_3)
{
 ext2_fsblk_t VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 VAR_5 = VAR_4 + FUNC_0(VAR_3) - 1;

 if ((VAR_0->_rsv_start > VAR_5) ||
     (VAR_0->_rsv_end < VAR_4))
  return 0;
 if ((VAR_1 >= 0) && ((VAR_1 + VAR_4 < VAR_0->_rsv_start)
  || (VAR_1 + VAR_4 > VAR_0->_rsv_end)))
  return 0;
 return 1;
}
