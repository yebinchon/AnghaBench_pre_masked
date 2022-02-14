
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int jfs_flag; unsigned long ext2_flag; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static long FUNC_0(unsigned long VAR_1, int VAR_2)
{
 int VAR_3=0;
 long VAR_4=0;

 while (VAR_0[VAR_3].jfs_flag) {
  if (VAR_2) {
   if (VAR_0[VAR_3].ext2_flag & VAR_1)
    VAR_4 |= VAR_0[VAR_3].jfs_flag;
  } else {
   if (VAR_0[VAR_3].jfs_flag & VAR_1)
    VAR_4 |= VAR_0[VAR_3].ext2_flag;
  }
  VAR_3++;
 }
 return VAR_4;
}
