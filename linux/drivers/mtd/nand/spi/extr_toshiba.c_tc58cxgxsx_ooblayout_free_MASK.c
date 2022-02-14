
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
 if (VAR_2 > 0)
  return -VAR_0;


 VAR_3->offset = 2;
 VAR_3->length = (VAR_1->oobsize / 2) - 2;

 return 0;
}
