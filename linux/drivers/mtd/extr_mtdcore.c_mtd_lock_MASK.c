
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct mtd_info {int (* _lock ) (struct mtd_info*,scalar_t__,scalar_t__) ;scalar_t__ size; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,scalar_t__,scalar_t__) ;

int FUNC_1(struct mtd_info *VAR_2, loff_t VAR_3, uint64_t VAR_4)
{
 if (!VAR_2->_lock)
  return -VAR_1;
 if (VAR_3 < 0 || VAR_3 >= VAR_2->size || VAR_4 > VAR_2->size - VAR_3)
  return -VAR_0;
 if (!VAR_4)
  return 0;
 return VAR_2->_lock(VAR_2, VAR_3, VAR_4);
}
