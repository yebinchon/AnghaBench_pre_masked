
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {int credits; int echo_credits; int oplock_credits; int echoes; int oplocks; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct TCP_Server_Info *VAR_1)
{
 VAR_1->credits += VAR_1->echo_credits + VAR_1->oplock_credits;
 VAR_1->oplock_credits = VAR_1->echo_credits = 0;
 switch (VAR_1->credits) {
 case 0:
  return 0;
 case 1:
  VAR_1->echoes = 0;
  VAR_1->oplocks = 0;
  break;
 case 2:
  VAR_1->echoes = 1;
  VAR_1->oplocks = 0;
  VAR_1->echo_credits = 1;
  break;
 default:
  VAR_1->echoes = 1;
  if (VAR_0) {
   VAR_1->oplocks = 1;
   VAR_1->oplock_credits = 1;
  } else
   VAR_1->oplocks = 0;

  VAR_1->echo_credits = 1;
 }
 VAR_1->credits -= VAR_1->echo_credits + VAR_1->oplock_credits;
 return VAR_1->credits + VAR_1->echo_credits + VAR_1->oplock_credits;
}
