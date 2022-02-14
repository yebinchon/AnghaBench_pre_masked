
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct dmfe_board_info {int HPNA_command; int chip_id; int phy_addr; int ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_2(struct dmfe_board_info * VAR_2, int VAR_3)
{
 uint VAR_4, VAR_5;

 if ( !VAR_1 ) VAR_1 = VAR_0;
 switch(VAR_3) {
 case 0xb900:
  VAR_2->HPNA_command |= 0x1000;
  VAR_5 = FUNC_0(VAR_2->ioaddr, VAR_2->phy_addr, 24, VAR_2->chip_id);
  VAR_5 = ( (VAR_5 + VAR_1) & 0xff) | 0xf000;
  VAR_4 = FUNC_0(VAR_2->ioaddr, VAR_2->phy_addr, 17, VAR_2->chip_id);
  break;
 case 0xb901:
  VAR_5 = FUNC_0(VAR_2->ioaddr, VAR_2->phy_addr, 25, VAR_2->chip_id);
  VAR_5 = (VAR_5 & 0xff00) + VAR_1;
  VAR_4 = FUNC_0(VAR_2->ioaddr, VAR_2->phy_addr, 17, VAR_2->chip_id);
  VAR_4 = (VAR_4 & 0xfff0) + VAR_1 + 3;
  break;
 case 0xb902:
 case 0xb903:
 default:
  VAR_2->HPNA_command |= 0x1000;
  VAR_5 = FUNC_0(VAR_2->ioaddr, VAR_2->phy_addr, 25, VAR_2->chip_id);
  VAR_5 = (VAR_5 & 0xff00) + VAR_1 - 5;
  VAR_4 = FUNC_0(VAR_2->ioaddr, VAR_2->phy_addr, 17, VAR_2->chip_id);
  VAR_4 = (VAR_4 & 0xfff0) + VAR_1;
  break;
 }
 FUNC_1(VAR_2->ioaddr, VAR_2->phy_addr, 16, VAR_2->HPNA_command, VAR_2->chip_id);
 FUNC_1(VAR_2->ioaddr, VAR_2->phy_addr, 17, VAR_4, VAR_2->chip_id);
 FUNC_1(VAR_2->ioaddr, VAR_2->phy_addr, 25, VAR_5, VAR_2->chip_id);
}
