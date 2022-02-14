
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath9k_hw_capabilities {int hw_caps; } ;
struct ath_hw {int WARegVal; struct ath9k_hw_capabilities caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_10)
{
 struct ath9k_hw_capabilities *VAR_11 = &VAR_10->caps;

 FUNC_2(VAR_10, VAR_5, VAR_6);

 if (!(VAR_11->hw_caps & VAR_9)) {

  FUNC_3(VAR_10, VAR_2,
     VAR_4);
 } else {
  if (FUNC_4(VAR_10))
   FUNC_1(VAR_10, VAR_1,
        VAR_0);




  FUNC_1(VAR_10, VAR_2, VAR_3);

  if (FUNC_4(VAR_10))
   FUNC_5(30);
 }


 if (FUNC_0(VAR_10))
  FUNC_3(VAR_10, VAR_7, VAR_10->WARegVal & ~VAR_8);
}
