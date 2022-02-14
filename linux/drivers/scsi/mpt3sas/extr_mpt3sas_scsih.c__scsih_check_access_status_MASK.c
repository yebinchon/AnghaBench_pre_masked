
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int dummy; } ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,char*,scalar_t__,int ) ;

__attribute__((used)) static u8
FUNC_1(struct MPT3SAS_ADAPTER *VAR_0, u64 VAR_1,
 u16 VAR_2, u8 VAR_3)
{
 u8 VAR_4 = 1;
 char *VAR_5 = ((void*)0);

 switch (VAR_3) {
 case 145:
 case 140:
  VAR_4 = 0;
  break;
 case 142:
  VAR_5 = "sata capability failed";
  break;
 case 143:
  VAR_5 = "sata affiliation conflict";
  break;
 case 144:
  VAR_5 = "route not addressable";
  break;
 case 128:
  VAR_5 = "smp error not addressable";
  break;
 case 146:
  VAR_5 = "device blocked";
  break;
 case 141:
 case 130:
 case 139:
 case 137:
 case 136:
 case 138:
 case 132:
 case 134:
 case 131:
 case 129:
 case 133:
 case 135:
  VAR_5 = "sata initialization failed";
  break;
 default:
  VAR_5 = "unknown";
  break;
 }

 if (!VAR_4)
  return 0;

 FUNC_0(VAR_0, "discovery errors(%s): sas_address(0x%016llx), handle(0x%04x)\n",
  VAR_5, (u64)VAR_1, VAR_2);
 return VAR_4;
}
