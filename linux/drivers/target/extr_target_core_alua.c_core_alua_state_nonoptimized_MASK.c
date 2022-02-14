
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int alua_nonop_delay; int se_cmd_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(
 struct se_cmd *VAR_1,
 unsigned char *VAR_2,
 int VAR_3)
{





 VAR_1->se_cmd_flags |= VAR_0;
 VAR_1->alua_nonop_delay = VAR_3;
}
