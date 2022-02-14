
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap {scalar_t__ offset; scalar_t__ length; int type; int flags; scalar_t__ addr; int bdev; } ;
struct inode {scalar_t__ i_blkbits; } ;
struct buffer_head {scalar_t__ b_blocknr; int b_bdev; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (int) ;

 int VAR_0 ;



 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;

__attribute__((used)) static void
FUNC_8(struct inode *VAR_1, sector_t VAR_2, struct buffer_head *VAR_3,
  struct iomap *VAR_4)
{
 loff_t VAR_5 = VAR_2 << VAR_1->i_blkbits;

 VAR_3->b_bdev = VAR_4->bdev;







 FUNC_0(VAR_5 >= VAR_4->offset + VAR_4->length);

 switch (VAR_4->type) {
 case 130:





  if (!FUNC_1(VAR_3) ||
      (VAR_5 >= FUNC_2(VAR_1)))
   FUNC_5(VAR_3);
  break;
 case 131:
  if (!FUNC_1(VAR_3) ||
      (VAR_5 >= FUNC_2(VAR_1)))
   FUNC_5(VAR_3);
  FUNC_7(VAR_3);
  FUNC_4(VAR_3);
  FUNC_3(VAR_3);
  break;
 case 128:





  FUNC_5(VAR_3);
  FUNC_6(VAR_3);

 case 129:
  if ((VAR_4->flags & VAR_0) ||
      VAR_5 >= FUNC_2(VAR_1))
   FUNC_5(VAR_3);
  VAR_3->b_blocknr = (VAR_4->addr + VAR_5 - VAR_4->offset) >>
    VAR_1->i_blkbits;
  FUNC_4(VAR_3);
  break;
 }
}
