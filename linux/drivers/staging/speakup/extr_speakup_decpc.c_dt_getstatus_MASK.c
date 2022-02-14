
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ port_tts; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_1(void)
{
 VAR_0 = FUNC_0(VAR_1.port_tts) |
   (FUNC_0(VAR_1.port_tts + 1) << 8);
 return VAR_0;
}
