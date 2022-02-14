
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ io_base; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_3(int VAR_2)
{
 unsigned int VAR_3;
 FUNC_0("card_present");

 if ((VAR_2<0) || (VAR_2 >= VAR_0))
  return 0;
 if (VAR_1[VAR_2].io_base == 0)
  return 0;


 VAR_3 = FUNC_1(VAR_2, 1);
 if ((VAR_3&12)==12) {
  FUNC_2("card_present 1");
  return 1;
 }

 FUNC_2("card_present 0");
 return 0;
}
