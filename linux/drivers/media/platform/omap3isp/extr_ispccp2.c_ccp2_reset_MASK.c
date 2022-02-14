
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {int dev; } ;
struct isp_ccp2_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct isp_device*,int ,int ) ;
 int FUNC_2 (struct isp_device*,int ,int ,int ) ;
 struct isp_device* FUNC_3 (struct isp_ccp2_device*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct isp_ccp2_device *VAR_5)
{
 struct isp_device *VAR_6 = FUNC_3(VAR_5);
 int VAR_7 = 0;


 FUNC_2(VAR_6, VAR_4, VAR_0,
      VAR_1);
 while (!(FUNC_1(VAR_6, VAR_4, VAR_2) &
   VAR_3)) {
  FUNC_4(10);
  if (VAR_7++ > 10) {
   FUNC_0(VAR_6->dev,
    "omap3_isp: timeout waiting for ccp2 reset\n");
   break;
  }
 }
}
