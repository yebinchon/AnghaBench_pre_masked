
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tveeprom {int model; int has_radio; int tuner_type; } ;
struct TYPE_3__ {size_t type; int nr; } ;
struct bttv {int radio_uses_msp_demodulator; TYPE_1__ c; int has_radio; int tuner_type; } ;
struct TYPE_4__ {int name; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int,...) ;
 int FUNC_1 (struct tveeprom*,int ) ;

__attribute__((used)) static void FUNC_2(struct bttv *VAR_3)
{
 struct tveeprom VAR_4;

 FUNC_1(&VAR_4, VAR_2);
 VAR_3->tuner_type = VAR_4.tuner_type;
 VAR_3->has_radio = VAR_4.has_radio;

 FUNC_0("%d: Hauppauge eeprom indicates model#%d\n",
  VAR_3->c.nr, VAR_4.model);





 if(VAR_4.model == 64900) {
  FUNC_0("%d: Switching board type from %s to %s\n",
   VAR_3->c.nr,
   VAR_1[VAR_3->c.type].name,
   VAR_1[VAR_0].name);
  VAR_3->c.type = VAR_0;
 }


 if (VAR_4.model == 61334)
  VAR_3->radio_uses_msp_demodulator = 1;
}
