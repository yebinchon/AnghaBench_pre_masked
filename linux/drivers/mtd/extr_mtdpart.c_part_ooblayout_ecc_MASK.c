
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_part {int parent; } ;
struct mtd_oob_region {int dummy; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (int ,int,struct mtd_oob_region*) ;
 struct mtd_part* FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, int VAR_1,
         struct mtd_oob_region *VAR_2)
{
 struct mtd_part *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3->parent, VAR_1, VAR_2);
}
