
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; } ;
struct bttv {TYPE_1__ c; int tuner_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (char*,int ,int *) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void FUNC_2(struct bttv *VAR_4)
{
 if( FUNC_1(&(VAR_3[0x1e]),"Temic 4066 FY5",14) ==0) {
  VAR_4->tuner_type=VAR_2;
  FUNC_0("%d: Modtec: Tuner autodetected by eeprom: %s\n",
   VAR_4->c.nr, &VAR_3[0x1e]);
 } else if (FUNC_1(&(VAR_3[0x1e]),"Alps TSBB5",10) ==0) {
  VAR_4->tuner_type=VAR_0;
  FUNC_0("%d: Modtec: Tuner autodetected by eeprom: %s\n",
   VAR_4->c.nr, &VAR_3[0x1e]);
 } else if (FUNC_1(&(VAR_3[0x1e]),"Philips FM1246",14) ==0) {
  VAR_4->tuner_type=VAR_1;
  FUNC_0("%d: Modtec: Tuner autodetected by eeprom: %s\n",
   VAR_4->c.nr, &VAR_3[0x1e]);
 } else {
  FUNC_0("%d: Modtec: Unknown TunerString: %s\n",
   VAR_4->c.nr, &VAR_3[0x1e]);
 }
}
