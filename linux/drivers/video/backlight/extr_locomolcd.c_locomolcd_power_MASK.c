
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int comadj; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 TYPE_1__ VAR_1 ;

void FUNC_6(int VAR_2)
{
 int VAR_3 = VAR_1.comadj;
 unsigned long VAR_4;

 FUNC_1(VAR_4);

 if (!VAR_0) {
  FUNC_0(VAR_4);
  return;
 }


 if (VAR_3 == -1 && FUNC_4())
  VAR_3 = 128;
 if (VAR_3 == -1 && FUNC_5())
  VAR_3 = 118;

 if (VAR_2)
  FUNC_3(VAR_3);
 else
  FUNC_2(VAR_3);

 FUNC_0(VAR_4);
}
