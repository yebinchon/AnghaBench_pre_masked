
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct ks_wlan_private {int net_dev; scalar_t__ wq; } ;
struct ks_sdio_card {struct ks_wlan_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ks_wlan_private*) ;
 int FUNC_4 (struct ks_sdio_card*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*) ;
 struct ks_sdio_card* FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*) ;
 int FUNC_10 (struct sdio_func*) ;
 int FUNC_11 (struct sdio_func*,int *) ;
 int FUNC_12 (struct sdio_func*,int,int ,int*) ;
 int FUNC_13 (struct sdio_func*) ;
 int FUNC_14 (struct ks_wlan_private*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct sdio_func *VAR_2)
{
 int VAR_3;
 struct ks_sdio_card *VAR_4;
 struct ks_wlan_private *VAR_5;

 VAR_4 = FUNC_8(VAR_2);

 if (!VAR_4)
  return;

 VAR_5 = VAR_4->priv;
 if (!VAR_5)
  goto err_free_card;

 FUNC_5(VAR_5->net_dev);


 FUNC_6(VAR_2);
 FUNC_12(VAR_2, 0, VAR_0, &VAR_3);
 FUNC_12(VAR_2, 0xff, VAR_1, &VAR_3);
 FUNC_9(VAR_2);

 VAR_3 = FUNC_13(VAR_2);
 if (VAR_3)
  goto err_free_card;

 if (VAR_5->wq) {
  FUNC_1(VAR_5->wq);
  FUNC_0(VAR_5->wq);
 }

 FUNC_3(VAR_5);

 FUNC_15(VAR_5->net_dev);

 FUNC_14(VAR_5);
 FUNC_2(VAR_5->net_dev);
 VAR_4->priv = ((void*)0);

 FUNC_6(VAR_2);
 FUNC_10(VAR_2);
 FUNC_7(VAR_2);
 FUNC_9(VAR_2);
err_free_card:
 FUNC_11(VAR_2, ((void*)0));
 FUNC_4(VAR_4);
}
