
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int b_blocknr; int b_bdev; } ;
typedef int sector_t ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_0, sector_t VAR_1,
  struct buffer_head *VAR_2, int VAR_3)
{
 VAR_2->b_bdev = FUNC_0(VAR_0);
 VAR_2->b_blocknr = VAR_1;
 FUNC_1(VAR_2);
 return 0;
}
