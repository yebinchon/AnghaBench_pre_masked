
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {unsigned int hr_block_bytes; unsigned int hr_block_bits; scalar_t__ hr_bdev; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct o2hb_region*,char const*,unsigned long*,unsigned int*) ;
 struct o2hb_region* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1,
          const char *VAR_2,
          size_t VAR_3)
{
 struct o2hb_region *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;
 unsigned long VAR_6;
 unsigned int VAR_7;

 if (VAR_4->hr_bdev)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4, VAR_2, &VAR_6,
           &VAR_7);
 if (VAR_5)
  return VAR_5;

 VAR_4->hr_block_bytes = (unsigned int)VAR_6;
 VAR_4->hr_block_bits = VAR_7;

 return VAR_3;
}
