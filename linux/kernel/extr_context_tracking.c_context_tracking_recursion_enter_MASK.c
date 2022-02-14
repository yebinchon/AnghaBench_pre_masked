
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int recursion; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static bool FUNC_3(void)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0.recursion);
 if (VAR_1 == 1)
  return 1;

 FUNC_0((VAR_1 < 1), "Invalid context tracking recursion value %d\n", VAR_1);
 FUNC_1(VAR_0.recursion);

 return 0;
}
