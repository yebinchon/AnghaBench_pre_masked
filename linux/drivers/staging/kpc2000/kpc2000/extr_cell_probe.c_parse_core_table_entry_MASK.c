
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct core_table_entry {int type; } ;


 int FUNC_0 (struct core_table_entry*,int const) ;

__attribute__((used)) static
void FUNC_1(struct core_table_entry *VAR_0, const u64 VAR_1, const u8 VAR_2)
{
 switch (VAR_2) {
 case 0:
  FUNC_0(VAR_0, VAR_1);
  break;
 default:
  VAR_0->type = 0;
  break;
 }
}
