
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int features; } ;
struct ibmveth_adapter {int pool_config; int fw_ipv4_csum_support; int fw_ipv6_csum_support; int rx_csum; TYPE_1__* vdev; } ;
struct TYPE_2__ {int unit_address; } ;


 int VAR_0 ;
 long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long FUNC_0 (int ,unsigned long,unsigned long,unsigned long*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*,int,long,...) ;
 struct ibmveth_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_7, u32 VAR_8)
{
 struct ibmveth_adapter *VAR_9 = FUNC_4(VAR_7);
 unsigned long VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13, VAR_14;
 long VAR_15, VAR_16, VAR_17;
 int VAR_18 = 0, VAR_19 = 0;
 int VAR_20 = 0;

 if (FUNC_5(VAR_7)) {
  VAR_20 = 1;
  VAR_9->pool_config = 1;
  FUNC_1(VAR_7);
  VAR_9->pool_config = 0;
 }

 VAR_10 = 0;
 VAR_11 = 0;
 VAR_13 = 0;
 VAR_14 = 0;

 if (VAR_8) {
  VAR_10 = VAR_2;
  VAR_13 = VAR_3;
 } else {
  VAR_11 = VAR_2;
  VAR_14 = VAR_3;
 }

 VAR_15 = FUNC_0(VAR_9->vdev->unit_address, 0, 0, &VAR_12);

 if (VAR_15 == VAR_1 &&
     (VAR_12 & VAR_4)) {
  VAR_16 = FUNC_0(VAR_9->vdev->unit_address, VAR_11,
      VAR_10, &VAR_12);

  if (VAR_16 != VAR_1) {
   FUNC_3(VAR_7, "unable to change IPv4 checksum "
     "offload settings. %d rc=%ld\n",
     VAR_8, VAR_16);

   FUNC_0(VAR_9->vdev->unit_address,
        VAR_10, VAR_11, &VAR_12);

   if (VAR_8 == 1)
    VAR_7->features &= ~VAR_6;

  } else {
   VAR_9->fw_ipv4_csum_support = VAR_8;
  }

  VAR_17 = FUNC_0(VAR_9->vdev->unit_address,
      VAR_14, VAR_13, &VAR_12);

  if (VAR_17 != VAR_1) {
   FUNC_3(VAR_7, "unable to change IPv6 checksum "
     "offload settings. %d rc=%ld\n",
     VAR_8, VAR_17);

   FUNC_0(VAR_9->vdev->unit_address,
        VAR_13, VAR_14, &VAR_12);

   if (VAR_8 == 1)
    VAR_7->features &= ~VAR_5;

  } else
   VAR_9->fw_ipv6_csum_support = VAR_8;

  if (VAR_16 == VAR_1 || VAR_17 == VAR_1)
   VAR_9->rx_csum = VAR_8;
  else
   VAR_18 = -VAR_0;
 } else {
  VAR_18 = -VAR_0;
  FUNC_3(VAR_7, "unable to change checksum offload settings."
         " %d rc=%ld ret_attr=%lx\n", VAR_8, VAR_15,
         VAR_12);
 }

 if (VAR_20)
  VAR_19 = FUNC_2(VAR_7);

 return VAR_18 ? VAR_18 : VAR_19;
}
