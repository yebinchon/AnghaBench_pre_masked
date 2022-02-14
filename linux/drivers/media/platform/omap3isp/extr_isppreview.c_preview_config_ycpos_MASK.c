
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp_prev_device {int dummy; } ;
struct isp_device {int dummy; } ;
typedef enum preview_ycpos_mode { ____Placeholder_preview_ycpos_mode } preview_ycpos_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct isp_device*,int ,int ,int ,int) ;
 struct isp_device* FUNC_1 (struct isp_prev_device*) ;

__attribute__((used)) static void FUNC_2(struct isp_prev_device *VAR_6, u32 VAR_7)
{
 struct isp_device *VAR_8 = FUNC_1(VAR_6);
 enum preview_ycpos_mode VAR_9;

 switch (VAR_7) {
 case 128:
  VAR_9 = VAR_4;
  break;
 case 129:
  VAR_9 = VAR_5;
  break;
 default:
  return;
 }

 FUNC_0(VAR_8, VAR_3, VAR_0,
   VAR_1,
   VAR_9 << VAR_2);
}
