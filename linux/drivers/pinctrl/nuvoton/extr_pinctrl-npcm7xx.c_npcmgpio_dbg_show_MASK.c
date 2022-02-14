
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int base; int ngpio; } ;
struct npcm7xx_gpio {scalar_t__ base; TYPE_1__ gc; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 struct npcm7xx_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct seq_file*,char*,int,int,...) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_21, struct gpio_chip *VAR_22)
{
 struct npcm7xx_gpio *VAR_23 = FUNC_0(VAR_22);

 FUNC_2(VAR_21, "-- module %d [gpio%d - %d]\n",
     VAR_23->gc.base / VAR_23->gc.ngpio,
     VAR_23->gc.base,
     VAR_23->gc.base + VAR_23->gc.ngpio);
 FUNC_2(VAR_21, "DIN :%.8x DOUT:%.8x IE  :%.8x OE	 :%.8x\n",
     FUNC_1(VAR_23->base + VAR_1),
     FUNC_1(VAR_23->base + VAR_2),
     FUNC_1(VAR_23->base + VAR_7),
     FUNC_1(VAR_23->base + VAR_14));
 FUNC_2(VAR_21, "PU  :%.8x PD  :%.8x DB  :%.8x POL :%.8x\n",
     FUNC_1(VAR_23->base + VAR_19),
     FUNC_1(VAR_23->base + VAR_17),
     FUNC_1(VAR_23->base + VAR_0),
     FUNC_1(VAR_23->base + VAR_18));
 FUNC_2(VAR_21, "ETYP:%.8x EVBE:%.8x EVEN:%.8x EVST:%.8x\n",
     FUNC_1(VAR_23->base + VAR_6),
     FUNC_1(VAR_23->base + VAR_3),
     FUNC_1(VAR_23->base + VAR_4),
     FUNC_1(VAR_23->base + VAR_5));
 FUNC_2(VAR_21, "OTYP:%.8x OSRC:%.8x ODSC:%.8x\n",
     FUNC_1(VAR_23->base + VAR_16),
     FUNC_1(VAR_23->base + VAR_15),
     FUNC_1(VAR_23->base + VAR_13));
 FUNC_2(VAR_21, "OBL0:%.8x OBL1:%.8x OBL2:%.8x OBL3:%.8x\n",
     FUNC_1(VAR_23->base + VAR_9),
     FUNC_1(VAR_23->base + VAR_10),
     FUNC_1(VAR_23->base + VAR_11),
     FUNC_1(VAR_23->base + VAR_12));
 FUNC_2(VAR_21, "SLCK:%.8x MLCK:%.8x\n",
     FUNC_1(VAR_23->base + VAR_20),
     FUNC_1(VAR_23->base + VAR_8));
}
