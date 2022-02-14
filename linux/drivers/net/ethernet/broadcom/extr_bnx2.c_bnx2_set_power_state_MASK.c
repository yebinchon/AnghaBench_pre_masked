
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int pdev; int fw_last_msg; int wol; } ;
typedef int pci_power_t ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2*) ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct bnx2*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct bnx2*,int ,int) ;
 int VAR_12 ;


 int FUNC_4 (struct bnx2*) ;
 int FUNC_5 (struct bnx2*,int ) ;
 int FUNC_6 (struct bnx2*,int ,int) ;
 int FUNC_7 (int ,int const,int) ;
 int FUNC_8 (int ,int const) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct bnx2 *VAR_13, pci_power_t VAR_14)
{
 switch (VAR_14) {
 case 129: {
  u32 VAR_15;

  FUNC_7(VAR_13->pdev, 129, 0);
  FUNC_8(VAR_13->pdev, 129);

  VAR_15 = FUNC_2(VAR_13, VAR_6);
  VAR_15 |= VAR_9 | VAR_7;
  VAR_15 &= ~VAR_8;
  FUNC_3(VAR_13, VAR_6, VAR_15);

  VAR_15 = FUNC_2(VAR_13, VAR_10);
  VAR_15 &= ~VAR_11;
  FUNC_3(VAR_13, VAR_10, VAR_15);
  break;
 }
 case 128: {
  FUNC_4(VAR_13);
  FUNC_9(VAR_13->pdev, VAR_13->wol);
  if ((FUNC_1(VAR_13) == VAR_2) ||
      (FUNC_1(VAR_13) == VAR_3)) {

   if (VAR_13->wol)
    FUNC_8(VAR_13->pdev, 128);
   break;

  }
  if (!VAR_13->fw_last_msg && FUNC_0(VAR_13) == VAR_1) {
   u32 VAR_16;





   VAR_16 = FUNC_5(VAR_13, VAR_0);
   VAR_16 &= ~VAR_4;
   VAR_16 |= VAR_5;
   FUNC_6(VAR_13, VAR_0, VAR_16);
  }
  FUNC_8(VAR_13->pdev, 128);




  break;
 }
 default:
  return -VAR_12;
 }
 return 0;
}
