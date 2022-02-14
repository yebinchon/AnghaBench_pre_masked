
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct mtd_partition {struct mtd_partition* name; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {scalar_t__ size; scalar_t__ erasesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mtd_info*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct mtd_info*,scalar_t__) ;
 int FUNC_2 (struct mtd_info*,scalar_t__,struct mtd_partition*) ;
 int FUNC_3 (struct mtd_info*,scalar_t__,struct mtd_partition*) ;
 int FUNC_4 (struct mtd_partition*) ;
 struct mtd_partition* FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_2,
    const struct mtd_partition **VAR_3,
    struct mtd_part_parser_data *VAR_4)
{
 struct mtd_partition *VAR_5;
 u_int VAR_6, VAR_7;
 int VAR_8 = 0;
 int VAR_9;


 for (VAR_9 = VAR_6 = VAR_7 = 0; VAR_6 < VAR_2->size; VAR_6 += VAR_2->erasesize) {
  if (FUNC_0(VAR_2, VAR_6)) {
   VAR_7 += sizeof(struct mtd_partition);
   VAR_9 += 1;
  }
  if (FUNC_1(VAR_2, VAR_6)) {
   VAR_7 += sizeof(struct mtd_partition);
   VAR_9 += 1;
  }
 }

 if (!VAR_9)
  return 0;

 VAR_5 = FUNC_5(VAR_7, VAR_1);
 if (!VAR_5)
  return -VAR_0;




 for (VAR_9 = VAR_6 = 0; VAR_6 < VAR_2->size; VAR_6 += VAR_2->erasesize) {
  if (FUNC_0(VAR_2, VAR_6)) {
   VAR_8 = FUNC_2(VAR_2, VAR_6, &VAR_5[VAR_9]);
   if (VAR_8)
    goto out_free_parts;
   VAR_9++;
  }
  if (FUNC_1(VAR_2, VAR_6)) {
   VAR_8 = FUNC_3(VAR_2, VAR_6, &VAR_5[VAR_9]);
   if (VAR_8)
    goto out_free_parts;
   VAR_9++;
  }
 }

 *VAR_3 = VAR_5;
 return VAR_9;

out_free_parts:
 while (VAR_9 >= 0) {
  FUNC_4(VAR_5[VAR_9].name);
  VAR_9--;
 }
 FUNC_4(VAR_5);
 *VAR_3 = ((void*)0);
 return VAR_8;
}
