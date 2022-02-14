
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct catc {int tx_urb; } ;


 int FUNC_0 (int *,char*) ;
 struct catc* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct catc *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, "Transmit timed out.\n");
 FUNC_2(VAR_1->tx_urb);
}
