
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_res_device {int dummy; } ;
struct isp_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct isp_device*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*) ;
 struct isp_device* FUNC_2 (struct isp_res_device*) ;

__attribute__((used)) static void FUNC_3(struct isp_res_device *VAR_10)
{
 struct isp_device *VAR_11 = FUNC_2(VAR_10);

 FUNC_1(VAR_11->dev, "-------------Resizer Register dump----------\n");

 FUNC_0(VAR_11, VAR_4);
 FUNC_0(VAR_11, VAR_0);
 FUNC_0(VAR_11, VAR_3);
 FUNC_0(VAR_11, VAR_2);
 FUNC_0(VAR_11, VAR_1);
 FUNC_0(VAR_11, VAR_5);
 FUNC_0(VAR_11, VAR_6);
 FUNC_0(VAR_11, VAR_7);
 FUNC_0(VAR_11, VAR_8);
 FUNC_0(VAR_11, VAR_9);

 FUNC_1(VAR_11->dev, "--------------------------------------------\n");
}
