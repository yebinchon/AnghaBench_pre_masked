
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct TYPE_2__ {int i_unwritten; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned short FUNC_2 (struct ext4_extent*) ;
 scalar_t__ FUNC_3 (struct ext4_extent*) ;
 scalar_t__ FUNC_4 (struct ext4_extent*) ;
 scalar_t__ FUNC_5 (struct inode*,int ) ;
 scalar_t__ FUNC_6 (int ) ;

int
FUNC_7(struct inode *VAR_3, struct ext4_extent *VAR_4,
    struct ext4_extent *VAR_5)
{
 unsigned short VAR_6, VAR_7;

 if (FUNC_3(VAR_4) != FUNC_3(VAR_5))
  return 0;

 VAR_6 = FUNC_2(VAR_4);
 VAR_7 = FUNC_2(VAR_5);

 if (FUNC_6(VAR_4->ee_block) + VAR_6 !=
   FUNC_6(VAR_5->ee_block))
  return 0;






 if (VAR_6 + VAR_7 > VAR_1)
  return 0;






 if (FUNC_3(VAR_4) &&
     (FUNC_5(VAR_3, VAR_0) ||
      FUNC_1(&FUNC_0(VAR_3)->i_unwritten) ||
      (VAR_6 + VAR_7 > VAR_2)))
  return 0;





 if (FUNC_4(VAR_4) + VAR_6 == FUNC_4(VAR_5))
  return 1;
 return 0;
}
