
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_local {int rx_mode; int curr_rx_cfg; } ;
struct net_device {int flags; } ;


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
 int FUNC_0 (struct net_device*) ;
 struct net_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_10)
{
 struct net_local *VAR_11 = FUNC_1(VAR_10);

 if(VAR_10->flags&VAR_2)
 {
  VAR_11->rx_mode = VAR_5;
 } else if ((VAR_10->flags & VAR_1) || !FUNC_0(VAR_10)) {


  VAR_11->rx_mode = VAR_8;
 }
 else
  VAR_11->rx_mode = 0;

 FUNC_2(VAR_10, VAR_4, VAR_0 | VAR_11->rx_mode);


 FUNC_2(VAR_10, VAR_3, VAR_11->curr_rx_cfg |
      (VAR_11->rx_mode == VAR_5? (VAR_6|VAR_9|VAR_7) : 0));
}
