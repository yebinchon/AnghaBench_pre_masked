
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ port_tts; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned char FUNC_3(void)
{
 int VAR_5 = VAR_0;

 while (!(FUNC_0(VAR_4.port_tts + VAR_1) & VAR_2)) {
  if (--VAR_5 == 0) {
   FUNC_1("time out while waiting for input.\n");
   return 0xff;
  }
  FUNC_2(1);
 }
 return FUNC_0(VAR_4.port_tts + VAR_3);
}
