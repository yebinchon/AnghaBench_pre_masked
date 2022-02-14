
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptys2ethtool_config {unsigned long* supported; unsigned long* advertised; } ;
typedef enum ethtool_report { ____Placeholder_ethtool_report } ethtool_report ;





__attribute__((used)) static unsigned long *FUNC_0(struct ptys2ethtool_config *VAR_0,
          enum ethtool_report VAR_1)
{
 switch (VAR_1) {
 case 128:
  return VAR_0->supported;
 case 129:
  return VAR_0->advertised;
 }
 return ((void*)0);
}
