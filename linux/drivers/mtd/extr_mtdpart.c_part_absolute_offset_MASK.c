
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mtd_part {scalar_t__ offset; struct mtd_info* parent; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (struct mtd_info*) ;
 struct mtd_part* FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static u64 FUNC_2(struct mtd_info *VAR_0)
{
 struct mtd_part *VAR_1 = FUNC_1(VAR_0);

 if (!FUNC_0(VAR_0))
  return 0;

 return FUNC_2(VAR_1->parent) + VAR_1->offset;
}
