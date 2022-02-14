
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spk_synth {int long_name; scalar_t__ alive; } ;
struct TYPE_2__ {scalar_t__ port_tts; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int) ;

int FUNC_5(struct spk_synth *VAR_7)
{
 int VAR_8 = VAR_2;

 if ((VAR_7->alive) && (VAR_6 >= VAR_0)) {
  FUNC_1("%s: too many timeouts, deactivating speakup\n",
   VAR_7->long_name);
  VAR_7->alive = 0;




  FUNC_2();
  VAR_6 = 0;
  return 0;
 }
 while (FUNC_3()) {
  if (--VAR_8 == 0) {
   FUNC_1("%s: timed out (tx busy)\n",
    VAR_7->long_name);
   VAR_6++;
   return 0;
  }
  FUNC_4(1);
 }
 VAR_8 = VAR_1;
 while (!((FUNC_0(VAR_5.port_tts + VAR_3)) & VAR_4)) {

  if (--VAR_8 == 0) {
   VAR_6++;
   return 0;
  }
  FUNC_4(1);
 }
 VAR_6 = 0;
 return 1;
}
