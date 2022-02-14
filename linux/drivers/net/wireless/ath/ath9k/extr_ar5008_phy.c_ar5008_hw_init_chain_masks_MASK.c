
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int macVersion; } ;
struct ath_hw {int rxchainmask; int txchainmask; TYPE_1__ hw_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_5 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*,int ,int ) ;
 int FUNC_5 (struct ath_hw*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = VAR_6->rxchainmask;
 VAR_8 = VAR_6->txchainmask;


 switch (VAR_7) {
 case 0x5:
  FUNC_4(VAR_6, VAR_0,
       VAR_3);

 case 0x3:
  if (VAR_6->hw_version.macVersion == VAR_5) {
   FUNC_5(VAR_6, VAR_2, 0x7);
   FUNC_5(VAR_6, VAR_1, 0x7);
   break;
  }

 case 0x1:
 case 0x2:
 case 0x7:
  FUNC_1(VAR_6);
  FUNC_5(VAR_6, VAR_2, VAR_7);
  FUNC_5(VAR_6, VAR_1, VAR_7);
  break;
 default:
  FUNC_1(VAR_6);
  break;
 }

 FUNC_5(VAR_6, VAR_4, VAR_8);

 FUNC_2(VAR_6);

 if (VAR_8 == 0x5) {
  FUNC_4(VAR_6, VAR_0,
       VAR_3);
 }
 if (FUNC_0(VAR_6))
  FUNC_5(VAR_6, VAR_0,
     FUNC_3(VAR_6, VAR_0) | 0x00000001);
}
