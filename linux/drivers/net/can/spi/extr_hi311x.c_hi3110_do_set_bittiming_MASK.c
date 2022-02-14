
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct net_device {int dummy; } ;
struct can_bittiming {int sjw; int brp; int phase_seg1; int prop_seg; int phase_seg2; } ;
struct TYPE_2__ {int ctrlmode; struct can_bittiming bittiming; } ;
struct hi3110_priv {TYPE_1__ can; struct spi_device* spi; } ;


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
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct spi_device*,int ) ;
 int FUNC_2 (struct spi_device*,int ,int) ;
 struct hi3110_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_11)
{
 struct hi3110_priv *VAR_12 = FUNC_3(VAR_11);
 struct can_bittiming *VAR_13 = &VAR_12->can.bittiming;
 struct spi_device *VAR_14 = VAR_12->spi;

 FUNC_2(VAR_14, VAR_9,
       ((VAR_13->sjw - 1) << VAR_2) |
       ((VAR_13->brp - 1) << VAR_1));

 FUNC_2(VAR_14, VAR_10,
       (VAR_12->can.ctrlmode &
        VAR_0 ?
        VAR_4 : VAR_3) |
       ((VAR_13->phase_seg1 + VAR_13->prop_seg - 1)
        << VAR_5) |
       ((VAR_13->phase_seg2 - 1) << VAR_6));

 FUNC_0(&VAR_14->dev, "BT: 0x%02x 0x%02x\n",
  FUNC_1(VAR_14, VAR_7),
  FUNC_1(VAR_14, VAR_8));

 return 0;
}
