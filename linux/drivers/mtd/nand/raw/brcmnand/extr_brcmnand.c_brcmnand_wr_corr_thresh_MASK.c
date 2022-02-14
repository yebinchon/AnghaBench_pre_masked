
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcmnand_host {int cs; struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {int nand_version; } ;
typedef enum brcmnand_reg { ____Placeholder_brcmnand_reg } brcmnand_reg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmnand_controller*,int,unsigned int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct brcmnand_host *VAR_2, u8 VAR_3)
{
 struct brcmnand_controller *VAR_4 = VAR_2->ctrl;
 unsigned int VAR_5 = 0, VAR_6;
 enum brcmnand_reg VAR_7 = VAR_0;
 int VAR_8 = VAR_2->cs;

 if (VAR_4->nand_version == 0x0702)
  VAR_6 = 7;
 else if (VAR_4->nand_version >= 0x0600)
  VAR_6 = 6;
 else if (VAR_4->nand_version >= 0x0500)
  VAR_6 = 5;
 else
  VAR_6 = 4;

 if (VAR_4->nand_version >= 0x0702) {
  if (VAR_8 >= 4)
   VAR_7 = VAR_1;
  VAR_5 = (VAR_8 % 4) * VAR_6;
 } else if (VAR_4->nand_version >= 0x0600) {
  if (VAR_8 >= 5)
   VAR_7 = VAR_1;
  VAR_5 = (VAR_8 % 5) * VAR_6;
 }
 FUNC_0(VAR_4, VAR_7, (VAR_6 - 1) << VAR_5, VAR_5, VAR_3);
}
