
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct cc2520_private {scalar_t__ amplified; TYPE_1__* spi; } ;
struct cc2520_platform_data {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (TYPE_1__*,struct cc2520_platform_data*) ;
 int FUNC_1 (struct cc2520_private*,scalar_t__*) ;
 int FUNC_2 (struct cc2520_private*,int ,scalar_t__*) ;
 int FUNC_3 (struct cc2520_private*,int ,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct cc2520_private *VAR_22)
{
 u8 VAR_23 = 0, VAR_24 = 0xff;
 int VAR_25;
 int VAR_26 = 100;
 struct cc2520_platform_data VAR_27;

 VAR_25 = FUNC_0(VAR_22->spi, &VAR_27);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_2(VAR_22, VAR_9, &VAR_24);
 if (VAR_25)
  goto err_ret;

 if (VAR_24 != VAR_21)
  return -VAR_18;

 do {
  VAR_25 = FUNC_1(VAR_22, &VAR_23);
  if (VAR_25)
   goto err_ret;

  if (VAR_26-- <= 0) {
   FUNC_4(&VAR_22->spi->dev, "oscillator start failed!\n");
   return VAR_25;
  }
  FUNC_6(1);
 } while (!(VAR_23 & VAR_16));

 FUNC_5(&VAR_22->spi->dev, "oscillator brought up\n");







 if (VAR_22->amplified) {
  VAR_25 = FUNC_3(VAR_22, VAR_3, 0x16);
  if (VAR_25)
   goto err_ret;

  VAR_25 = FUNC_3(VAR_22, VAR_10, 0x46);
  if (VAR_25)
   goto err_ret;

  VAR_25 = FUNC_3(VAR_22, VAR_11, 0x47);
  if (VAR_25)
   goto err_ret;

  VAR_25 = FUNC_3(VAR_22, VAR_12, 0x1e);
  if (VAR_25)
   goto err_ret;

  VAR_25 = FUNC_3(VAR_22, VAR_17, 0xc1);
  if (VAR_25)
   goto err_ret;
 } else {
  VAR_25 = FUNC_3(VAR_22, VAR_3, 0x11);
  if (VAR_25)
   goto err_ret;
 }







 VAR_25 = FUNC_3(VAR_22, VAR_4, 0x1A);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_22, VAR_13, 0x85);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_22, VAR_14, 0x14);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_22, VAR_15, 0x3f);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_22, VAR_8, 0x5a);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_22, VAR_7, 0x2b);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_22, VAR_0, 0x10);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_22, VAR_1, 0x0e);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_22, VAR_2, 0x03);
 if (VAR_25)
  goto err_ret;


 VAR_25 = FUNC_3(VAR_22, VAR_6,
        VAR_20 |
        VAR_19);
 if (VAR_25)
  goto err_ret;

 VAR_25 = FUNC_3(VAR_22, VAR_5, 127);
 if (VAR_25)
  goto err_ret;

 return 0;

err_ret:
 return VAR_25;
}
