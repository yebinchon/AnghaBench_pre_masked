
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {int negflavor; int sec_mskerberos; int sec_kerberos; int sec_ntlmssp; } ;
typedef enum securityEnum { ____Placeholder_securityEnum } securityEnum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

enum securityEnum
FUNC_0(struct TCP_Server_Info *VAR_6, enum securityEnum VAR_7)
{
 switch (VAR_6->negflavor) {
 case 136:
  switch (VAR_7) {
  case 133:
  case 129:
   return VAR_7;
  case 128:
   if (VAR_6->sec_ntlmssp &&
       (VAR_5 & VAR_3))
    return 129;
   if ((VAR_6->sec_kerberos || VAR_6->sec_mskerberos) &&
       (VAR_5 & VAR_0))
    return 133;

  default:
   return 128;
  }
 case 134:
  switch (VAR_7) {
  case 131:
  case 130:
   return VAR_7;
  case 128:
   if (VAR_5 & VAR_4)
    return 130;
   if (VAR_5 & VAR_2)
    return 131;
  default:
   break;
  }

 case 135:
  switch (VAR_7) {
  case 132:
   return VAR_7;
  case 128:
   if (VAR_5 & VAR_1)
    return 132;

  default:
   return 128;
  }
 default:
  return 128;
 }
}
