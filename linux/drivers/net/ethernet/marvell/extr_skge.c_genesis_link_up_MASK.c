
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct skge_port {int port; scalar_t__ flow_status; scalar_t__ duplex; struct skge_hw* hw; } ;
struct skge_hw {scalar_t__ phy_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct skge_port*) ;
 int FUNC_2 (struct skge_hw*,int ,int ) ;
 int FUNC_3 (struct skge_hw*,int,int ) ;
 int FUNC_4 (struct skge_hw*,int,int ,int) ;
 int FUNC_5 (struct skge_hw*,int,int ) ;
 int FUNC_6 (struct skge_hw*,int,int ) ;
 int FUNC_7 (struct skge_hw*,int,int ,int) ;
 int FUNC_8 (struct skge_hw*,int,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct skge_port *VAR_24)
{
 struct skge_hw *VAR_25 = VAR_24->hw;
 int VAR_26 = VAR_24->port;
 u16 VAR_27, VAR_28;
 u32 VAR_29;

 VAR_27 = FUNC_5(VAR_25, VAR_26, VAR_17);





 if (VAR_24->flow_status == VAR_2 ||
     VAR_24->flow_status == VAR_1)

  VAR_27 |= VAR_21;
 else

  VAR_27 &= ~VAR_21;

 FUNC_7(VAR_25, VAR_26, VAR_17, VAR_27);

 VAR_29 = FUNC_6(VAR_25, VAR_26, VAR_22);
 if (VAR_24->flow_status == VAR_3 ||
     VAR_24->flow_status == VAR_1) {
  FUNC_7(VAR_25, VAR_26, VAR_16, 0xffff);

  VAR_29 |= VAR_23;
  FUNC_2(VAR_25, FUNC_0(VAR_26, VAR_10), VAR_5);
 } else {





  VAR_29 &= ~VAR_23;

  FUNC_2(VAR_25, FUNC_0(VAR_26, VAR_10), VAR_4);
 }

 FUNC_8(VAR_25, VAR_26, VAR_22, VAR_29);


 VAR_28 = FUNC_5(VAR_25, VAR_26, VAR_13);
 VAR_28 &= ~VAR_15;
 FUNC_7(VAR_25, VAR_26, VAR_13, VAR_28);

 FUNC_5(VAR_25, VAR_26, VAR_14);


 VAR_27 = FUNC_5(VAR_25, VAR_26, VAR_17);
 if (VAR_25->phy_type != VAR_12 && VAR_24->duplex == VAR_0)
  VAR_27 |= VAR_20;





 if (VAR_25->phy_type == VAR_11) {
  FUNC_4(VAR_25, VAR_26, VAR_6,
        FUNC_3(VAR_25, VAR_26, VAR_6)
        & ~VAR_8);
  FUNC_4(VAR_25, VAR_26, VAR_7, VAR_9);
 }


 FUNC_7(VAR_25, VAR_26, VAR_17,
   VAR_27 | VAR_18 | VAR_19);
 FUNC_1(VAR_24);
}
