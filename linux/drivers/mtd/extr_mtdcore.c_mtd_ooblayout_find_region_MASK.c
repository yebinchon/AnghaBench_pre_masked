
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_oob_region {int length; int offset; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (struct mtd_oob_region*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_0, int VAR_1,
    int *VAR_2, struct mtd_oob_region *VAR_3,
    int (*VAR_4)(struct mtd_info *,
         int VAR_5,
         struct mtd_oob_region *VAR_6))
{
 int VAR_7 = 0, VAR_8, VAR_9 = 0;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 while (1) {
  VAR_8 = VAR_4(VAR_0, VAR_9, VAR_3);
  if (VAR_8)
   return VAR_8;

  if (VAR_7 + VAR_3->length > VAR_1)
   break;

  VAR_7 += VAR_3->length;
  VAR_9++;
 }





 VAR_3->offset += VAR_1 - VAR_7;
 VAR_3->length -= VAR_1 - VAR_7;
 *VAR_2 = VAR_9;

 return 0;
}
