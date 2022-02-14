
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_vpd {int protocol_identifier; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,char*,...) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

void FUNC_4(
 struct t10_vpd *VAR_1,
 unsigned char *VAR_2,
 int VAR_3)
{
 unsigned char VAR_4[VAR_0];
 int VAR_5;

 FUNC_0(VAR_4, 0, VAR_0);
 VAR_5 = FUNC_2(VAR_4, "T10 VPD Protocol Identifier: ");

 switch (VAR_1->protocol_identifier) {
 case 0x00:
  FUNC_2(VAR_4+VAR_5, "Fibre Channel\n");
  break;
 case 0x10:
  FUNC_2(VAR_4+VAR_5, "Parallel SCSI\n");
  break;
 case 0x20:
  FUNC_2(VAR_4+VAR_5, "SSA\n");
  break;
 case 0x30:
  FUNC_2(VAR_4+VAR_5, "IEEE 1394\n");
  break;
 case 0x40:
  FUNC_2(VAR_4+VAR_5, "SCSI Remote Direct Memory Access"
    " Protocol\n");
  break;
 case 0x50:
  FUNC_2(VAR_4+VAR_5, "Internet SCSI (iSCSI)\n");
  break;
 case 0x60:
  FUNC_2(VAR_4+VAR_5, "SAS Serial SCSI Protocol\n");
  break;
 case 0x70:
  FUNC_2(VAR_4+VAR_5, "Automation/Drive Interface Transport"
    " Protocol\n");
  break;
 case 0x80:
  FUNC_2(VAR_4+VAR_5, "AT Attachment Interface ATA/ATAPI\n");
  break;
 default:
  FUNC_2(VAR_4+VAR_5, "Unknown 0x%02x\n",
    VAR_1->protocol_identifier);
  break;
 }

 if (VAR_2)
  FUNC_3(VAR_2, VAR_4, VAR_3);
 else
  FUNC_1("%s", VAR_4);
}
