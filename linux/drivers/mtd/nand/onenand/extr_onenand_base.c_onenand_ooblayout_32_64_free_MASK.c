
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_oob_region {int offset; int length; } ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mtd_info *VAR_1, int VAR_2,
     struct mtd_oob_region *VAR_3)
{
 int VAR_4 = (VAR_1->oobsize / 32) * 2;

 if (VAR_2 >= VAR_4)
  return -VAR_0;

 if (VAR_2 & 1) {
  VAR_3->offset = ((VAR_2 - 1) * 16) + 14;
  VAR_3->length = 2;
 } else {
  VAR_3->offset = (VAR_2 * 16) + 2;
  VAR_3->length = 3;
 }

 return 0;
}
