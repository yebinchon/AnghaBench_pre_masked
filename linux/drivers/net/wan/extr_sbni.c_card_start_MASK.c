
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct net_local {int state; int csr1; scalar_t__ framelen; scalar_t__ tx_frameno; scalar_t__ wait_frameno; scalar_t__ outpos; scalar_t__ inppos; int timer_ticks; } ;
struct net_device {scalar_t__ base_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct net_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_2( struct net_device *VAR_8 )
{
 struct net_local *VAR_9 = FUNC_0(VAR_8);

 VAR_9->timer_ticks = VAR_0;
 VAR_9->state &= ~(VAR_6 | VAR_4);
 VAR_9->state |= VAR_5;

 VAR_9->inppos = VAR_9->outpos = 0;
 VAR_9->wait_frameno = 0;
 VAR_9->tx_frameno = 0;
 VAR_9->framelen = 0;

 FUNC_1( *(u_char *)&VAR_9->csr1 | VAR_7, VAR_8->base_addr + VAR_2 );
 FUNC_1( VAR_3, VAR_8->base_addr + VAR_1 );
}
