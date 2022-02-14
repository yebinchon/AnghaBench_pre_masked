
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ibmvnic_rwi {scalar_t__ reset_reason; } ;
struct ibmvnic_adapter {scalar_t__ reset_reason; scalar_t__ req_rx_queues; scalar_t__ req_tx_queues; scalar_t__ req_rx_add_entries_per_subcrq; scalar_t__ req_tx_entries_per_subcrq; scalar_t__ state; int * napi; struct net_device* netdev; int vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ibmvnic_adapter*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ibmvnic_adapter*) ;
 int FUNC_6 (struct ibmvnic_adapter*) ;
 int FUNC_7 (struct ibmvnic_adapter*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct ibmvnic_adapter*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct net_device*,char*,scalar_t__) ;
 int FUNC_12 (struct net_device*,char*,int) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct ibmvnic_adapter*) ;
 int FUNC_15 (struct ibmvnic_adapter*) ;
 int FUNC_16 (struct ibmvnic_adapter*,int) ;
 int FUNC_17 (struct ibmvnic_adapter*) ;
 int FUNC_18 (struct ibmvnic_adapter*) ;
 int FUNC_19 (struct ibmvnic_adapter*) ;
 int FUNC_20 (struct ibmvnic_adapter*) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (struct ibmvnic_adapter*,int ) ;
 int FUNC_24 (int ) ;

__attribute__((used)) static int FUNC_25(struct ibmvnic_adapter *VAR_11,
      struct ibmvnic_rwi *VAR_12, u32 VAR_13)
{
 u64 VAR_14, VAR_15;
 u64 VAR_16, VAR_17;
 struct net_device *VAR_18 = VAR_11->netdev;
 int VAR_19, VAR_20;

 FUNC_11(VAR_11->netdev, "Re-setting driver (%d)\n",
     VAR_12->reset_reason);

 FUNC_21();

 FUNC_13(VAR_18);
 VAR_11->reset_reason = VAR_12->reset_reason;

 VAR_14 = VAR_11->req_rx_queues;
 VAR_15 = VAR_11->req_tx_queues;
 VAR_16 = VAR_11->req_rx_add_entries_per_subcrq;
 VAR_17 = VAR_11->req_tx_entries_per_subcrq;

 FUNC_2(VAR_18);

 if (VAR_13 == VAR_6 &&
     VAR_11->reset_reason != VAR_9 &&
     VAR_11->reset_reason != VAR_8) {
  VAR_11->state = VAR_5;






  FUNC_22();
  VAR_20 = FUNC_23(VAR_11, VAR_1);
  FUNC_21();
  if (VAR_20)
   goto out;

  if (VAR_11->state != VAR_5) {
   VAR_20 = -1;
   goto out;
  }

  VAR_11->state = VAR_4;
 }

 if (VAR_11->reset_reason != VAR_10) {



  VAR_11->state = VAR_7;

  if (VAR_11->reset_reason == VAR_9) {
   VAR_20 = FUNC_5(VAR_11);
   FUNC_16(VAR_11, 1);
  } else {
   VAR_20 = FUNC_6(VAR_11);
   if (!VAR_20)
    VAR_20 = FUNC_24(VAR_11->vdev);
  }

  if (VAR_20) {
   FUNC_12(VAR_11->netdev,
       "Couldn't initialize crq. rc=%d\n", VAR_20);
   goto out;
  }

  VAR_20 = FUNC_7(VAR_11);
  if (VAR_20) {
   VAR_20 = VAR_0;
   goto out;
  }




  if (VAR_13 == VAR_7) {
   VAR_20 = 0;
   goto out;
  }

  VAR_20 = FUNC_4(VAR_18);
  if (VAR_20) {
   VAR_11->state = VAR_13;
   goto out;
  }

  if (VAR_11->req_rx_queues != VAR_14 ||
      VAR_11->req_tx_queues != VAR_15 ||
      VAR_11->req_rx_add_entries_per_subcrq !=
      VAR_16 ||
      VAR_11->req_tx_entries_per_subcrq !=
      VAR_17) {
   FUNC_15(VAR_11);
   FUNC_17(VAR_11);
   FUNC_14(VAR_11);
   FUNC_18(VAR_11);

   VAR_20 = FUNC_9(VAR_11);
   if (VAR_20)
    goto out;

  } else {
   VAR_20 = FUNC_20(VAR_11);
   if (VAR_20)
    goto out;

   VAR_20 = FUNC_19(VAR_11);
   if (VAR_20)
    goto out;
  }
  FUNC_3(VAR_11);
 }
 VAR_11->state = VAR_4;

 if (VAR_13 == VAR_4) {
  VAR_20 = 0;
  goto out;
 }

 VAR_20 = FUNC_0(VAR_18);
 if (VAR_20) {
  VAR_20 = VAR_2;
  goto out;
 }


 FUNC_8(VAR_18);


 for (VAR_19 = 0; VAR_19 < VAR_11->req_rx_queues; VAR_19++)
  FUNC_10(&VAR_11->napi[VAR_19]);

 if (VAR_11->reset_reason != VAR_8)
  FUNC_1(VAR_3, VAR_18);

 VAR_20 = 0;

out:
 FUNC_22();

 return VAR_20;
}
