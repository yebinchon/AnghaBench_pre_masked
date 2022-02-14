
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dsaf_drv_priv {int dummy; } ;
struct dsaf_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct dsaf_device*) ;
 int FUNC_1 (struct dsaf_device*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct dsaf_device*) ;
 struct dsaf_device* FUNC_4 (int *,int) ;
 int FUNC_5 (struct dsaf_device*) ;
 int FUNC_6 (struct dsaf_device*) ;
 int FUNC_7 (struct dsaf_device*) ;
 int FUNC_8 (struct dsaf_device*) ;
 int FUNC_9 (struct dsaf_device*) ;
 int FUNC_10 (struct dsaf_device*) ;
 int FUNC_11 (struct dsaf_device*) ;
 int FUNC_12 (struct dsaf_device*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_0)
{
 struct dsaf_device *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_4(&VAR_0->dev, sizeof(struct dsaf_drv_priv));
 if (FUNC_0(VAR_1)) {
  VAR_2 = FUNC_1(VAR_1);
  FUNC_2(&VAR_0->dev,
   "dsaf_probe dsaf_alloc_dev failed, ret = %#x!\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2)
  goto free_dev;

 VAR_2 = FUNC_8(VAR_1);
 if (VAR_2)
  goto free_dev;

 VAR_2 = FUNC_9(VAR_1);
 if (VAR_2)
  goto uninit_dsaf;

 VAR_2 = FUNC_11(VAR_1);
 if (VAR_2)
  goto uninit_mac;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  goto uninit_ppe;

 return 0;

uninit_ppe:
 FUNC_12(VAR_1);

uninit_mac:
 FUNC_10(VAR_1);

uninit_dsaf:
 FUNC_5(VAR_1);

free_dev:
 FUNC_6(VAR_1);

 return VAR_2;
}
