
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ibmvnic_rwi {int reset_reason; } ;
struct ibmvnic_adapter {scalar_t__ state; struct net_device* netdev; int init_done; int reset_reason; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ibmvnic_adapter*) ;
 int FUNC_3 (struct ibmvnic_adapter*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ibmvnic_adapter*) ;
 int FUNC_6 (struct ibmvnic_adapter*) ;
 int FUNC_7 (struct net_device*,char*,int ) ;
 int FUNC_8 (struct net_device*,char*,int) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ibmvnic_adapter*) ;
 int FUNC_12 (struct ibmvnic_adapter*) ;
 int FUNC_13 (struct ibmvnic_adapter*,int ) ;

__attribute__((used)) static int FUNC_14(struct ibmvnic_adapter *VAR_3,
    struct ibmvnic_rwi *VAR_4, u32 VAR_5)
{
 struct net_device *VAR_6 = VAR_3->netdev;
 int VAR_7;

 FUNC_7(VAR_3->netdev, "Hard resetting driver (%d)\n",
     VAR_4->reset_reason);

 FUNC_9(VAR_6);
 VAR_3->reset_reason = VAR_4->reset_reason;

 FUNC_1(VAR_6);
 FUNC_12(VAR_3);
 FUNC_13(VAR_3, 0);
 FUNC_11(VAR_3);




 VAR_3->state = VAR_2;

 FUNC_10(&VAR_3->init_done);
 VAR_7 = FUNC_5(VAR_3);
 if (VAR_7) {
  FUNC_8(VAR_3->netdev,
      "Couldn't initialize crq. rc=%d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7)
  return VAR_7;




 if (VAR_5 == VAR_2)
  return 0;

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7) {
  VAR_3->state = VAR_2;
  return 0;
 }

 VAR_7 = FUNC_6(VAR_3);
 if (VAR_7)
  return VAR_7;

 FUNC_2(VAR_3);
 VAR_3->state = VAR_1;

 if (VAR_5 == VAR_1)
  return 0;

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  return VAR_0;

 return 0;
}
