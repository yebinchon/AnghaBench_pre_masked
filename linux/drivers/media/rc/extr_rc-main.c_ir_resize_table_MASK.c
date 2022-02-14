
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_map_table {int dummy; } ;
struct rc_map {unsigned int alloc; int size; int len; struct rc_map_table* scan; } ;
struct rc_dev {int dev; } ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (struct rc_map_table*) ;
 struct rc_map_table* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (struct rc_map_table*,struct rc_map_table*,int) ;

__attribute__((used)) static int FUNC_4(struct rc_dev *VAR_3, struct rc_map *VAR_4,
      gfp_t VAR_5)
{
 unsigned int VAR_6 = VAR_4->alloc;
 unsigned int VAR_7 = VAR_6;
 struct rc_map_table *VAR_8 = VAR_4->scan;
 struct rc_map_table *VAR_9;

 if (VAR_4->size == VAR_4->len) {

  if (VAR_4->alloc >= VAR_1)
   return -VAR_0;

  VAR_7 *= 2;
  FUNC_0(&VAR_3->dev, "Growing table to %u bytes\n", VAR_7);
 }

 if ((VAR_4->len * 3 < VAR_4->size) && (VAR_6 > VAR_2)) {

  VAR_7 /= 2;
  FUNC_0(&VAR_3->dev, "Shrinking table to %u bytes\n", VAR_7);
 }

 if (VAR_7 == VAR_6)
  return 0;

 VAR_9 = FUNC_2(VAR_7, VAR_5);
 if (!VAR_9)
  return -VAR_0;

 FUNC_3(VAR_9, VAR_4->scan, VAR_4->len * sizeof(struct rc_map_table));
 VAR_4->scan = VAR_9;
 VAR_4->alloc = VAR_7;
 VAR_4->size = VAR_4->alloc / sizeof(struct rc_map_table);
 FUNC_1(VAR_8);
 return 0;
}
