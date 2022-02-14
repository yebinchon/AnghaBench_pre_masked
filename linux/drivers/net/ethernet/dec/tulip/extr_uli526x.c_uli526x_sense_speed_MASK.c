
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct uli_phy_ops {int (* read ) (struct uli526x_board_info*,int ,int) ;} ;
struct uli526x_board_info {void* op_mode; int phy_addr; struct uli_phy_ops phy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct uli526x_board_info*,int ,int) ;
 int FUNC_2 (struct uli526x_board_info*,int ,int) ;
 int FUNC_3 (struct uli526x_board_info*,int ,int) ;

__attribute__((used)) static u8 FUNC_4(struct uli526x_board_info * VAR_4)
{
 struct uli_phy_ops *VAR_5 = &VAR_4->phy;
 u8 VAR_6 = 0;
 u16 VAR_7;

 VAR_7 = VAR_5->read(VAR_4, VAR_4->phy_addr, 1);
 VAR_7 = VAR_5->read(VAR_4, VAR_4->phy_addr, 1);

 if ( (VAR_7 & 0x24) == 0x24 ) {

  VAR_7 = ((VAR_5->read(VAR_4, VAR_4->phy_addr, 5) & 0x01e0)<<7);
  if(VAR_7&0x8000)
   VAR_7 = 0x8000;
  else if(VAR_7&0x4000)
   VAR_7 = 0x4000;
  else if(VAR_7&0x2000)
   VAR_7 = 0x2000;
  else
   VAR_7 = 0x1000;

  switch (VAR_7) {
  case 0x1000: VAR_4->op_mode = VAR_3; break;
  case 0x2000: VAR_4->op_mode = VAR_2; break;
  case 0x4000: VAR_4->op_mode = VAR_1; break;
  case 0x8000: VAR_4->op_mode = VAR_0; break;
  default: VAR_4->op_mode = VAR_3; VAR_6 = 1; break;
  }
 } else {
  VAR_4->op_mode = VAR_3;
  FUNC_0(0, "Link Failed :", VAR_7);
  VAR_6 = 1;
 }

 return VAR_6;
}
