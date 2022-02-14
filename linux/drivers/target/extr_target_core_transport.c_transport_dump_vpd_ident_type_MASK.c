
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_vpd {int device_identifier_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,char*,...) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;

int FUNC_5(
 struct t10_vpd *VAR_2,
 unsigned char *VAR_3,
 int VAR_4)
{
 unsigned char VAR_5[VAR_1];
 int VAR_6 = 0;
 int VAR_7;

 FUNC_0(VAR_5, 0, VAR_1);
 VAR_7 = FUNC_2(VAR_5, "T10 VPD Identifier Type: ");

 switch (VAR_2->device_identifier_type) {
 case 0x00:
  FUNC_2(VAR_5+VAR_7, "Vendor specific\n");
  break;
 case 0x01:
  FUNC_2(VAR_5+VAR_7, "T10 Vendor ID based\n");
  break;
 case 0x02:
  FUNC_2(VAR_5+VAR_7, "EUI-64 based\n");
  break;
 case 0x03:
  FUNC_2(VAR_5+VAR_7, "NAA\n");
  break;
 case 0x04:
  FUNC_2(VAR_5+VAR_7, "Relative target port identifier\n");
  break;
 case 0x08:
  FUNC_2(VAR_5+VAR_7, "SCSI name string\n");
  break;
 default:
  FUNC_2(VAR_5+VAR_7, "Unsupported: 0x%02x\n",
    VAR_2->device_identifier_type);
  VAR_6 = -VAR_0;
  break;
 }

 if (VAR_3) {
  if (VAR_4 < FUNC_3(VAR_5)+1)
   return -VAR_0;
  FUNC_4(VAR_3, VAR_5, VAR_4);
 } else {
  FUNC_1("%s", VAR_5);
 }

 return VAR_6;
}
