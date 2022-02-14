
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtllib_rx_stats {int RecvSignalPower; } ;
struct TYPE_2__ {int recv_signal_power; } ;
struct r8192_priv {TYPE_1__ stats; } ;



void FUNC_0(struct r8192_priv *VAR_0,
     struct rtllib_rx_stats *VAR_1)
{
 int VAR_2 = 0;


 if (VAR_0->stats.recv_signal_power == 0)
  VAR_0->stats.recv_signal_power =
      VAR_1->RecvSignalPower;

 if (VAR_1->RecvSignalPower > VAR_0->stats.recv_signal_power)
  VAR_2 = 5;
 else if (VAR_1->RecvSignalPower <
   VAR_0->stats.recv_signal_power)
  VAR_2 = (-5);
 VAR_0->stats.recv_signal_power = (VAR_0->stats.recv_signal_power * 5 +
     VAR_1->RecvSignalPower +
     VAR_2) / 6;
}
