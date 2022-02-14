
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int rxchainmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ath_hw *VAR_2)
{
 int VAR_3 = VAR_2->rxchainmask;

 if ((VAR_3 == 0x5) || (VAR_3 == 0x3)) {
  FUNC_0(VAR_2, VAR_1, VAR_3);
  FUNC_0(VAR_2, VAR_0, VAR_3);
 }
}
