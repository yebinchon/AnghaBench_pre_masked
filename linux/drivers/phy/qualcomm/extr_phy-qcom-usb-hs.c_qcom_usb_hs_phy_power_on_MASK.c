
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulpi_seq {int val; scalar_t__ addr; } ;
struct ulpi {int dev; } ;
struct qcom_usb_hs_phy {int ref_clk; int sleep_clk; int v1p8; int v3p3; int vbus_notify; scalar_t__ vbus_edev; scalar_t__ reset; struct ulpi_seq* init_seq; struct ulpi* ulpi; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int *) ;
 int FUNC_3 (scalar_t__,int ) ;
 struct qcom_usb_hs_phy* FUNC_4 (struct phy*) ;
 int FUNC_5 (int *,int,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int,int,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct ulpi*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_12(struct phy *VAR_2)
{
 struct qcom_usb_hs_phy *VAR_3 = FUNC_4(VAR_2);
 struct ulpi *VAR_4 = VAR_3->ulpi;
 const struct ulpi_seq *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_3->ref_clk);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_3->sleep_clk);
 if (VAR_6)
  goto err_sleep;

 VAR_6 = FUNC_8(VAR_3->v1p8, 50000);
 if (VAR_6 < 0)
  goto err_1p8;

 VAR_6 = FUNC_7(VAR_3->v1p8);
 if (VAR_6)
  goto err_1p8;

 VAR_6 = FUNC_9(VAR_3->v3p3, 3050000, 3300000,
         3300000);
 if (VAR_6)
  goto err_3p3;

 VAR_6 = FUNC_8(VAR_3->v3p3, 50000);
 if (VAR_6 < 0)
  goto err_3p3;

 VAR_6 = FUNC_7(VAR_3->v3p3);
 if (VAR_6)
  goto err_3p3;

 for (VAR_5 = VAR_3->init_seq; VAR_5->addr; VAR_5++) {
  VAR_6 = FUNC_11(VAR_4, VAR_1 + VAR_5->addr,
     VAR_5->val);
  if (VAR_6)
   goto err_ulpi;
 }

 if (VAR_3->reset) {
  VAR_6 = FUNC_10(VAR_3->reset);
  if (VAR_6)
   goto err_ulpi;
 }

 if (VAR_3->vbus_edev) {
  VAR_7 = FUNC_3(VAR_3->vbus_edev, VAR_0);

  FUNC_5(&VAR_3->vbus_notify, VAR_7,
           VAR_3->vbus_edev);
  VAR_6 = FUNC_2(&VAR_4->dev, VAR_3->vbus_edev,
    VAR_0, &VAR_3->vbus_notify);
  if (VAR_6)
   goto err_ulpi;
 }

 return 0;
err_ulpi:
 FUNC_6(VAR_3->v3p3);
err_3p3:
 FUNC_6(VAR_3->v1p8);
err_1p8:
 FUNC_0(VAR_3->sleep_clk);
err_sleep:
 FUNC_0(VAR_3->ref_clk);
 return VAR_6;
}
