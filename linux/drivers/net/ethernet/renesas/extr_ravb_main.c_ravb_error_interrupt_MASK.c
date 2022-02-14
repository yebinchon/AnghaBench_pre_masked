
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ravb_private {int rx_fifo_errors; TYPE_1__* stats; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int rx_over_errors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_10)
{
 struct ravb_private *VAR_11 = FUNC_0(VAR_10);
 u32 VAR_12, VAR_13;

 VAR_12 = FUNC_1(VAR_10, VAR_0);
 FUNC_2(VAR_10, ~(VAR_1 | VAR_2), VAR_0);
 if (VAR_12 & VAR_1) {
  VAR_13 = FUNC_1(VAR_10, VAR_5);
  FUNC_2(VAR_10, ~(VAR_6 | VAR_9 | VAR_8),
      VAR_5);


  if (VAR_13 & VAR_6)
   VAR_11->stats[VAR_3].rx_over_errors++;


  if (VAR_13 & VAR_7)
   VAR_11->stats[VAR_4].rx_over_errors++;


  if (VAR_13 & VAR_9)
   VAR_11->rx_fifo_errors++;
 }
}
