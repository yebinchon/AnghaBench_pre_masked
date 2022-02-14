
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp_device {int dummy; } ;
struct isp_ccdc_device {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_ccdc_device*) ;

__attribute__((used)) static void FUNC_2(struct isp_ccdc_device *VAR_7,
          unsigned int VAR_8,
          enum v4l2_field VAR_9)
{
 struct isp_device *VAR_10 = FUNC_1(VAR_7);
 u32 VAR_11 = 0;

 FUNC_0(VAR_10, VAR_8 & 0xffff, VAR_6,
         VAR_0);

 switch (VAR_9) {
 case 128:
 case 129:



  VAR_11 |= (1 << VAR_2)
         | (1 << VAR_3)
         | (1 << VAR_4)
         | (1 << VAR_5);
  break;

 default:

  break;
 }

 FUNC_0(VAR_10, VAR_11, VAR_6, VAR_1);
}
