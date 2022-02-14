
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {scalar_t__ tcpStatus; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct TCP_Server_Info *VAR_1)
{
 if (VAR_1->tcpStatus == VAR_0)
  return 1;

 return 0;
}
