
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {char* an_name; char* ecc_name; char* i2c_name; void* dev_workqueue; void* an_workqueue; int sysclk; int ptpclk; int dev_state; int tx_tstamp_work; int stopdev_work; int restart_work; int service_work; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (struct net_device*,char*) ;
 char* FUNC_8 (struct net_device*) ;
 struct xgbe_prv_data* FUNC_9 (struct net_device*) ;
 int FUNC_10 (char*,int,char*,char*) ;
 int FUNC_11 (struct xgbe_prv_data*) ;
 int FUNC_12 (struct xgbe_prv_data*) ;
 int FUNC_13 (struct xgbe_prv_data*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_14 (struct xgbe_prv_data*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_6)
{
 struct xgbe_prv_data *VAR_7 = FUNC_9(VAR_6);
 int VAR_8;


 FUNC_10(VAR_7->an_name, sizeof(VAR_7->an_name) - 1, "%s-pcs",
   FUNC_8(VAR_6));

 FUNC_10(VAR_7->ecc_name, sizeof(VAR_7->ecc_name) - 1, "%s-ecc",
   FUNC_8(VAR_6));

 FUNC_10(VAR_7->i2c_name, sizeof(VAR_7->i2c_name) - 1, "%s-i2c",
   FUNC_8(VAR_6));


 VAR_7->dev_workqueue =
  FUNC_4(FUNC_8(VAR_6));
 if (!VAR_7->dev_workqueue) {
  FUNC_7(VAR_6, "device workqueue creation failed\n");
  return -VAR_0;
 }

 VAR_7->an_workqueue =
  FUNC_4(VAR_7->an_name);
 if (!VAR_7->an_workqueue) {
  FUNC_7(VAR_6, "phy workqueue creation failed\n");
  VAR_8 = -VAR_0;
  goto err_dev_wq;
 }


 VAR_8 = FUNC_13(VAR_7);
 if (VAR_8)
  goto err_an_wq;


 VAR_8 = FUNC_3(VAR_7->sysclk);
 if (VAR_8) {
  FUNC_6(VAR_6, "dma clk_prepare_enable failed\n");
  goto err_an_wq;
 }

 VAR_8 = FUNC_3(VAR_7->ptpclk);
 if (VAR_8) {
  FUNC_6(VAR_6, "ptp clk_prepare_enable failed\n");
  goto err_sysclk;
 }

 FUNC_0(&VAR_7->service_work, VAR_3);
 FUNC_0(&VAR_7->restart_work, VAR_2);
 FUNC_0(&VAR_7->stopdev_work, VAR_4);
 FUNC_0(&VAR_7->tx_tstamp_work, VAR_5);

 VAR_8 = FUNC_11(VAR_7);
 if (VAR_8)
  goto err_ptpclk;

 VAR_8 = FUNC_14(VAR_7);
 if (VAR_8)
  goto err_mem;

 FUNC_1(VAR_1, &VAR_7->dev_state);

 return 0;

err_mem:
 FUNC_12(VAR_7);

err_ptpclk:
 FUNC_2(VAR_7->ptpclk);

err_sysclk:
 FUNC_2(VAR_7->sysclk);

err_an_wq:
 FUNC_5(VAR_7->an_workqueue);

err_dev_wq:
 FUNC_5(VAR_7->dev_workqueue);

 return VAR_8;
}
