
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rc_map_table {int dummy; } ;
struct rc_map {int alloc; int size; int * name; int scan; int rc_proto; } ;
struct rc_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 int * FUNC_3 (char const*,int ) ;
 int FUNC_4 (size_t) ;

__attribute__((used)) static int FUNC_5(struct rc_dev *VAR_2, struct rc_map *VAR_3,
      const char *VAR_4, u64 VAR_5, size_t VAR_6)
{
 VAR_3->name = FUNC_3(VAR_4, VAR_1);
 if (!VAR_3->name)
  return -VAR_0;
 VAR_3->rc_proto = VAR_5;
 VAR_3->alloc = FUNC_4(VAR_6 * sizeof(struct rc_map_table));
 VAR_3->size = VAR_3->alloc / sizeof(struct rc_map_table);
 VAR_3->scan = FUNC_2(VAR_3->alloc, VAR_1);
 if (!VAR_3->scan) {
  FUNC_1(VAR_3->name);
  VAR_3->name = ((void*)0);
  return -VAR_0;
 }

 FUNC_0(&VAR_2->dev, "Allocated space for %u keycode entries (%u bytes)\n",
  VAR_3->size, VAR_3->alloc);
 return 0;
}
