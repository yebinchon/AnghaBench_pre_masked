
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct entry_header {int addr; } ;
typedef enum cmd_db_hw_type { ____Placeholder_cmd_db_hw_type } cmd_db_hw_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,struct entry_header const**,int *) ;
 int FUNC_1 (int ) ;

enum cmd_db_hw_type FUNC_2(const char *VAR_3)
{
 int VAR_4;
 const struct entry_header *VAR_5;
 u32 VAR_6;

 VAR_4 = FUNC_0(VAR_3, &VAR_5, ((void*)0));
 if (VAR_4 < 0)
  return VAR_0;

 VAR_6 = FUNC_1(VAR_5->addr);
 return (VAR_6 >> VAR_2) & VAR_1;
}
