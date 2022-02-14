
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_extent {int ee_start_hi; int ee_start_lo; } ;
typedef int ext4_fsblk_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct ext4_extent *VAR_0,
      ext4_fsblk_t VAR_1)
{
 VAR_0->ee_start_lo = FUNC_1((unsigned long) (VAR_1 & 0xffffffff));
 VAR_0->ee_start_hi = FUNC_0((unsigned long) ((VAR_1 >> 31) >> 1) &
          0xffff);
}
