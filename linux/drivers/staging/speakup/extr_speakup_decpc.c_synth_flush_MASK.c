
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spk_synth {int dummy; } ;
struct TYPE_2__ {scalar_t__ port_tts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,scalar_t__) ;
 TYPE_1__ VAR_8 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct spk_synth *VAR_9)
{
 int VAR_10 = 10;

 if (VAR_7)
  return;
 VAR_7 = 4;
 VAR_6 = 0;
 while (FUNC_0(VAR_0)) {
  if (--VAR_10 == 0)
   break;
  FUNC_4(50);
 }
 for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {
  if (FUNC_2(VAR_2))
   break;
  FUNC_4(50);
 }
 FUNC_3(VAR_1, VAR_8.port_tts + 4);
 FUNC_3(0, VAR_8.port_tts + 4);
 FUNC_4(100);
 for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {
  if (!(FUNC_1() & VAR_4))
   break;
  FUNC_4(50);
 }
 VAR_5 = FUNC_1() & VAR_3;
 VAR_5 ^= VAR_3;
 VAR_7 = 0;
}
