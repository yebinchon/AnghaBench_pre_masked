
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct lan743x_adapter {int netdev; TYPE_1__* rx; int * tx; } ;
struct TYPE_3__ {scalar_t__ ring_cpu_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lan743x_adapter*) ;
 int FUNC_1 (struct lan743x_adapter*) ;
 int FUNC_2 (struct lan743x_adapter*) ;
 int FUNC_3 (struct lan743x_adapter*) ;
 int FUNC_4 (struct lan743x_adapter*) ;
 int FUNC_5 (struct lan743x_adapter*) ;
 int FUNC_6 (struct lan743x_adapter*) ;
 int FUNC_7 (struct lan743x_adapter*) ;
 int FUNC_8 (struct lan743x_adapter*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 struct lan743x_adapter* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct lan743x_adapter*,int ,int ,char*) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_2)
{
 struct lan743x_adapter *VAR_3 = FUNC_12(VAR_2);
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  goto return_error;

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5)
  goto close_intr;

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  goto close_mac;

 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5)
  goto close_phy;

 FUNC_8(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = FUNC_10(&VAR_3->rx[VAR_4]);
  if (VAR_5)
   goto close_rx;
 }

 VAR_5 = FUNC_11(&VAR_3->tx[0]);
 if (VAR_5)
  goto close_rx;

 return 0;

close_rx:
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->rx[VAR_4].ring_cpu_ptr)
   FUNC_9(&VAR_3->rx[VAR_4]);
 }
 FUNC_6(VAR_3);

close_phy:
 FUNC_4(VAR_3);

close_mac:
 FUNC_2(VAR_3);

close_intr:
 FUNC_0(VAR_3);

return_error:
 FUNC_13(VAR_3, VAR_1, VAR_3->netdev,
     "Error opening LAN743x\n");
 return VAR_5;
}
