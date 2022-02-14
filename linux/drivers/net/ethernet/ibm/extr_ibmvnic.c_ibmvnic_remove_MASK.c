
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int dev; } ;
struct net_device {int dummy; } ;
struct ibmvnic_adapter {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct net_device*) ;
 struct ibmvnic_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ibmvnic_adapter*) ;
 int FUNC_6 (struct ibmvnic_adapter*) ;
 int FUNC_7 (struct ibmvnic_adapter*) ;
 int FUNC_8 (struct ibmvnic_adapter*) ;
 int FUNC_9 (struct ibmvnic_adapter*,int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static int FUNC_13(struct vio_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_0(&VAR_3->dev);
 struct ibmvnic_adapter *VAR_5 = FUNC_4(VAR_4);

 VAR_5->state = VAR_1;
 FUNC_10();
 FUNC_12(VAR_4);

 FUNC_6(VAR_5);
 FUNC_9(VAR_5, 1);
 FUNC_5(VAR_5);

 FUNC_8(VAR_5);
 FUNC_7(VAR_5);

 VAR_5->state = VAR_0;

 FUNC_11();
 FUNC_2(&VAR_3->dev, &VAR_2);
 FUNC_3(VAR_4);
 FUNC_1(&VAR_3->dev, ((void*)0));

 return 0;
}
