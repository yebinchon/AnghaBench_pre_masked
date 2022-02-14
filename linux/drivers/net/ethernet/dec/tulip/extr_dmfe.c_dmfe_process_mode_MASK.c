
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dmfe_board_info {int op_mode; int cr6_data; int media_mode; int chip_id; int phy_addr; int ioaddr; scalar_t__ chip_type; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct dmfe_board_info *VAR_2)
{
 u16 VAR_3;


 if (VAR_2->op_mode & 0x4)
  VAR_2->cr6_data |= VAR_0;
 else
  VAR_2->cr6_data &= ~VAR_0;


 if (VAR_2->op_mode & 0x10)
  VAR_2->cr6_data |= 0x40000;
 else
  VAR_2->cr6_data &= ~0x40000;

 FUNC_3(VAR_2->cr6_data, VAR_2->ioaddr);


 if ( !(VAR_2->media_mode & 0x18)) {

  VAR_3 = FUNC_0(VAR_2->ioaddr, VAR_2->phy_addr, 6, VAR_2->chip_id);
  if ( !(VAR_3 & 0x1) ) {

   VAR_3 = 0x0;
   switch(VAR_2->op_mode) {
   case 128: VAR_3 = 0x0; break;
   case 129: VAR_3 = 0x100; break;
   case 130: VAR_3 = 0x2000; break;
   case 131: VAR_3 = 0x2100; break;
   }
   FUNC_1(VAR_2->ioaddr,
           VAR_2->phy_addr, 0, VAR_3, VAR_2->chip_id);
          if ( VAR_2->chip_type && (VAR_2->chip_id == VAR_1) )
    FUNC_2(20);
   FUNC_1(VAR_2->ioaddr,
           VAR_2->phy_addr, 0, VAR_3, VAR_2->chip_id);
  }
 }
}
