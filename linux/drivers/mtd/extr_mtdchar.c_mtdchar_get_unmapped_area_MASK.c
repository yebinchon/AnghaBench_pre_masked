
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {unsigned long size; } ;
struct mtd_file_info {struct mtd_info* mtd; } ;
struct file {struct mtd_file_info* private_data; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct mtd_info*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct file *VAR_4,
        unsigned long VAR_5,
        unsigned long VAR_6,
        unsigned long VAR_7,
        unsigned long VAR_8)
{
 struct mtd_file_info *VAR_9 = VAR_4->private_data;
 struct mtd_info *VAR_10 = VAR_9->mtd;
 unsigned long VAR_11;
 int VAR_12;

 if (VAR_5 != 0)
  return (unsigned long) -VAR_0;

 if (VAR_6 > VAR_10->size || VAR_7 >= (VAR_10->size >> VAR_3))
  return (unsigned long) -VAR_0;

 VAR_11 = VAR_7 << VAR_3;
 if (VAR_11 > VAR_10->size - VAR_6)
  return (unsigned long) -VAR_0;

 VAR_12 = FUNC_0(VAR_10, VAR_6, VAR_11, VAR_8);
 return VAR_12 == -VAR_2 ? -VAR_1 : VAR_12;
}
