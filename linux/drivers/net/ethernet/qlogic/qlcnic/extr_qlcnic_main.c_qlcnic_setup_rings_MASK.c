
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qlcnic_adapter {scalar_t__ drv_tss_rings; scalar_t__ drv_rss_rings; scalar_t__ drv_tx_rings; scalar_t__ drv_sds_rings; int state; TYPE_1__* pdev; int msix_entries; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_1 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct qlcnic_adapter*) ;
 int FUNC_10 (struct qlcnic_adapter*) ;
 int FUNC_11 (struct qlcnic_adapter*) ;
 int FUNC_12 (struct qlcnic_adapter*) ;
 int FUNC_13 (struct qlcnic_adapter*,int) ;
 int FUNC_14 (struct qlcnic_adapter*) ;
 int FUNC_15 (struct qlcnic_adapter*) ;
 int FUNC_16 (struct qlcnic_adapter*) ;
 int FUNC_17 (struct net_device*,int ) ;
 int FUNC_18 (struct qlcnic_adapter*,scalar_t__,scalar_t__) ;
 int FUNC_19 (struct qlcnic_adapter*) ;
 int FUNC_20 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_21 (int ,int *) ;

int FUNC_22(struct qlcnic_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 u8 VAR_5, VAR_6;
 int VAR_7;

 if (FUNC_21(VAR_2, &VAR_3->state))
  return -VAR_0;

 VAR_5 = VAR_3->drv_tss_rings;
 VAR_6 = VAR_3->drv_rss_rings;

 FUNC_7(VAR_4);

 VAR_7 = FUNC_18(VAR_3, VAR_5, VAR_6);
 if (VAR_7)
  goto done;

 if (FUNC_8(VAR_4))
  FUNC_0(VAR_3, VAR_4);

 FUNC_16(VAR_3);

 if (FUNC_9(VAR_3)) {
  FUNC_12(VAR_3);
  FUNC_11(VAR_3);
 }

 FUNC_20(VAR_3);

 VAR_7 = FUNC_19(VAR_3);
 if (VAR_7) {
  FUNC_4(VAR_3->msix_entries);
  FUNC_5(VAR_4, "failed to setup interrupt\n");
  return VAR_7;
 }




 if ((VAR_5 != VAR_3->drv_tx_rings) ||
     (VAR_6 != VAR_3->drv_sds_rings)) {
  VAR_7 = FUNC_18(VAR_3,
       VAR_3->drv_tx_rings,
       VAR_3->drv_sds_rings);
  if (VAR_7)
   goto done;
 }

 if (FUNC_9(VAR_3)) {
  FUNC_13(VAR_3, 1);
  VAR_7 = FUNC_14(VAR_3);
  FUNC_10(VAR_3);
  if (VAR_7) {
   FUNC_3(&VAR_3->pdev->dev,
    "failed to setup mbx interrupt\n");
   goto done;
  }
 }

 if (FUNC_8(VAR_4)) {
  VAR_7 = FUNC_15(VAR_3);
  if (VAR_7)
   goto done;
  VAR_7 = FUNC_1(VAR_3, VAR_4);
  if (VAR_7)
   goto done;
  FUNC_17(VAR_4, VAR_1);
 }
done:
 FUNC_6(VAR_4);
 FUNC_2(VAR_2, &VAR_3->state);
 return VAR_7;
}
