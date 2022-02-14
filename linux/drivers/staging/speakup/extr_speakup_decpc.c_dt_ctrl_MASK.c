
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {scalar_t__ port_tts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(u_int VAR_4)
{
 int VAR_5 = 10;

 if (!FUNC_2(VAR_2))
  return -1;
 FUNC_3(0, VAR_3.port_tts + 2);
 FUNC_3(0, VAR_3.port_tts + 3);
 FUNC_0();
 FUNC_1(VAR_0 | VAR_4);
 FUNC_3(0, VAR_3.port_tts + 6);
 while (FUNC_0() & VAR_2) {
  FUNC_4(20);
  if (--VAR_5 == 0)
   break;
 }
 FUNC_1(VAR_1);
 return 0;
}
