
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {scalar_t__ size; int (* _block_isreserved ) (struct mtd_info*,scalar_t__) ;} ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,scalar_t__) ;

int FUNC_1(struct mtd_info *VAR_1, loff_t VAR_2)
{
 if (VAR_2 < 0 || VAR_2 >= VAR_1->size)
  return -VAR_0;
 if (!VAR_1->_block_isreserved)
  return 0;
 return VAR_1->_block_isreserved(VAR_1, VAR_2);
}
