
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct dmfe_board_info {int HPNA_command; int HPNA_timer; int chip_id; int phy_addr; int ioaddr; } ;


 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_2(struct dmfe_board_info * VAR_0)
{
 uint VAR_1;


 VAR_1 = FUNC_0(VAR_0->ioaddr, VAR_0->phy_addr, 17, VAR_0->chip_id) & 0x60;
 switch(VAR_1) {
 case 0x00: VAR_1 = 0x0a00;break;
 case 0x20: VAR_1 = 0x0900;break;
 case 0x40: VAR_1 = 0x0600;break;
 case 0x60: VAR_1 = 0x0500;break;
 }


 if ( VAR_1 != (VAR_0->HPNA_command & 0x0f00) ) {
  FUNC_1(VAR_0->ioaddr, VAR_0->phy_addr, 16, VAR_0->HPNA_command,
          VAR_0->chip_id);
  VAR_0->HPNA_timer=8;
 } else
  VAR_0->HPNA_timer=600;
}
