
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yam_port {scalar_t__ tx_state; int txd; int tx_count; int bitrate; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2, struct yam_port *VAR_3)
{
 if ((VAR_3->tx_state == VAR_1) || (VAR_3->txd == 0))
  VAR_3->tx_count = 1;
 else
  VAR_3->tx_count = (VAR_3->bitrate * VAR_3->txd) / 8000;
 VAR_3->tx_state = VAR_0;
 FUNC_0(VAR_2);
}
