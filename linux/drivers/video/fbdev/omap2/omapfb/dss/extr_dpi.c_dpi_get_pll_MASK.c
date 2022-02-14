
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_pll {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
 struct dss_pll* FUNC_0 (char*) ;
 int FUNC_1 () ;

__attribute__((used)) static struct dss_pll *FUNC_2(enum omap_channel VAR_0)
{





 switch (FUNC_1()) {
 case 138:
 case 137:
 case 136:
 case 135:
 case 141:
 case 140:
  return ((void*)0);

 case 133:
 case 132:
 case 134:
  switch (VAR_0) {
  case 130:
   return FUNC_0("dsi0");
  case 129:
   return FUNC_0("dsi1");
  default:
   return ((void*)0);
  }

 case 131:
  switch (VAR_0) {
  case 130:
   return FUNC_0("dsi0");
  case 128:
   return FUNC_0("dsi1");
  default:
   return ((void*)0);
  }

 case 139:
  switch (VAR_0) {
  case 130:
  case 129:
   return FUNC_0("video0");
  case 128:
   return FUNC_0("video1");
  default:
   return ((void*)0);
  }

 default:
  return ((void*)0);
 }
}
