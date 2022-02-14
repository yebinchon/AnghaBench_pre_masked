
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ravb_private {scalar_t__ chip_id; scalar_t__ rx_over_errors; scalar_t__ rx_fifo_errors; TYPE_1__* stats; int lock; struct napi_struct* napi; } ;
struct TYPE_4__ {scalar_t__ rx_over_errors; scalar_t__ rx_fifo_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct napi_struct {struct net_device* dev; } ;
struct TYPE_3__ {scalar_t__ rx_over_errors; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct napi_struct*) ;
 struct ravb_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,int ,int,int) ;
 int FUNC_5 (struct net_device*,int ) ;
 scalar_t__ FUNC_6 (struct net_device*,int*,int) ;
 int FUNC_7 (struct net_device*,int,int) ;
 int FUNC_8 (struct net_device*,int,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct napi_struct *VAR_11, int VAR_12)
{
 struct net_device *VAR_13 = VAR_11->dev;
 struct ravb_private *VAR_14 = FUNC_2(VAR_13);
 unsigned long VAR_15;
 int VAR_16 = VAR_11 - VAR_14->napi;
 int VAR_17 = FUNC_0(VAR_16);
 int VAR_18 = VAR_12;
 u32 VAR_19, VAR_20;

 for (;;) {
  VAR_20 = FUNC_5(VAR_13, VAR_9);
  VAR_19 = FUNC_5(VAR_13, VAR_5);
  if (!((VAR_19 & VAR_17) || (VAR_20 & VAR_17)))
   break;


  if (VAR_19 & VAR_17) {

   FUNC_8(VAR_13, ~(VAR_17 | VAR_6), VAR_5);
   if (FUNC_6(VAR_13, &VAR_18, VAR_16))
    goto out;
  }

  if (VAR_20 & VAR_17) {
   FUNC_9(&VAR_14->lock, VAR_15);

   FUNC_8(VAR_13, ~(VAR_17 | VAR_10), VAR_9);
   FUNC_7(VAR_13, VAR_16, 1);
   FUNC_3(VAR_13, VAR_16);
   FUNC_10(&VAR_14->lock, VAR_15);
  }
 }

 FUNC_1(VAR_11);


 FUNC_9(&VAR_14->lock, VAR_15);
 if (VAR_14->chip_id == VAR_2) {
  FUNC_4(VAR_13, VAR_3, VAR_17, VAR_17);
  FUNC_4(VAR_13, VAR_7, VAR_17, VAR_17);
 } else {
  FUNC_8(VAR_13, VAR_17, VAR_4);
  FUNC_8(VAR_13, VAR_17, VAR_8);
 }
 FUNC_10(&VAR_14->lock, VAR_15);


 VAR_14->rx_over_errors = VAR_14->stats[VAR_0].rx_over_errors;
 VAR_14->rx_over_errors += VAR_14->stats[VAR_1].rx_over_errors;
 if (VAR_14->rx_over_errors != VAR_13->stats.rx_over_errors)
  VAR_13->stats.rx_over_errors = VAR_14->rx_over_errors;
 if (VAR_14->rx_fifo_errors != VAR_13->stats.rx_fifo_errors)
  VAR_13->stats.rx_fifo_errors = VAR_14->rx_fifo_errors;
out:
 return VAR_12 - VAR_18;
}
