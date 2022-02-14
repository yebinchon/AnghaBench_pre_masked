
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int features; } ;
struct ibmveth_adapter {int pool_config; int fw_large_send_support; int large_send; TYPE_1__* vdev; } ;
struct TYPE_2__ {int unit_address; } ;


 int VAR_0 ;
 long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_0 (int ,unsigned long,unsigned long,unsigned long*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*,int,long) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct ibmveth_adapter* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_7, u32 VAR_8)
{
 struct ibmveth_adapter *VAR_9 = FUNC_5(VAR_7);
 unsigned long VAR_10, VAR_11, VAR_12;
 long VAR_13, VAR_14;
 int VAR_15 = 0, VAR_16 = 0;
 int VAR_17 = 0;

 if (FUNC_6(VAR_7)) {
  VAR_17 = 1;
  VAR_9->pool_config = 1;
  FUNC_1(VAR_7);
  VAR_9->pool_config = 0;
 }

 VAR_10 = 0;
 VAR_11 = 0;

 if (VAR_8)
  VAR_10 = VAR_3;
 else
  VAR_11 = VAR_3;

 VAR_13 = FUNC_0(VAR_9->vdev->unit_address, 0, 0, &VAR_12);

 if (VAR_13 == VAR_1 && (VAR_12 & VAR_2) &&
     !VAR_6) {
  VAR_14 = FUNC_0(VAR_9->vdev->unit_address, VAR_11,
       VAR_10, &VAR_12);

  if (VAR_14 != VAR_1) {
   FUNC_3(VAR_7, "unable to change tso settings. %d rc=%ld\n",
       VAR_8, VAR_14);

   FUNC_0(VAR_9->vdev->unit_address,
        VAR_10, VAR_11, &VAR_12);

   if (VAR_8 == 1)
    VAR_7->features &= ~(VAR_4 | VAR_5);
   VAR_15 = -VAR_0;

  } else {
   VAR_9->fw_large_send_support = VAR_8;
   VAR_9->large_send = VAR_8;
  }
 } else {



  if (VAR_8 == 1) {
   VAR_7->features &= ~VAR_5;
   FUNC_4(VAR_7, "TSO feature requires all partitions to have updated driver");
  }
  VAR_9->large_send = VAR_8;
 }

 if (VAR_17)
  VAR_16 = FUNC_2(VAR_7);

 return VAR_15 ? VAR_15 : VAR_16;
}
