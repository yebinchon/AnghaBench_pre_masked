
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct spi_device {int dummy; } ;
struct TYPE_6__ {int tx_bytes; int tx_packets; int rx_errors; int rx_over_errors; } ;
struct net_device {TYPE_3__ stats; } ;
struct TYPE_4__ {int bus_off; int error_passive; int error_warning; } ;
struct TYPE_5__ {int state; scalar_t__ restart_ms; TYPE_1__ can_stats; } ;
struct mcp251x_priv {int force_quit; int tx_len; int mcp_lock; TYPE_2__ can; struct net_device* net; struct spi_device* spi; } ;
typedef int irqreturn_t ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


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

 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int,int) ;
 int FUNC_4 (struct spi_device*,int) ;
 int FUNC_5 (struct spi_device*) ;
 scalar_t__ FUNC_6 (struct spi_device*) ;
 int FUNC_7 (struct spi_device*,int ,int*,int*) ;
 int FUNC_8 (struct spi_device*,int ,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_26, void *VAR_27)
{
 struct mcp251x_priv *VAR_28 = VAR_27;
 struct spi_device *VAR_29 = VAR_28->spi;
 struct net_device *VAR_30 = VAR_28->net;

 FUNC_9(&VAR_28->mcp_lock);
 while (!VAR_28->force_quit) {
  enum can_state VAR_31;
  u8 VAR_32, VAR_33;
  u8 VAR_34 = 0;
  int VAR_35 = 0, VAR_36 = 0;

  FUNC_7(VAR_29, VAR_0, &VAR_32, &VAR_33);


  VAR_32 &= VAR_3 | VAR_6 | VAR_1;


  if (VAR_32 & VAR_4) {
   FUNC_4(VAR_29, 0);



   if (FUNC_6(VAR_29))
    FUNC_8(VAR_29, VAR_0,
         VAR_4, 0x00);
  }


  if (VAR_32 & VAR_5) {
   FUNC_4(VAR_29, 1);

   if (FUNC_6(VAR_29))
    VAR_34 |= VAR_5;
  }


  if (VAR_32 & (VAR_1 | VAR_6))
   VAR_34 |= VAR_32 & (VAR_1 | VAR_6);
  if (VAR_34)
   FUNC_8(VAR_29, VAR_0, VAR_34, 0x00);

  if (VAR_33 & (VAR_18 | VAR_19))
   FUNC_8(VAR_29, VAR_17, VAR_33, 0x00);


  if (VAR_33 & VAR_22) {
   VAR_31 = VAR_15;
   VAR_35 |= VAR_7;
  } else if (VAR_33 & VAR_23) {
   VAR_31 = VAR_16;
   VAR_35 |= VAR_8;
   VAR_36 |= VAR_12;
  } else if (VAR_33 & VAR_20) {
   VAR_31 = VAR_16;
   VAR_35 |= VAR_8;
   VAR_36 |= VAR_10;
  } else if (VAR_33 & VAR_24) {
   VAR_31 = 128;
   VAR_35 |= VAR_8;
   VAR_36 |= VAR_13;
  } else if (VAR_33 & VAR_21) {
   VAR_31 = 128;
   VAR_35 |= VAR_8;
   VAR_36 |= VAR_11;
  } else {
   VAR_31 = 129;
  }


  switch (VAR_28->can.state) {
  case 129:
   if (VAR_31 >= 128 &&
       VAR_31 <= VAR_15)
    VAR_28->can.can_stats.error_warning++;

  case 128:
   if (VAR_31 >= VAR_16 &&
       VAR_31 <= VAR_15)
    VAR_28->can.can_stats.error_passive++;
   break;
  default:
   break;
  }
  VAR_28->can.state = VAR_31;

  if (VAR_32 & VAR_2) {

   if (VAR_33 & (VAR_18 | VAR_19)) {
    if (VAR_33 & VAR_18) {
     VAR_30->stats.rx_over_errors++;
     VAR_30->stats.rx_errors++;
    }
    if (VAR_33 & VAR_19) {
     VAR_30->stats.rx_over_errors++;
     VAR_30->stats.rx_errors++;
    }
    VAR_35 |= VAR_8;
    VAR_36 |= VAR_9;
   }
   FUNC_3(VAR_30, VAR_35, VAR_36);
  }

  if (VAR_28->can.state == VAR_15) {
   if (VAR_28->can.restart_ms == 0) {
    VAR_28->force_quit = 1;
    VAR_28->can.can_stats.bus_off++;
    FUNC_0(VAR_30);
    FUNC_5(VAR_29);
    break;
   }
  }

  if (VAR_32 == 0)
   break;

  if (VAR_32 & VAR_6) {
   VAR_30->stats.tx_packets++;
   VAR_30->stats.tx_bytes += VAR_28->tx_len - 1;
   FUNC_2(VAR_30, VAR_14);
   if (VAR_28->tx_len) {
    FUNC_1(VAR_30, 0);
    VAR_28->tx_len = 0;
   }
   FUNC_11(VAR_30);
  }
 }
 FUNC_10(&VAR_28->mcp_lock);
 return VAR_25;
}
