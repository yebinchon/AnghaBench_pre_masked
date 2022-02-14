
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int driver_data; int subdevice; int subvendor; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 unsigned int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(int VAR_3)
{
 unsigned int VAR_4,VAR_5;

 if (!VAR_3)
  FUNC_1("saa7134: <rant>\n"
   "saa7134:  Congratulations!  Your TV card vendor saved a few\n"
   "saa7134:  cents for a eeprom, thus your pci board has no\n"
   "saa7134:  subsystem ID and I can't identify it automatically\n"
   "saa7134: </rant>\n"
   "saa7134: I feel better now.  Ok, here are the good news:\n"
   "saa7134: You can use the card=<nr> insmod option to specify\n"
   "saa7134: which board do you have.  The list:\n");
 else
  FUNC_1("saa7134: Board is currently unknown. You might try to use the card=<nr>\n"
   "saa7134: insmod option to specify which board do you have, but this is\n"
   "saa7134: somewhat risky, as might damage your card. It is better to ask\n"
   "saa7134: for support at linux-media@vger.kernel.org.\n"
   "saa7134: The supported cards are:\n");

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_1("saa7134:   card=%d -> %-40.40s",
         VAR_4,VAR_1[VAR_4].name);
  for (VAR_5 = 0; VAR_2[VAR_5].driver_data; VAR_5++) {
   if (VAR_2[VAR_5].driver_data != VAR_4)
    continue;
   FUNC_0(" %04x:%04x",
          VAR_2[VAR_5].subvendor,
          VAR_2[VAR_5].subdevice);
  }
  FUNC_0("\n");
 }
}
