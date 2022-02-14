
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sdio_func {int dev; } ;
struct ks_wlan_private {int net_dev; } ;
struct ks_sdio_card {struct ks_wlan_private* priv; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ks_wlan_private*,struct firmware const*) ;
 int FUNC_1 (struct ks_wlan_private*,int ,scalar_t__*) ;
 struct sdio_func* FUNC_2 (struct ks_wlan_private*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,int ,int *) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct ks_sdio_card *VAR_5)
{
 struct ks_wlan_private *VAR_6 = VAR_5->priv;
 struct sdio_func *VAR_7 = FUNC_2(VAR_6);
 unsigned int VAR_8;
 u8 VAR_9 = 0;
 int VAR_10;
 const struct firmware *VAR_11 = ((void*)0);

 FUNC_7(VAR_7);


 VAR_10 = FUNC_1(VAR_6, VAR_2, &VAR_9);
 if (VAR_10)
  goto release_host;
 if (VAR_9 == VAR_3) {
  FUNC_3(VAR_6->net_dev, "MAC firmware running ...\n");
  VAR_10 = -VAR_0;
  goto release_host;
 }

 VAR_10 = FUNC_6(&VAR_11, VAR_4,
          &VAR_7->dev);
 if (VAR_10)
  goto release_host;

 VAR_10 = FUNC_0(VAR_6, VAR_11);
 if (VAR_10)
  goto release_firmware;


 for (VAR_8 = 0; VAR_8 < 50; ++VAR_8) {
  FUNC_9(10000, 11000);
  VAR_10 = FUNC_1(VAR_6, VAR_2, &VAR_9);
  if (VAR_10)
   goto release_firmware;

  if (VAR_9 == VAR_3)
   break;
 }
 if ((50) <= VAR_8) {
  FUNC_4(VAR_6->net_dev, "firmware can't start\n");
  VAR_10 = -VAR_1;
  goto release_firmware;
 }

 VAR_10 = 0;

 release_firmware:
 FUNC_5(VAR_11);
 release_host:
 FUNC_8(VAR_7);

 return VAR_10;
}
