
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int flags; int num_rx_rings; int num_tx_rings; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct niu* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_7, int VAR_8)
{
 struct niu *VAR_9 = FUNC_0(VAR_7);

 if (VAR_8 != VAR_1)
  return -VAR_0;

 return (VAR_9->flags & VAR_2 ?
   VAR_6 :
   VAR_3) +
  (VAR_9->num_rx_rings * VAR_4) +
  (VAR_9->num_tx_rings * VAR_5);
}
