
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct brcmnand_host {int last_cmd; int last_byte; int last_addr; struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {int* flash_cache; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct brcmnand_host*,int ,int ,int) ;
 int FUNC_1 (struct brcmnand_controller*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct nand_chip*,int,int *,int ,int) ;
 struct brcmnand_host* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct brcmnand_controller*,int) ;
 int VAR_9 ;

__attribute__((used)) static uint8_t FUNC_6(struct nand_chip *VAR_10)
{
 struct brcmnand_host *VAR_11 = FUNC_4(VAR_10);
 struct brcmnand_controller *VAR_12 = VAR_11->ctrl;
 uint8_t VAR_13 = 0;
 int VAR_14, VAR_15;

 switch (VAR_11->last_cmd) {
 case 131:
  if (VAR_11->last_byte < 4)
   VAR_13 = FUNC_1(VAR_12, VAR_0) >>
    (24 - (VAR_11->last_byte << 3));
  else if (VAR_11->last_byte < 8)
   VAR_13 = FUNC_1(VAR_12, VAR_1) >>
    (56 - (VAR_11->last_byte << 3));
  break;

 case 130:
  VAR_13 = FUNC_5(VAR_12, VAR_11->last_byte);
  break;

 case 128:
  VAR_13 = FUNC_1(VAR_12, VAR_2) &
     VAR_5;
  if (VAR_9)
   VAR_13 |= VAR_7;
  break;

 case 132:
 case 129:
  VAR_14 = VAR_11->last_addr + VAR_11->last_byte;
  VAR_15 = VAR_14 & (VAR_4 - 1);


  if (VAR_11->last_byte > 0 && VAR_15 == 0)
   FUNC_3(VAR_10, VAR_14, ((void*)0), 0, 0);

  VAR_13 = VAR_12->flash_cache[VAR_15];
  break;
 case 133:
  if (VAR_11->last_byte >= VAR_8) {
   VAR_13 = 0;
  } else {
   bool VAR_16 = VAR_11->last_byte ==
    VAR_8 - 1;
   FUNC_0(VAR_11, VAR_6, 0, VAR_16);
   VAR_13 = FUNC_1(VAR_12, VAR_3) & 0xff;
  }
 }

 FUNC_2(VAR_12->dev, "read byte = 0x%02x\n", VAR_13);
 VAR_11->last_byte++;

 return VAR_13;
}
