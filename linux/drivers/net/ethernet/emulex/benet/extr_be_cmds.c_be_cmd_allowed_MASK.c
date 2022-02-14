
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct be_adapter {int cmd_privileges; } ;
struct TYPE_3__ {scalar_t__ opcode; scalar_t__ subsystem; int priv_mask; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct be_adapter *VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 int VAR_5 = FUNC_0(VAR_0);
 u32 VAR_6 = VAR_1->cmd_privileges;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  if (VAR_2 == VAR_0[VAR_4].opcode &&
      VAR_3 == VAR_0[VAR_4].subsystem)
   if (!(VAR_6 & VAR_0[VAR_4].priv_mask))
    return 0;

 return 1;
}
