
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; } ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0)
{
 struct mtd_concat *VAR_1 = FUNC_0(VAR_0);
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_subdev; VAR_2++) {
  struct mtd_info *VAR_4 = VAR_1->subdev[VAR_2];
  if ((VAR_3 = FUNC_1(VAR_4)) < 0)
   return VAR_3;
 }
 return VAR_3;
}
