
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct altera_tse_private {unsigned int rx_fifo_depth; unsigned int tx_fifo_depth; int device; int mac_dev; TYPE_1__* dev; } ;
struct TYPE_2__ {unsigned int mtu; int dev_addr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned int,int ,int ) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_3 (struct altera_tse_private*) ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct altera_tse_private*,int ) ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int VAR_36 ;

__attribute__((used)) static int FUNC_8(struct altera_tse_private *VAR_37)
{
 unsigned int VAR_38 = 0;
 u32 VAR_39;


 FUNC_1(VAR_37->rx_fifo_depth - VAR_4,
  VAR_37->mac_dev, FUNC_5(VAR_29));

 FUNC_1(VAR_5, VAR_37->mac_dev,
  FUNC_5(VAR_30));

 FUNC_1(VAR_1, VAR_37->mac_dev,
  FUNC_5(VAR_26));

 FUNC_1(VAR_2, VAR_37->mac_dev,
  FUNC_5(VAR_27));


 FUNC_1(VAR_37->tx_fifo_depth - VAR_11,
  VAR_37->mac_dev, FUNC_5(VAR_35));

 FUNC_1(VAR_12, VAR_37->mac_dev,
  FUNC_5(VAR_36));

 FUNC_1(VAR_6, VAR_37->mac_dev,
  FUNC_5(VAR_31));

 FUNC_1(VAR_7, VAR_37->mac_dev,
  FUNC_5(VAR_32));


 FUNC_7(VAR_37, VAR_37->dev->dev_addr);


 VAR_39 = VAR_14 + VAR_37->dev->mtu + VAR_13;
 FUNC_1(VAR_39, VAR_37->mac_dev, FUNC_5(VAR_39));

 FUNC_1(VAR_10, VAR_37->mac_dev,
  FUNC_5(VAR_34));




 FUNC_6(VAR_37->mac_dev, FUNC_5(VAR_28),
      VAR_3);

 FUNC_4(VAR_37->mac_dev, FUNC_5(VAR_33),
        VAR_9 |
        VAR_8);


 VAR_38 = FUNC_0(VAR_37->mac_dev, FUNC_5(VAR_24));
 VAR_38 &= ~VAR_20;
 VAR_38 &= ~VAR_16;
 VAR_38 |= VAR_22;


 VAR_38 |= VAR_15;
 VAR_38 &= ~VAR_23;
 VAR_38 &= ~VAR_21;


 VAR_38 &= ~VAR_19;
 VAR_38 &= ~VAR_18;
 VAR_38 &= ~VAR_17;

 FUNC_1(VAR_38, VAR_37->mac_dev, FUNC_5(VAR_24));

 FUNC_1(VAR_0, VAR_37->mac_dev,
  FUNC_5(VAR_25));

 if (FUNC_3(VAR_37))
  FUNC_2(VAR_37->device,
   "MAC post-initialization: CMD_CONFIG = 0x%08x\n", VAR_38);

 return 0;
}
