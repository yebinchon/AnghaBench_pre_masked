
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uli_phy_ops {int (* read ) (struct uli526x_board_info*,int ,int) ;int (* write ) (struct uli526x_board_info*,int ,int,int) ;} ;
struct uli526x_board_info {int media_mode; int PHY_reg4; int phy_addr; struct uli_phy_ops phy; } ;






 int VAR_0 ;
 int FUNC_0 (struct uli526x_board_info*,int ,int) ;
 int FUNC_1 (struct uli526x_board_info*,int ,int,int) ;
 int FUNC_2 (struct uli526x_board_info*,int ,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct uli526x_board_info *VAR_1)
{
 struct uli_phy_ops *VAR_2 = &VAR_1->phy;
 u16 VAR_3;


 VAR_3 = VAR_2->read(VAR_1, VAR_1->phy_addr, 4) & ~0x01e0;

 if (VAR_1->media_mode & VAR_0) {

  VAR_3 |= VAR_1->PHY_reg4;
 } else {

  switch(VAR_1->media_mode) {
  case 128: VAR_3 |= 0x20; break;
  case 129: VAR_3 |= 0x40; break;
  case 130: VAR_3 |= 0x80; break;
  case 131: VAR_3 |= 0x100; break;
  }

 }


 if ( !(VAR_3 & 0x01e0)) {
  VAR_3|=VAR_1->PHY_reg4;
  VAR_1->media_mode|=VAR_0;
 }
 VAR_2->write(VAR_1, VAR_1->phy_addr, 4, VAR_3);


 VAR_2->write(VAR_1, VAR_1->phy_addr, 0, 0x1200);
 FUNC_3(50);
}
