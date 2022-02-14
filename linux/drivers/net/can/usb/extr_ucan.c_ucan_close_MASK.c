
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct ucan_priv {int netdev; int rx_urbs; int tx_urbs; TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct ucan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ucan_priv*,int ,int ,int ) ;
 int FUNC_5 (struct ucan_priv*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3)
{
 int VAR_4;
 struct ucan_priv *VAR_5 = FUNC_2(VAR_3);

 VAR_5->can.state = VAR_0;


 FUNC_6(&VAR_5->tx_urbs);


 FUNC_6(&VAR_5->rx_urbs);


 VAR_4 = FUNC_4(VAR_5, VAR_2, 0, 0);
 if (VAR_4 < 0)
  FUNC_1(VAR_5->netdev,
      "could not stop device, code: %d\n",
      VAR_4);

 VAR_4 = FUNC_4(VAR_5, VAR_1, 0, 0);
 if (VAR_4 < 0)
  FUNC_1(VAR_5->netdev,
      "could not reset device, code: %d\n",
      VAR_4);

 FUNC_3(VAR_3);

 FUNC_5(VAR_5);

 FUNC_0(VAR_5->netdev);
 return 0;
}
