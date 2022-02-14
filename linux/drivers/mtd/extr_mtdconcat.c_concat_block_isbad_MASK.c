
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {scalar_t__ size; } ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; } ;
typedef scalar_t__ loff_t ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct mtd_info*,scalar_t__) ;
 int FUNC_2 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_0, loff_t VAR_1)
{
 struct mtd_concat *VAR_2 = FUNC_0(VAR_0);
 int VAR_3, VAR_4 = 0;

 if (!FUNC_2(VAR_2->subdev[0]))
  return VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_subdev; VAR_3++) {
  struct mtd_info *VAR_5 = VAR_2->subdev[VAR_3];

  if (VAR_1 >= VAR_5->size) {
   VAR_1 -= VAR_5->size;
   continue;
  }

  VAR_4 = FUNC_1(VAR_5, VAR_1);
  break;
 }

 return VAR_4;
}
