
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u8 ;
typedef int __u16 ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,size_t,char*,char*,char*,int,int) ;

__attribute__((used)) static void FUNC_1(__u8 VAR_1, __u8 VAR_2,
       __u16 VAR_3, __u16 VAR_4,
       __u16 VAR_5, char *VAR_6, size_t VAR_7)
{
 char *VAR_8;

 switch (VAR_3 >> 8) {
 case 140:
  VAR_8 = "Device";
  break;
 case 142:
  VAR_8 = "Configuration";
  break;
 case 128:
  VAR_8 = "String";
  break;
 case 136:
  VAR_8 = "Interface";
  break;
 case 137:
  VAR_8 = "Endpoint";
  break;
 case 138:
  VAR_8 = "Device Qualifier";
  break;
 case 132:
  VAR_8 = "Other Speed Config";
  break;
 case 134:
  VAR_8 = "Interface Power";
  break;
 case 133:
  VAR_8 = "OTG";
  break;
 case 141:
  VAR_8 = "Debug";
  break;
 case 135:
  VAR_8 = "Interface Association";
  break;
 case 143:
  VAR_8 = "BOS";
  break;
 case 139:
  VAR_8 = "Device Capability";
  break;
 case 131:
  VAR_8 = "Pipe Usage";
  break;
 case 129:
  VAR_8 = "SS Endpoint Companion";
  break;
 case 130:
  VAR_8 = "SSP Isochronous Endpoint Companion";
  break;
 default:
  VAR_8 = "UNKNOWN";
  break;
 }

 FUNC_0(VAR_6, VAR_7, "%s %s Descriptor(Index = %d, Length = %d)",
  VAR_2 == VAR_0 ? "Get" : "Set",
  VAR_8, VAR_3 & 0xff, VAR_5);
}
