
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block_device {int bd_block_size; TYPE_1__* bd_inode; } ;
struct TYPE_2__ {int i_blkbits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct block_device*) ;
 int FUNC_4 (struct block_device*) ;

int FUNC_5(struct block_device *VAR_2, int VAR_3)
{

 if (VAR_3 > VAR_1 || VAR_3 < 512 || !FUNC_2(VAR_3))
  return -VAR_0;


 if (VAR_3 < FUNC_0(VAR_2))
  return -VAR_0;


 if (VAR_2->bd_block_size != VAR_3) {
  FUNC_4(VAR_2);
  VAR_2->bd_block_size = VAR_3;
  VAR_2->bd_inode->i_blkbits = FUNC_1(VAR_3);
  FUNC_3(VAR_2);
 }
 return 0;
}
