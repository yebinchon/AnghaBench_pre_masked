
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ port_tts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_5 = 0;

 if (FUNC_0() == 0xffff) {
  VAR_5 = -1;
  goto oops;
 }
 FUNC_1(VAR_0);
 if (!FUNC_2(VAR_1))
  VAR_5 = -2;
 else if (VAR_3 & 0x8000)
  return 0;
 else if (VAR_3 == 0x0dec)
  FUNC_3("dec_pc at 0x%x, software not loaded\n",
   VAR_4.port_tts);
 VAR_5 = -3;
oops: FUNC_4(VAR_4.port_tts, VAR_2);
 VAR_4.port_tts = 0;
 return VAR_5;
}
