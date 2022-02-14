
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int (* _block_markbad ) (struct mtd_info*,scalar_t__) ;scalar_t__ size; int flags; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtd_info*,scalar_t__) ;

int FUNC_1(struct mtd_info *VAR_4, loff_t VAR_5)
{
 if (!VAR_4->_block_markbad)
  return -VAR_1;
 if (VAR_5 < 0 || VAR_5 >= VAR_4->size)
  return -VAR_0;
 if (!(VAR_4->flags & VAR_3))
  return -VAR_2;
 return VAR_4->_block_markbad(VAR_4, VAR_5);
}
