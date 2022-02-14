
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_res_device {scalar_t__ input; } ;
struct isp_device {scalar_t__ revision; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct isp_device* FUNC_0 (struct isp_res_device*) ;

__attribute__((used)) static unsigned int FUNC_1(struct isp_res_device *VAR_5)
{
 struct isp_device *VAR_6 = FUNC_0(VAR_5);

 if (VAR_5->input == VAR_4) {
  return VAR_1;
 } else {
  if (VAR_6->revision == VAR_0)
   return VAR_2;
  else
   return VAR_3;
 }
}
