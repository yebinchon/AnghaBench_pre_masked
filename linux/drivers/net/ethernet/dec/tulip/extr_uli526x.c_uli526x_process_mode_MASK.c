
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uli_phy_ops {int (* read ) (struct uli526x_board_info*,int ,int) ;int (* write ) (struct uli526x_board_info*,int ,int ,int) ;} ;
struct uli526x_board_info {int op_mode; int media_mode; int phy_addr; int ioaddr; int cr6_data; struct uli_phy_ops phy; } ;


 int VAR_0 ;




 int FUNC_0 (struct uli526x_board_info*,int ,int) ;
 int FUNC_1 (struct uli526x_board_info*,int ,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct uli526x_board_info *VAR_1)
{
 struct uli_phy_ops *VAR_2 = &VAR_1->phy;
 u16 VAR_3;


 if (VAR_1->op_mode & 0x4)
  VAR_1->cr6_data |= VAR_0;
 else
  VAR_1->cr6_data &= ~VAR_0;

 FUNC_2(VAR_1->cr6_data, VAR_1->ioaddr);


 if (!(VAR_1->media_mode & 0x8)) {

  VAR_3 = VAR_2->read(VAR_1, VAR_1->phy_addr, 6);
  if (!(VAR_3 & 0x1)) {

   VAR_3 = 0x0;
   switch(VAR_1->op_mode) {
   case 128: VAR_3 = 0x0; break;
   case 129: VAR_3 = 0x100; break;
   case 130: VAR_3 = 0x2000; break;
   case 131: VAR_3 = 0x2100; break;
   }
   VAR_2->write(VAR_1, VAR_1->phy_addr, 0, VAR_3);
  }
 }
}
