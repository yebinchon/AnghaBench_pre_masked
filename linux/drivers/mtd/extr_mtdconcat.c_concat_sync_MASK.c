
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; } ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_0)
{
 struct mtd_concat *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_subdev; VAR_2++) {
  struct mtd_info *VAR_3 = VAR_1->subdev[VAR_2];
  FUNC_1(VAR_3);
 }
}
