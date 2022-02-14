
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct velocity_info {int mii_status; int mac_regs; int phy_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int FUNC_2 (int ) ;





 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct velocity_info *VAR_12, u32 VAR_13)
{
 u16 VAR_14;

 switch (FUNC_2(VAR_12->phy_id)) {
 case 132:
  FUNC_1((VAR_0 | VAR_1),
      VAR_3, VAR_12->mac_regs);
  if (VAR_12->mii_status & VAR_11)
   FUNC_1(VAR_10, VAR_6,
        VAR_12->mac_regs);
  else
   FUNC_0(VAR_10, VAR_6,
        VAR_12->mac_regs);
  FUNC_1(VAR_8, VAR_7, VAR_12->mac_regs);
  break;
 case 133:



  FUNC_0((VAR_0 | VAR_1), VAR_3, VAR_12->mac_regs);





  if (VAR_12->mii_status & VAR_11)
   FUNC_1(VAR_10, VAR_6, VAR_12->mac_regs);
  else
   FUNC_0(VAR_10, VAR_6, VAR_12->mac_regs);



  FUNC_1(VAR_8, VAR_7, VAR_12->mac_regs);
  break;
 case 129:
 case 128:



  FUNC_1((VAR_0 | VAR_1), VAR_3, VAR_12->mac_regs);





  if (VAR_12->mii_status & VAR_11)
   FUNC_1(VAR_10, VAR_6, VAR_12->mac_regs);
  else
   FUNC_0(VAR_10, VAR_6, VAR_12->mac_regs);
  break;

 case 131:
 case 130:



  FUNC_1(VAR_9, VAR_5, VAR_12->mac_regs);



  FUNC_1((VAR_0 | VAR_1), VAR_3, VAR_12->mac_regs);
  break;
 default:
  ;
 }
 FUNC_3(VAR_12->mac_regs, VAR_4, &VAR_14);
 if (VAR_14 & VAR_2) {
  VAR_14 &= ~VAR_2;
  FUNC_4(VAR_12->mac_regs, VAR_4, VAR_14);
 }
}
