
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {int sec_mskerberos; int sec_kerberos; int sec_ntlmssp; } ;
typedef enum securityEnum { ____Placeholder_securityEnum } securityEnum ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;

enum securityEnum
FUNC_0(struct TCP_Server_Info *VAR_3, enum securityEnum VAR_4)
{
 switch (VAR_4) {
 case 131:
 case 129:
  return VAR_4;
 case 130:
  return 129;
 case 128:
  if (VAR_3->sec_ntlmssp &&
   (VAR_2 & VAR_1))
   return 129;
  if ((VAR_3->sec_kerberos || VAR_3->sec_mskerberos) &&
   (VAR_2 & VAR_0))
   return 131;

 default:
  return 128;
 }
}
