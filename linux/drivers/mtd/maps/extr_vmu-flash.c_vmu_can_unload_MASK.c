
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {scalar_t__ usecount; } ;
struct memcard {int partitions; struct mtd_info* mtd; } ;
struct maple_device {int dummy; } ;


 struct memcard* FUNC_0 (struct maple_device*) ;

__attribute__((used)) static int FUNC_1(struct maple_device *VAR_0)
{
 struct memcard *VAR_1;
 int VAR_2;
 struct mtd_info *VAR_3;

 VAR_1 = FUNC_0(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_1->partitions; VAR_2++) {
  VAR_3 = &((VAR_1->mtd)[VAR_2]);
  if (VAR_3->usecount > 0)
   return 0;
 }
 return 1;
}
