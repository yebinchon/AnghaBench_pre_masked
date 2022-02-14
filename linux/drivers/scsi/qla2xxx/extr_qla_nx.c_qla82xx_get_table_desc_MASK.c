
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int u8 ;
typedef int u32 ;
struct qla82xx_uri_table_desc {int entry_size; int findex; int num_entries; } ;
typedef size_t __le32 ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static struct qla82xx_uri_table_desc *
FUNC_1(const u8 *VAR_0, int VAR_1)
{
 uint32_t VAR_2;
 struct qla82xx_uri_table_desc *VAR_3 =
  (struct qla82xx_uri_table_desc *)&VAR_0[0];
 __le32 VAR_4;
 __le32 VAR_5;
 __le32 VAR_6 = FUNC_0(VAR_3->num_entries);

 for (VAR_2 = 0; VAR_2 < VAR_6; VAR_2++) {
  VAR_4 = FUNC_0(VAR_3->findex) +
      (VAR_2 * FUNC_0(VAR_3->entry_size));
  VAR_5 = FUNC_0(*((u32 *)&VAR_0[VAR_4] + 8));

  if (VAR_5 == VAR_1)
   return (struct qla82xx_uri_table_desc *)&VAR_0[VAR_4];
 }

 return ((void*)0);
}
