
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {char* nodename; } ;


 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,size_t,char*,char*) ;

__attribute__((used)) static int
FUNC_2(uint8_t *VAR_0, size_t VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1, "%s", FUNC_0()->nodename) > 0)
  return 0;
 return -1;
}
