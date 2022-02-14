
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct mtd_info {scalar_t__ size; } ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; } ;
typedef scalar_t__ loff_t ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 int VAR_0 ;
 int FUNC_1 (struct mtd_info*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct mtd_info*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_1, loff_t VAR_2, uint64_t VAR_3,
    bool VAR_4)
{
 struct mtd_concat *VAR_5 = FUNC_0(VAR_1);
 int VAR_6, VAR_7 = -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_subdev; VAR_6++) {
  struct mtd_info *VAR_8 = VAR_5->subdev[VAR_6];
  uint64_t VAR_9;

  if (VAR_2 >= VAR_8->size) {
   VAR_9 = 0;
   VAR_2 -= VAR_8->size;
   continue;
  }
  if (VAR_2 + VAR_3 > VAR_8->size)
   VAR_9 = VAR_8->size - VAR_2;
  else
   VAR_9 = VAR_3;

  if (VAR_4)
   VAR_7 = FUNC_1(VAR_8, VAR_2, VAR_9);
  else
   VAR_7 = FUNC_2(VAR_8, VAR_2, VAR_9);
  if (VAR_7)
   break;

  VAR_3 -= VAR_9;
  if (VAR_3 == 0)
   break;

  VAR_7 = -VAR_0;
  VAR_2 = 0;
 }

 return VAR_7;
}
