
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lan743x_adapter {int * rx; int * tx; } ;


 int VAR_0 ;
 int FUNC_0 (struct lan743x_adapter*) ;
 int FUNC_1 (struct lan743x_adapter*) ;
 int FUNC_2 (struct lan743x_adapter*) ;
 int FUNC_3 (struct lan743x_adapter*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct lan743x_adapter* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct lan743x_adapter *VAR_2 = FUNC_6(VAR_1);
 int VAR_3;

 FUNC_5(&VAR_2->tx[0]);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_4(&VAR_2->rx[VAR_3]);

 FUNC_3(VAR_2);

 FUNC_2(VAR_2);

 FUNC_1(VAR_2);

 FUNC_0(VAR_2);

 return 0;
}
