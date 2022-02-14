
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int se_cmd_flags; int alua_nonop_delay; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;

int FUNC_2(
 struct se_cmd *VAR_1)
{
 if (!(VAR_1->se_cmd_flags & VAR_0))
  return 0;
 if (FUNC_0())
  return 0;




 if (!VAR_1->alua_nonop_delay)
  return 0;




 FUNC_1(VAR_1->alua_nonop_delay);
 return 0;
}
