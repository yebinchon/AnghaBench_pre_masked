
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef enum fsl_usb2_controller_ver { ____Placeholder_fsl_usb2_controller_ver } fsl_usb2_controller_ver ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static enum fsl_usb2_controller_ver FUNC_1(struct device_node *VAR_6)
{
 enum fsl_usb2_controller_ver VAR_7 = VAR_4;
 if (FUNC_0(VAR_6, "fsl-usb2-dr")) {
  if (FUNC_0(VAR_6, "fsl-usb2-dr-v1.6"))
   VAR_7 = VAR_0;
  else if (FUNC_0(VAR_6, "fsl-usb2-dr-v2.2"))
   VAR_7 = VAR_1;
  else if (FUNC_0(VAR_6, "fsl-usb2-dr-v2.4"))
   VAR_7 = VAR_2;
  else if (FUNC_0(VAR_6, "fsl-usb2-dr-v2.5"))
   VAR_7 = VAR_3;
  else
   VAR_7 = VAR_5;

  if (VAR_7 > VAR_4)
   return VAR_7;
 }

 if (FUNC_0(VAR_6, "fsl,mpc5121-usb2-dr"))
  return VAR_5;

 if (FUNC_0(VAR_6, "fsl-usb2-mph")) {
  if (FUNC_0(VAR_6, "fsl-usb2-mph-v1.6"))
   VAR_7 = VAR_0;
  else if (FUNC_0(VAR_6, "fsl-usb2-mph-v2.2"))
   VAR_7 = VAR_1;
  else if (FUNC_0(VAR_6, "fsl-usb2-mph-v2.4"))
   VAR_7 = VAR_2;
  else if (FUNC_0(VAR_6, "fsl-usb2-mph-v2.5"))
   VAR_7 = VAR_3;
  else
   VAR_7 = VAR_5;
 }

 return VAR_7;
}
