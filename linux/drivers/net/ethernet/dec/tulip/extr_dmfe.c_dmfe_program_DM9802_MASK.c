
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

__attribute__((used)) static void FUNC_2(struct dmfe_board_info * VAR_2)
{
 uint VAR_3;

 if ( !VAR_1 ) VAR_1 = VAR_0;
 FUNC_1(VAR_2->ioaddr, VAR_2->phy_addr, 16, VAR_2->HPNA_command, VAR_2->chip_id);
 VAR_3 = FUNC_0(VAR_2->ioaddr, VAR_2->phy_addr, 25, VAR_2->chip_id);
 VAR_3 = ( VAR_3 & 0xff00) + VAR_1;
 FUNC_1(VAR_2->ioaddr, VAR_2->phy_addr, 25, VAR_3, VAR_2->chip_id);
}
