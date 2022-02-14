
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sky2_port {unsigned int port; int tx_prod; int phy_lock; struct sky2_hw* hw; } ;
struct sky2_hw {scalar_t__ chip_id; scalar_t__ chip_rev; scalar_t__* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (unsigned int,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct sky2_hw*,unsigned int,int ) ;
 int FUNC_4 (struct sky2_hw*,unsigned int,int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct sky2_hw*,unsigned int) ;
 int FUNC_7 (struct sky2_hw*,int ) ;
 int FUNC_8 (struct sky2_hw*,int ) ;
 int FUNC_9 (struct sky2_port*) ;
 int FUNC_10 (struct sky2_port*,int ) ;
 int FUNC_11 (struct sky2_hw*,unsigned int) ;
 int FUNC_12 (struct sky2_hw*,int ,int) ;
 int FUNC_13 (struct sky2_hw*,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int * VAR_20 ;

__attribute__((used)) static void FUNC_16(struct sky2_port *VAR_21)
{
 struct sky2_hw *VAR_22 = VAR_21->hw;
 unsigned VAR_23 = VAR_21->port;
 u16 VAR_24;


 FUNC_13(VAR_22, FUNC_2(VAR_23, VAR_2), VAR_3);


 FUNC_12(VAR_22, FUNC_0(VAR_20[VAR_23], VAR_11), VAR_0);
 FUNC_7(VAR_22, FUNC_0(VAR_20[VAR_23], VAR_11));

 FUNC_12(VAR_22, FUNC_1(VAR_20[VAR_23], VAR_12),
       VAR_14 | VAR_13);

 VAR_24 = FUNC_3(VAR_22, VAR_23, VAR_8);
 VAR_24 &= ~(VAR_7 | VAR_6);
 FUNC_4(VAR_22, VAR_23, VAR_8, VAR_24);

 FUNC_13(VAR_22, FUNC_2(VAR_23, VAR_10), VAR_9);


 if (!(VAR_22->chip_id == VAR_1 && VAR_22->chip_rev == 0 &&
       VAR_23 == 0 && VAR_22->dev[1] && FUNC_5(VAR_22->dev[1])))
  FUNC_13(VAR_22, FUNC_2(VAR_23, VAR_2), VAR_4);

 FUNC_13(VAR_22, FUNC_2(VAR_23, VAR_15), VAR_5);


 FUNC_12(VAR_22, VAR_18, 0);
 FUNC_12(VAR_22, VAR_19, 0);
 FUNC_12(VAR_22, VAR_16, 0);
 FUNC_8(VAR_22, VAR_17);

 FUNC_9(VAR_21);

 FUNC_14(&VAR_21->phy_lock);
 FUNC_6(VAR_22, VAR_23);
 FUNC_15(&VAR_21->phy_lock);

 FUNC_11(VAR_22, VAR_23);


 FUNC_10(VAR_21, VAR_21->tx_prod);
}
