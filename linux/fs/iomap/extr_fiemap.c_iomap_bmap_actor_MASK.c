
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap {scalar_t__ type; int offset; int addr; } ;
struct inode {int i_blkbits; } ;
typedef int sector_t ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static loff_t
FUNC_1(struct inode *VAR_2, loff_t VAR_3, loff_t VAR_4,
  void *VAR_5, struct iomap *VAR_6)
{
 sector_t *VAR_7 = VAR_5, VAR_8;

 if (VAR_6->type == VAR_1) {
  VAR_8 = (VAR_3 - VAR_6->offset + VAR_6->addr) >> VAR_2->i_blkbits;
  if (VAR_8 > VAR_0)
   FUNC_0(1, "would truncate bmap result\n");
  else
   *VAR_7 = VAR_8;
 }
 return 0;
}
