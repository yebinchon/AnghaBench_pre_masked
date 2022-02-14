
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp_res_device {int dummy; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct isp_device*,int ,int ,int ) ;
 int FUNC_1 (struct isp_device*,int ,int ,int ) ;
 struct isp_device* FUNC_2 (struct isp_res_device*) ;

__attribute__((used)) static void FUNC_3(struct isp_res_device *VAR_3, u32 VAR_4)
{
 struct isp_device *VAR_5 = FUNC_2(VAR_3);

 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_5, VAR_2, VAR_0,
       VAR_1);
  break;
 case 129:
  FUNC_0(VAR_5, VAR_2, VAR_0,
       VAR_1);
  break;
 default:
  return;
 }
}
