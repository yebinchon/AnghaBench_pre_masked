
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_device {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct iss_device*) ;
 int FUNC_2 (struct iss_device*) ;
 int FUNC_3 (struct iss_device*) ;
 int FUNC_4 (struct iss_device*) ;
 int FUNC_5 (struct iss_device*) ;
 int FUNC_6 (struct iss_device*) ;
 int FUNC_7 (struct iss_device*) ;
 int FUNC_8 (struct iss_device*) ;

__attribute__((used)) static int FUNC_9(struct iss_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1 < 0) {
  FUNC_0(VAR_0->dev, "CSI PHY initialization failed\n");
  goto error_csiphy;
 }

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 < 0) {
  FUNC_0(VAR_0->dev, "CSI2 initialization failed\n");
  goto error_csi2;
 }

 VAR_1 = FUNC_7(VAR_0);
 if (VAR_1 < 0) {
  FUNC_0(VAR_0->dev, "ISP IPIPEIF initialization failed\n");
  goto error_ipipeif;
 }

 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1 < 0) {
  FUNC_0(VAR_0->dev, "ISP IPIPE initialization failed\n");
  goto error_ipipe;
 }

 VAR_1 = FUNC_8(VAR_0);
 if (VAR_1 < 0) {
  FUNC_0(VAR_0->dev, "ISP RESIZER initialization failed\n");
  goto error_resizer;
 }

 return 0;

error_resizer:
 FUNC_4(VAR_0);
error_ipipe:
 FUNC_6(VAR_0);
error_ipipeif:
 FUNC_1(VAR_0);
error_csi2:
error_csiphy:
 return VAR_1;
}
