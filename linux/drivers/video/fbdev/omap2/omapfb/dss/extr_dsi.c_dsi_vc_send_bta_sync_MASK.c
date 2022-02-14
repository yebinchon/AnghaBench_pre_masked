
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct platform_device {int dummy; } ;
struct omap_dss_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct platform_device* FUNC_2 (struct omap_dss_device*) ;
 scalar_t__ FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int ,int *,int ) ;
 int FUNC_5 (struct platform_device*,int,int ,int *,int ) ;
 int FUNC_6 (struct platform_device*,int ,int *,int ) ;
 int FUNC_7 (struct platform_device*,int,int ,int *,int ) ;
 int FUNC_8 (struct platform_device*,int) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct omap_dss_device *VAR_5, int VAR_6)
{
 struct platform_device *VAR_7 = FUNC_2(VAR_5);
 FUNC_0(VAR_3);
 int VAR_8 = 0;
 u32 VAR_9;

 VAR_8 = FUNC_5(VAR_7, VAR_6, VAR_4,
   &VAR_3, VAR_1);
 if (VAR_8)
  goto err0;

 VAR_8 = FUNC_4(VAR_7, VAR_4, &VAR_3,
   VAR_0);
 if (VAR_8)
  goto err1;

 VAR_8 = FUNC_8(VAR_7, VAR_6);
 if (VAR_8)
  goto err2;

 if (FUNC_10(&VAR_3,
    FUNC_9(500)) == 0) {
  FUNC_1("Failed to receive BTA\n");
  VAR_8 = -VAR_2;
  goto err2;
 }

 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9) {
  FUNC_1("Error while sending BTA: %x\n", VAR_9);
  VAR_8 = -VAR_2;
  goto err2;
 }
err2:
 FUNC_6(VAR_7, VAR_4, &VAR_3,
   VAR_0);
err1:
 FUNC_7(VAR_7, VAR_6, VAR_4,
   &VAR_3, VAR_1);
err0:
 return VAR_8;
}
