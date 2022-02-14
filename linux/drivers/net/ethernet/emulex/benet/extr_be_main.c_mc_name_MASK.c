
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {int mc_type; } ;
__attribute__((used)) static char *FUNC_0(struct be_adapter *VAR_0)
{
 char *VAR_1 = "";

 switch (VAR_0->mc_type) {
 case 131:
  VAR_1 = "UMC";
  break;
 case 133:
  VAR_1 = "FLEX10";
  break;
 case 129:
  VAR_1 = "vNIC-1";
  break;
 case 130:
  VAR_1 = "nPAR";
  break;
 case 132:
  VAR_1 = "UFP";
  break;
 case 128:
  VAR_1 = "vNIC-2";
  break;
 default:
  VAR_1 = "";
 }

 return VAR_1;
}
