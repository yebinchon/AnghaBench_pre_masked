
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ctlr_info {TYPE_4__* pdev; } ;
struct TYPE_7__ {int* CDB; int CDBLen; void* type_attr_dir; int Timeout; } ;
struct TYPE_5__ {int LunAddrBytes; } ;
struct TYPE_6__ {int SGList; TYPE_1__ LUN; void* SGTotal; scalar_t__ ReplyQueue; } ;
struct CommandList {TYPE_3__ Request; TYPE_2__ Header; int scsi_cmd; int cmd_type; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 void* VAR_2 ;





 void* VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (void*) ;

 size_t VAR_9 ;






 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;

 int VAR_13 ;

 void* FUNC_2 (int,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;



 void* FUNC_3 (int) ;
 int FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (TYPE_4__*,struct CommandList*,void*,size_t,int) ;
 int FUNC_6 (int ,unsigned char*,int) ;
 int FUNC_7 (size_t*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct CommandList *VAR_17, u8 VAR_18, struct ctlr_info *VAR_19,
 void *VAR_20, size_t VAR_21, u16 VAR_22, unsigned char *VAR_23,
 int VAR_24)
{
 enum dma_data_direction VAR_25 = VAR_7;

 VAR_17->cmd_type = VAR_4;
 VAR_17->scsi_cmd = VAR_13;
 VAR_17->Header.ReplyQueue = 0;
 if (VAR_20 != ((void*)0) && VAR_21 > 0) {
  VAR_17->Header.SGList = 1;
  VAR_17->Header.SGTotal = FUNC_3(1);
 } else {
  VAR_17->Header.SGList = 0;
  VAR_17->Header.SGTotal = FUNC_3(0);
 }
 FUNC_6(VAR_17->Header.LUN.LunAddrBytes, VAR_23, 8);

 if (VAR_24 == VAR_14) {
  switch (VAR_18) {
  case 136:

   if (VAR_22 & VAR_16) {
    VAR_17->Request.CDB[1] = 0x01;
    VAR_17->Request.CDB[2] = (VAR_22 & 0xff);
   }
   VAR_17->Request.CDBLen = 6;
   VAR_17->Request.type_attr_dir =
    FUNC_2(VAR_24, VAR_0, 129);
   VAR_17->Request.Timeout = 0;
   VAR_17->Request.CDB[0] = 136;
   VAR_17->Request.CDB[4] = VAR_21 & 0xFF;
   break;
  case 132:
   VAR_17->Request.CDBLen = 6;
   VAR_17->Request.type_attr_dir =
    FUNC_2(VAR_24, VAR_0, 129);
   VAR_17->Request.Timeout = 0;
   VAR_17->Request.CDB[0] = VAR_18;
   VAR_17->Request.CDB[1] = 1;
   VAR_17->Request.CDB[2] = 1;
   VAR_17->Request.CDB[3] = (VAR_21 >> 8) & 0xFF;
   VAR_17->Request.CDB[4] = VAR_21 & 0xFF;
   break;
  case 134:
  case 133:



   VAR_17->Request.CDBLen = 12;
   VAR_17->Request.type_attr_dir =
    FUNC_2(VAR_24, VAR_0, 129);
   VAR_17->Request.Timeout = 0;
   VAR_17->Request.CDB[0] = VAR_18;
   VAR_17->Request.CDB[6] = (VAR_21 >> 24) & 0xFF;
   VAR_17->Request.CDB[7] = (VAR_21 >> 16) & 0xFF;
   VAR_17->Request.CDB[8] = (VAR_21 >> 8) & 0xFF;
   VAR_17->Request.CDB[9] = VAR_21 & 0xFF;
   break;
  case 143:
   VAR_17->Request.CDBLen = 16;
   VAR_17->Request.type_attr_dir =
    FUNC_2(VAR_24, VAR_0, 129);
   VAR_17->Request.Timeout = 0;

   VAR_17->Request.CDB[0] = VAR_2;
   VAR_17->Request.CDB[6] = 143;
   break;
  case 140:
   VAR_17->Request.CDBLen = 16;
   VAR_17->Request.type_attr_dir =
     FUNC_2(VAR_24,
      VAR_0, 128);
   VAR_17->Request.Timeout = 0;
   VAR_17->Request.CDB[0] = VAR_3;
   VAR_17->Request.CDB[6] = 140;
   break;
  case 139:
   VAR_17->Request.CDBLen = 12;
   VAR_17->Request.type_attr_dir =
     FUNC_2(VAR_24,
      VAR_0, 128);
   VAR_17->Request.Timeout = 0;
   VAR_17->Request.CDB[0] = VAR_3;
   VAR_17->Request.CDB[6] = VAR_1;
   VAR_17->Request.CDB[7] = (VAR_21 >> 8) & 0xFF;
   VAR_17->Request.CDB[8] = VAR_21 & 0xFF;
   break;
  case 131:
   VAR_17->Request.CDBLen = 6;
   VAR_17->Request.type_attr_dir =
    FUNC_2(VAR_24, VAR_0, 130);
   VAR_17->Request.Timeout = 0;
   break;
  case 137:
   VAR_17->Request.CDBLen = 12;
   VAR_17->Request.type_attr_dir =
    FUNC_2(VAR_24, VAR_0, 129);
   VAR_17->Request.Timeout = 0;
   VAR_17->Request.CDB[0] = VAR_9;
   VAR_17->Request.CDB[1] = VAR_18;
   VAR_17->Request.CDB[6] = (VAR_21 >> 24) & 0xFF;
   VAR_17->Request.CDB[7] = (VAR_21 >> 16) & 0xFF;
   VAR_17->Request.CDB[8] = (VAR_21 >> 8) & 0xFF;
   VAR_17->Request.CDB[9] = VAR_21 & 0xFF;
   break;
  case 144:
   VAR_17->Request.CDBLen = 10;
   VAR_17->Request.type_attr_dir =
    FUNC_2(VAR_24, VAR_0, 129);
   VAR_17->Request.Timeout = 0;
   VAR_17->Request.CDB[0] = VAR_2;
   VAR_17->Request.CDB[6] = 144;
   VAR_17->Request.CDB[7] = (VAR_21 >> 16) & 0xFF;
   VAR_17->Request.CDB[8] = (VAR_21 >> 8) & 0xFF;
   break;
  case 145:
   VAR_17->Request.CDBLen = 10;
   VAR_17->Request.type_attr_dir =
    FUNC_2(VAR_24, VAR_0, 129);
   VAR_17->Request.Timeout = 0;
   VAR_17->Request.CDB[0] = VAR_2;
   VAR_17->Request.CDB[6] = 145;
   VAR_17->Request.CDB[7] = (VAR_21 >> 16) & 0xFF;
   VAR_17->Request.CDB[8] = (VAR_21 >> 8) & 0XFF;
   break;
  case 141:
   VAR_17->Request.CDBLen = 10;
   VAR_17->Request.type_attr_dir =
    FUNC_2(VAR_24, VAR_0, 129);
   VAR_17->Request.Timeout = 0;
   VAR_17->Request.CDB[0] = VAR_2;
   VAR_17->Request.CDB[6] = 141;
   VAR_17->Request.CDB[7] = (VAR_21 >> 16) & 0xFF;
   VAR_17->Request.CDB[8] = (VAR_21 >> 8) & 0XFF;
   break;
  case 142:
   VAR_17->Request.CDBLen = 10;
   VAR_17->Request.type_attr_dir =
    FUNC_2(VAR_24, VAR_0, 129);
   VAR_17->Request.Timeout = 0;
   VAR_17->Request.CDB[0] = VAR_2;
   VAR_17->Request.CDB[6] = 142;
   VAR_17->Request.CDB[7] = (VAR_21 >> 16) & 0xFF;
   VAR_17->Request.CDB[8] = (VAR_21 >> 8) & 0XFF;
   break;
  case 146:
   VAR_17->Request.CDBLen = 10;
   VAR_17->Request.type_attr_dir =
    FUNC_2(VAR_24, VAR_0, 129);
   VAR_17->Request.Timeout = 0;
   VAR_17->Request.CDB[0] = VAR_2;
   VAR_17->Request.CDB[1] = 0;
   VAR_17->Request.CDB[2] = 0;
   VAR_17->Request.CDB[3] = 0;
   VAR_17->Request.CDB[4] = 0;
   VAR_17->Request.CDB[5] = 0;
   VAR_17->Request.CDB[6] = 146;
   VAR_17->Request.CDB[7] = (VAR_21 >> 16) & 0xFF;
   VAR_17->Request.CDB[8] = (VAR_21 >> 8) & 0XFF;
   VAR_17->Request.CDB[9] = 0;
   break;
  default:
   FUNC_4(&VAR_19->pdev->dev, "unknown command 0x%c\n", VAR_18);
   FUNC_0();
  }
 } else if (VAR_24 == VAR_15) {
  switch (VAR_18) {

  case 135:
   VAR_17->Request.CDBLen = 16;
   VAR_17->Request.type_attr_dir =
    FUNC_2(VAR_24, VAR_0, 130);
   VAR_17->Request.Timeout = 0;
   FUNC_7(&VAR_17->Request.CDB[0], 0, sizeof(VAR_17->Request.CDB));
   VAR_17->Request.CDB[0] = VAR_10;
   VAR_17->Request.CDB[1] = VAR_12;

   VAR_17->Request.CDB[4] = 0x00;
   VAR_17->Request.CDB[5] = 0x00;
   VAR_17->Request.CDB[6] = 0x00;
   VAR_17->Request.CDB[7] = 0x00;
   break;
  case 138:
   VAR_17->Request.CDBLen = 16;
   VAR_17->Request.type_attr_dir =
    FUNC_2(VAR_24, VAR_0, 130);
   VAR_17->Request.Timeout = 0;
   FUNC_7(&VAR_17->Request.CDB[0], 0, sizeof(VAR_17->Request.CDB));
   VAR_17->Request.CDB[0] = VAR_18;
   VAR_17->Request.CDB[1] = VAR_11;


   VAR_17->Request.CDB[4] = 0x00;
   VAR_17->Request.CDB[5] = 0x00;
   VAR_17->Request.CDB[6] = 0x00;
   VAR_17->Request.CDB[7] = 0x00;
   break;
  default:
   FUNC_4(&VAR_19->pdev->dev, "unknown message type %d\n",
    VAR_18);
   FUNC_0();
  }
 } else {
  FUNC_4(&VAR_19->pdev->dev, "unknown command type %d\n", VAR_24);
  FUNC_0();
 }

 switch (FUNC_1(VAR_17->Request.type_attr_dir)) {
 case 129:
  VAR_25 = VAR_6;
  break;
 case 128:
  VAR_25 = VAR_8;
  break;
 case 130:
  VAR_25 = VAR_7;
  break;
 default:
  VAR_25 = VAR_5;
 }
 if (FUNC_5(VAR_19->pdev, VAR_17, VAR_20, VAR_21, VAR_25))
  return -1;
 return 0;
}
