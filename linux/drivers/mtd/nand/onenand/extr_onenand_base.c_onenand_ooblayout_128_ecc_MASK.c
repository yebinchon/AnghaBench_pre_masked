
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_oob_region {int offset; int length; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mtd_info *VAR_1, int VAR_2,
         struct mtd_oob_region *VAR_3)
{
 if (VAR_2 > 7)
  return -VAR_0;

 VAR_3->offset = (VAR_2 * 16) + 7;
 VAR_3->length = 9;

 return 0;
}
