
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct isp_device*) ;
 int FUNC_2 (struct isp_device*) ;
 int FUNC_3 (struct isp_device*) ;
 int FUNC_4 (struct isp_device*) ;
 int FUNC_5 (struct isp_device*) ;
 int FUNC_6 (struct isp_device*) ;
 int FUNC_7 (struct isp_device*) ;
 int FUNC_8 (struct isp_device*) ;
 int FUNC_9 (struct isp_device*) ;
 int FUNC_10 (struct isp_device*) ;
 int FUNC_11 (struct isp_device*) ;
 int FUNC_12 (struct isp_device*) ;
 int FUNC_13 (struct isp_device*) ;
 int FUNC_14 (struct isp_device*) ;
 int FUNC_15 (struct isp_device*) ;
 int FUNC_16 (struct isp_device*) ;
 int FUNC_17 (struct isp_device*) ;

__attribute__((used)) static int FUNC_18(struct isp_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_8(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "CSI PHY initialization failed\n");
  return VAR_2;
 }

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "CSI2 initialization failed\n");
  goto error_csi2;
 }

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2 < 0) {
  if (VAR_2 != -VAR_0)
   FUNC_0(VAR_1->dev, "CCP2 initialization failed\n");
  goto error_ccp2;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "CCDC initialization failed\n");
  goto error_ccdc;
 }

 VAR_2 = FUNC_15(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "Preview initialization failed\n");
  goto error_preview;
 }

 VAR_2 = FUNC_17(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "Resizer initialization failed\n");
  goto error_resizer;
 }

 VAR_2 = FUNC_13(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "Histogram initialization failed\n");
  goto error_hist;
 }

 VAR_2 = FUNC_10(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "H3A AEWB initialization failed\n");
  goto error_h3a_aewb;
 }

 VAR_2 = FUNC_11(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "H3A AF initialization failed\n");
  goto error_h3a_af;
 }

 return 0;

error_h3a_af:
 FUNC_9(VAR_1);
error_h3a_aewb:
 FUNC_12(VAR_1);
error_hist:
 FUNC_16(VAR_1);
error_resizer:
 FUNC_14(VAR_1);
error_preview:
 FUNC_1(VAR_1);
error_ccdc:
 FUNC_3(VAR_1);
error_ccp2:
 FUNC_5(VAR_1);
error_csi2:
 FUNC_7(VAR_1);

 return VAR_2;
}
