
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum fsl_usb2_phy_modes { ____Placeholder_fsl_usb2_phy_modes } fsl_usb2_phy_modes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static enum fsl_usb2_phy_modes FUNC_1(const char *VAR_6)
{
 if (!VAR_6)
  return VAR_0;
 if (!FUNC_0(VAR_6, "ulpi"))
  return VAR_2;
 if (!FUNC_0(VAR_6, "utmi"))
  return VAR_3;
 if (!FUNC_0(VAR_6, "utmi_wide"))
  return VAR_5;
 if (!FUNC_0(VAR_6, "utmi_dual"))
  return VAR_4;
 if (!FUNC_0(VAR_6, "serial"))
  return VAR_1;

 return VAR_0;
}
