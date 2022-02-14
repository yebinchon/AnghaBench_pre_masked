
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dropped; int fifo_errors; } ;
struct ave_private {int napi_tx; int napi_rx; scalar_t__ base; TYPE_1__ stats_rx; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct ave_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
 struct net_device *VAR_10 = (struct net_device *)VAR_9;
 struct ave_private *VAR_11 = FUNC_5(VAR_10);
 u32 VAR_12, VAR_13;

 VAR_12 = FUNC_0(VAR_10);


 VAR_13 = FUNC_6(VAR_11->base + VAR_0);


 if (VAR_13 & VAR_1)
  FUNC_7(VAR_1, VAR_11->base + VAR_0);


 if (VAR_13 & VAR_3) {
  FUNC_7(VAR_3, VAR_11->base + VAR_0);
  FUNC_4(VAR_10, "receive a packet exceeding frame buffer\n");
 }

 VAR_13 &= VAR_12;
 if (!VAR_13)
  goto exit_isr;


 if (VAR_13 & VAR_5) {
  VAR_11->stats_rx.fifo_errors++;
  FUNC_2(VAR_10);
  goto exit_isr;
 }


 if (VAR_13 & VAR_2) {
  VAR_11->stats_rx.dropped++;
  FUNC_7(VAR_2, VAR_11->base + VAR_0);
 }


 if (VAR_13 & VAR_4) {
  FUNC_3(&VAR_11->napi_rx);

  VAR_12 &= ~VAR_4;
 }


 if (VAR_13 & VAR_6) {
  FUNC_3(&VAR_11->napi_tx);

  VAR_12 &= ~VAR_6;
 }

exit_isr:
 FUNC_1(VAR_10, VAR_12);

 return VAR_7;
}
