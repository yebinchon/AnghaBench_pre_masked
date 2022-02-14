
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sb_blocklog; } ;
typedef TYPE_1__ xfs_sb_t ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int
FUNC_1(
 xfs_sb_t *VAR_4,
 uint64_t VAR_5)
{
 FUNC_0(VAR_2 >= VAR_4->sb_blocklog);
 FUNC_0(VAR_4->sb_blocklog >= VAR_0);


 if (VAR_5 >> (VAR_2 - VAR_4->sb_blocklog) > VAR_3)
  return -VAR_1;
 return 0;
}
