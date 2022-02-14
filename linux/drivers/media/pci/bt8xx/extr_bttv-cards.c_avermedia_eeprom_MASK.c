
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; } ;
struct bttv {int has_remote; int tuner_type; TYPE_1__ c; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int,int) ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_2(struct bttv *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8 = 0;

 VAR_5 = (VAR_1[0x41] & 0x7);
 VAR_6 = (VAR_1[0x41] & 0x18) >> 3;
 VAR_7 = (VAR_1[0x42] & 0xf0) >> 4;
 VAR_4->has_remote = (VAR_1[0x42] & 0x01);

 if (VAR_5 == 0 || VAR_5 == 2)
  if (VAR_7 <= 0x0a)
   VAR_8 = VAR_2[VAR_7];
 if (VAR_5 == 1)
  if (VAR_7 <= 9)
   VAR_8 = VAR_3[VAR_7];

 if (VAR_5 == 4)
  if (VAR_7 == 0x09)
   VAR_8 = VAR_0;

 FUNC_1("%d: Avermedia eeprom[0x%02x%02x]: tuner=",
  VAR_4->c.nr, VAR_1[0x41], VAR_1[0x42]);
 if (VAR_8) {
  VAR_4->tuner_type = VAR_8;
  FUNC_0("%d", VAR_8);
 } else
  FUNC_0("Unknown type");
 FUNC_0(" radio:%s remote control:%s\n",
        VAR_6 ? "yes" : "no",
        VAR_4->has_remote ? "yes" : "no");
}
