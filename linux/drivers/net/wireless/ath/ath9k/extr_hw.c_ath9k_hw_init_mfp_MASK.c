
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int sw_mgmt_crypto_tx; int sw_mgmt_crypto_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int ,int ) ;
 int FUNC_5 (struct ath_hw*,int ,int ,int) ;
 int FUNC_6 (struct ath_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_5)
{

 if (FUNC_3(VAR_5)) {


  FUNC_5(VAR_5, VAR_0, VAR_1,
         0xc7ff);
  if (FUNC_2(VAR_5) || FUNC_0(VAR_5))
   VAR_5->sw_mgmt_crypto_tx = 1;
  else
   VAR_5->sw_mgmt_crypto_tx = 0;
  VAR_5->sw_mgmt_crypto_rx = 0;
 } else if (FUNC_1(VAR_5)) {

  FUNC_4(VAR_5, VAR_2,
       VAR_3);
  FUNC_6(VAR_5, VAR_2,
       VAR_4);
  VAR_5->sw_mgmt_crypto_tx = 1;
  VAR_5->sw_mgmt_crypto_rx = 1;
 } else {
  VAR_5->sw_mgmt_crypto_tx = 1;
  VAR_5->sw_mgmt_crypto_rx = 1;
 }
}
