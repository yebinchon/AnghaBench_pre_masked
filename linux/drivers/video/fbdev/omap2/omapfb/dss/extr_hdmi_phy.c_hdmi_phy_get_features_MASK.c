
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_phy_features {int dummy; } ;







 struct hdmi_phy_features const VAR_0 ;
 struct hdmi_phy_features const VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static const struct hdmi_phy_features *FUNC_1(void)
{
 switch (FUNC_0()) {
 case 130:
 case 129:
 case 131:
  return &VAR_0;

 case 128:
 case 132:
  return &VAR_1;

 default:
  return ((void*)0);
 }
}
