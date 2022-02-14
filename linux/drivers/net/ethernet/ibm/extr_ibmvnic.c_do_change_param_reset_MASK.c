
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ibmvnic_rwi {int reset_reason; } ;
struct ibmvnic_adapter {int req_rx_queues; int * napi; scalar_t__ state; struct net_device* netdev; int reset_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ibmvnic_adapter*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ibmvnic_adapter*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct ibmvnic_adapter*) ;
 int FUNC_8 (struct ibmvnic_adapter*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct net_device*,char*,int ) ;
 int FUNC_11 (struct net_device*,char*,int) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct ibmvnic_adapter*) ;
 int FUNC_14 (struct ibmvnic_adapter*) ;
 int FUNC_15 (struct ibmvnic_adapter*,int) ;

__attribute__((used)) static int FUNC_16(struct ibmvnic_adapter *VAR_5,
     struct ibmvnic_rwi *VAR_6,
     u32 VAR_7)
{
 struct net_device *VAR_8 = VAR_5->netdev;
 int VAR_9, VAR_10;

 FUNC_10(VAR_5->netdev, "Change param resetting driver (%d)\n",
     VAR_6->reset_reason);

 FUNC_12(VAR_8);
 VAR_5->reset_reason = VAR_6->reset_reason;

 FUNC_2(VAR_8);

 if (VAR_7 == VAR_3) {
  VAR_10 = FUNC_0(VAR_8);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_14(VAR_5);
 FUNC_15(VAR_5, 1);
 FUNC_13(VAR_5);

 VAR_5->state = VAR_4;

 VAR_10 = FUNC_7(VAR_5);

 if (VAR_10) {
  FUNC_11(VAR_5->netdev,
      "Couldn't initialize crq. rc=%d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_5(VAR_5);
 if (VAR_10)
  return VAR_0;




 if (VAR_7 == VAR_4)
  return 0;

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10) {
  VAR_5->state = VAR_7;
  return VAR_10;
 }

 VAR_10 = FUNC_8(VAR_5);
 if (VAR_10)
  return VAR_10;

 FUNC_3(VAR_5);

 VAR_5->state = VAR_2;

 if (VAR_7 == VAR_2)
  return 0;

 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10)
  return VAR_1;


 FUNC_6(VAR_8);


 for (VAR_9 = 0; VAR_9 < VAR_5->req_rx_queues; VAR_9++)
  FUNC_9(&VAR_5->napi[VAR_9]);

 return 0;
}
