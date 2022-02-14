
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_prev_device {int dummy; } ;
struct isp_device {int revision; } ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct isp_device* FUNC_0 (struct isp_prev_device*) ;

__attribute__((used)) static unsigned int FUNC_1(struct isp_prev_device *VAR_3)
{
 struct isp_device *VAR_4 = FUNC_0(VAR_3);

 switch (VAR_4->revision) {
 case 129:
  return VAR_0;

 case 128:
 default:
  return VAR_2;

 case 130:
  return VAR_1;
 }
}
