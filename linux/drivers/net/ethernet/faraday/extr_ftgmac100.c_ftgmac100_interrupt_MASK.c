
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_fifo_errors; int rx_fifo_errors; int rx_over_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct ftgmac100 {int need_mac_restart; int napi; scalar_t__ base; int reset_task; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 struct ftgmac100* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
 struct net_device *VAR_10 = VAR_9;
 struct ftgmac100 *VAR_11 = FUNC_4(VAR_10);
 unsigned int VAR_12, VAR_13 = VAR_1;


 VAR_12 = FUNC_0(VAR_11->base + VAR_6);
 FUNC_1(VAR_12, VAR_11->base + VAR_6);
 if (FUNC_7(VAR_12 & VAR_1)) {


  if (VAR_12 & VAR_2)
   VAR_10->stats.rx_over_errors++;


  if (VAR_12 & VAR_3)
   VAR_10->stats.rx_fifo_errors++;


  if (VAR_12 & VAR_4)
   VAR_10->stats.tx_fifo_errors++;


  if (VAR_12 & VAR_0) {
   if (FUNC_3())
    FUNC_5(VAR_10,
        "AHB bus error ! Resetting chip.\n");
   FUNC_1(0, VAR_11->base + VAR_5);
   FUNC_6(&VAR_11->reset_task);
   return VAR_7;
  }




  VAR_11->need_mac_restart = 1;


  VAR_13 &= ~VAR_12;
 }


 FUNC_1(VAR_13, VAR_11->base + VAR_5);


 FUNC_2(&VAR_11->napi);

 return VAR_7;
}
