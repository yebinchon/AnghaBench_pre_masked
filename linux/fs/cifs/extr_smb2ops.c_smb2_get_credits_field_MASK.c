
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {int echo_credits; int oplock_credits; int credits; } ;





__attribute__((used)) static int *
FUNC_0(struct TCP_Server_Info *VAR_0, const int VAR_1)
{
 switch (VAR_1) {
 case 129:
  return &VAR_0->echo_credits;
 case 128:
  return &VAR_0->oplock_credits;
 default:
  return &VAR_0->credits;
 }
}
