
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct nb8800_priv {int rx_itr_irq; int rx_itr_poll; int rx_dma_config; int pause_aneg; int pause_rx; int pause_tx; int clk; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_4 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct nb8800_priv*,int ) ;
 int FUNC_8 (struct nb8800_priv*,int ,int) ;
 int FUNC_9 (struct nb8800_priv*,int ,int) ;
 struct nb8800_priv* FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_30)
{
 struct nb8800_priv *VAR_31 = FUNC_10(VAR_30);
 u32 VAR_32;

 VAR_32 = VAR_29 | VAR_28 | VAR_27;
 FUNC_8(VAR_31, VAR_12, VAR_32);


 FUNC_8(VAR_31, VAR_13, 5);

 VAR_32 = VAR_22 | VAR_20;
 FUNC_8(VAR_31, VAR_8, VAR_32);


 FUNC_8(VAR_31, VAR_6, 4);


 FUNC_8(VAR_31, VAR_15, 12);






 FUNC_8(VAR_31, VAR_2, 0);


 FUNC_8(VAR_31, VAR_3, 255);


 FUNC_8(VAR_31, VAR_11, 64);



 VAR_32 = FUNC_7(VAR_31, VAR_10);
 VAR_32 &= VAR_25;
 VAR_32 |= VAR_24;
 VAR_32 |= VAR_26;
 VAR_32 |= VAR_23;
 VAR_32 |= FUNC_4(7);
 VAR_32 |= FUNC_3(2);
 FUNC_9(VAR_31, VAR_10, VAR_32);


 VAR_32 = FUNC_5(VAR_31->clk) / 100;
 FUNC_9(VAR_31, VAR_14, VAR_32);



 VAR_32 = FUNC_7(VAR_31, VAR_7);
 VAR_32 &= VAR_18;
 VAR_32 |= VAR_17;
 VAR_32 |= VAR_19;
 VAR_32 |= VAR_16;
 VAR_32 |= FUNC_2(7);
 VAR_32 |= FUNC_1(2);
 FUNC_9(VAR_31, VAR_7, VAR_32);




 VAR_31->rx_itr_irq = FUNC_5(VAR_31->clk) / 20000;




 VAR_31->rx_itr_poll = FUNC_5(VAR_31->clk) / 100;

 FUNC_9(VAR_31, VAR_9, VAR_31->rx_itr_irq);

 VAR_31->rx_dma_config = VAR_21 | FUNC_0(2) | VAR_0 | VAR_1;




 VAR_32 = 100000 / 512;
 FUNC_8(VAR_31, VAR_4, VAR_32 >> 8);
 FUNC_8(VAR_31, VAR_5, VAR_32 & 0xff);


 VAR_31->pause_aneg = 1;
 VAR_31->pause_rx = 1;
 VAR_31->pause_tx = 1;

 FUNC_6(VAR_30, 0);

 return 0;
}
