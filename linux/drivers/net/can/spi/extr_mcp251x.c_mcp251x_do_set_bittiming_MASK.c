
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct net_device {int dummy; } ;
struct can_bittiming {int sjw; int brp; int phase_seg1; int prop_seg; scalar_t__ phase_seg2; } ;
struct TYPE_2__ {int ctrlmode; struct can_bittiming bittiming; } ;
struct mcp251x_priv {TYPE_1__ can; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (struct spi_device*,int ) ;
 int FUNC_2 (struct spi_device*,int ,int ,scalar_t__) ;
 int FUNC_3 (struct spi_device*,int ,int) ;
 struct mcp251x_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_9)
{
 struct mcp251x_priv *VAR_10 = FUNC_4(VAR_9);
 struct can_bittiming *VAR_11 = &VAR_10->can.bittiming;
 struct spi_device *VAR_12 = VAR_10->spi;

 FUNC_3(VAR_12, VAR_1, ((VAR_11->sjw - 1) << VAR_2) |
     (VAR_11->brp - 1));
 FUNC_3(VAR_12, VAR_3, VAR_4 |
     (VAR_10->can.ctrlmode & VAR_0 ?
      VAR_6 : 0) |
     ((VAR_11->phase_seg1 - 1) << VAR_5) |
     (VAR_11->prop_seg - 1));
 FUNC_2(VAR_12, VAR_7, VAR_8,
      (VAR_11->phase_seg2 - 1));
 FUNC_0(&VAR_12->dev, "CNF: 0x%02x 0x%02x 0x%02x\n",
  FUNC_1(VAR_12, VAR_1),
  FUNC_1(VAR_12, VAR_3),
  FUNC_1(VAR_12, VAR_7));

 return 0;
}
