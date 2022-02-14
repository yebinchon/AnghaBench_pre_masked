
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iov_iter {int dummy; } ;
struct inode {TYPE_1__* i_sb; int i_blkbits; } ;
struct block_device {int dummy; } ;
typedef unsigned long loff_t ;
struct TYPE_2__ {struct block_device* s_bdev; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct block_device*) ;
 unsigned int FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct iov_iter*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct iov_iter *VAR_2,
      loff_t VAR_3)
{
 unsigned VAR_4 = FUNC_0(VAR_1->i_blkbits);
 unsigned VAR_5 = VAR_4;
 unsigned VAR_6 = (1 << VAR_5) - 1;
 unsigned long VAR_7 = VAR_3 | FUNC_3(VAR_2);
 struct block_device *VAR_8 = VAR_1->i_sb->s_bdev;

 if (VAR_7 & VAR_6) {
  if (VAR_8)
   VAR_5 = FUNC_2(FUNC_1(VAR_8));
  VAR_6 = (1 << VAR_5) - 1;
  if (VAR_7 & VAR_6)
   return -VAR_0;
  return 1;
 }
 return 0;
}
