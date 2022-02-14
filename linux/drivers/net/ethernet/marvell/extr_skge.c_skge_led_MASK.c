
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {int port; int speed; struct skge_hw* hw; } ;
struct skge_hw {int phy_lock; int phy_type; } ;
typedef enum led_mode { ____Placeholder_led_mode } led_mode ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_7 (int,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_8 (struct skge_hw*,int,int ,int) ;
 scalar_t__ FUNC_9 (struct skge_hw*) ;
 int FUNC_10 (struct skge_hw*,int ,int) ;
 int FUNC_11 (struct skge_hw*,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct skge_hw*,int,int ,int ) ;

__attribute__((used)) static void FUNC_15(struct skge_port *VAR_26, enum led_mode VAR_27)
{
 struct skge_hw *VAR_28 = VAR_26->hw;
 int VAR_29 = VAR_26->port;

 FUNC_12(&VAR_28->phy_lock);
 if (FUNC_9(VAR_28)) {
  switch (VAR_27) {
  case 130:
   if (VAR_28->phy_type == VAR_21)
    FUNC_14(VAR_28, VAR_29, VAR_10, VAR_11);
   else {
    FUNC_10(VAR_28, FUNC_7(VAR_29, VAR_25), 0);
    FUNC_11(VAR_28, FUNC_7(VAR_29, VAR_23), VAR_2);
   }
   FUNC_11(VAR_28, FUNC_7(VAR_29, VAR_7), VAR_5);
   FUNC_10(VAR_28, FUNC_7(VAR_29, VAR_20), 0);
   FUNC_11(VAR_28, FUNC_7(VAR_29, VAR_18), VAR_2);
   break;

  case 129:
   FUNC_11(VAR_28, FUNC_7(VAR_29, VAR_7), VAR_6);
   FUNC_11(VAR_28, FUNC_7(VAR_29, VAR_7), VAR_4);

   FUNC_11(VAR_28, FUNC_7(VAR_29, VAR_18), VAR_1);
   FUNC_11(VAR_28, FUNC_7(VAR_29, VAR_23), VAR_1);

   break;

  case 128:
   FUNC_11(VAR_28, FUNC_7(VAR_29, VAR_19), VAR_3);
   FUNC_10(VAR_28, FUNC_7(VAR_29, VAR_20), 100);
   FUNC_11(VAR_28, FUNC_7(VAR_29, VAR_18), VAR_1);

   if (VAR_28->phy_type == VAR_21)
    FUNC_14(VAR_28, VAR_29, VAR_10, VAR_12);
   else {
    FUNC_11(VAR_28, FUNC_7(VAR_29, VAR_24), VAR_3);
    FUNC_10(VAR_28, FUNC_7(VAR_29, VAR_25), 100);
    FUNC_11(VAR_28, FUNC_7(VAR_29, VAR_23), VAR_1);
   }

  }
 } else {
  switch (VAR_27) {
  case 130:
   FUNC_8(VAR_28, VAR_29, VAR_13, 0);
   FUNC_8(VAR_28, VAR_29, VAR_14,
         FUNC_4(VAR_8) |
         FUNC_1(VAR_8) |
         FUNC_2(VAR_8) |
         FUNC_3(VAR_8) |
         FUNC_5(VAR_8));
   break;
  case 129:
   FUNC_8(VAR_28, VAR_29, VAR_13,
         FUNC_6(VAR_17) |
         FUNC_0(VAR_0) |
         VAR_16 |
         VAR_15);

   FUNC_8(VAR_28, VAR_29, VAR_14,
         FUNC_5(VAR_8) |
         (VAR_26->speed == VAR_22 ?
          FUNC_2(VAR_9) : 0));
   break;
  case 128:
   FUNC_8(VAR_28, VAR_29, VAR_13, 0);
   FUNC_8(VAR_28, VAR_29, VAR_14,
         FUNC_4(VAR_9) |
         FUNC_1(VAR_9) |
         FUNC_2(VAR_9) |
         FUNC_3(VAR_9) |
         FUNC_5(VAR_9));
  }
 }
 FUNC_13(&VAR_28->phy_lock);
}
