
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sockaddr {scalar_t__ sa_data; } ;
struct net_device {int * dev_addr; } ;
struct device {int dummy; } ;
struct be_adapter {scalar_t__* pmac_id; int * dev_mac; int if_handle; int rx_filter_lock; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct be_adapter*,scalar_t__,int *,int ,int,int ) ;
 int FUNC_2 (struct be_adapter*,int *) ;
 int FUNC_3 (struct be_adapter*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (struct be_adapter*,int ) ;
 int FUNC_6 (struct device*,char*,scalar_t__) ;
 int FUNC_7 (struct device*,char*,scalar_t__) ;
 int FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct be_adapter* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_4, void *VAR_5)
{
 struct be_adapter *VAR_6 = FUNC_13(VAR_4);
 struct device *VAR_7 = &VAR_6->pdev->dev;
 struct sockaddr *VAR_8 = VAR_5;
 int VAR_9;
 u8 VAR_10[VAR_3];
 u32 VAR_11 = VAR_6->pmac_id[0];

 if (!FUNC_10(VAR_8->sa_data))
  return -VAR_1;




 if (FUNC_9(VAR_8->sa_data, VAR_6->dev_mac))
  return 0;




 if (FUNC_0(VAR_6) && FUNC_4(VAR_6) &&
     !FUNC_5(VAR_6, VAR_0))
  return -VAR_2;


 if (!FUNC_14(VAR_4))
  goto done;







 FUNC_11(&VAR_6->rx_filter_lock);
 VAR_9 = FUNC_2(VAR_6, (u8 *)VAR_8->sa_data);
 if (!VAR_9) {




  if (VAR_6->pmac_id[0] != VAR_11)
   FUNC_3(VAR_6, VAR_11);
 }

 FUNC_12(&VAR_6->rx_filter_lock);



 VAR_9 = FUNC_1(VAR_6, VAR_6->pmac_id[0], VAR_10,
           VAR_6->if_handle, 1, 0);
 if (VAR_9)
  goto err;




 if (!FUNC_9(VAR_8->sa_data, VAR_10)) {
  VAR_9 = -VAR_2;
  goto err;
 }


 FUNC_8(VAR_6->dev_mac, VAR_8->sa_data);
done:
 FUNC_8(VAR_4->dev_addr, VAR_8->sa_data);
 FUNC_6(VAR_7, "MAC address changed to %pM\n", VAR_8->sa_data);
 return 0;
err:
 FUNC_7(VAR_7, "MAC address change to %pM failed\n", VAR_8->sa_data);
 return VAR_9;
}
