
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {int dummy; } ;
struct ubi_eba_table {struct ubi_eba_table* entries; int pnum; } ;


 int VAR_0 ;
 struct ubi_eba_table* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ubi_eba_table*) ;
 struct ubi_eba_table* FUNC_2 (int,int,int ) ;
 struct ubi_eba_table* FUNC_3 (int,int ) ;

struct ubi_eba_table *FUNC_4(struct ubi_volume *VAR_3,
        int VAR_4)
{
 struct ubi_eba_table *VAR_5;
 int VAR_6 = -VAR_0;
 int VAR_7;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->entries = FUNC_2(VAR_4, sizeof(*VAR_5->entries),
         VAR_1);
 if (!VAR_5->entries)
  goto err;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  VAR_5->entries[VAR_7].pnum = VAR_2;

 return VAR_5;

err:
 FUNC_1(VAR_5->entries);
 FUNC_1(VAR_5);

 return FUNC_0(VAR_6);
}
