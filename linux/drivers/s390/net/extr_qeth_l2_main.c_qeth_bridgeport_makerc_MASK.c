
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int command_code; int return_code; } ;
struct qeth_ipacmd_setbridgeport {TYPE_3__ hdr; } ;
struct TYPE_6__ {int return_code; } ;
struct TYPE_5__ {struct qeth_ipacmd_setbridgeport sbp; } ;
struct qeth_ipa_cmd {TYPE_2__ hdr; TYPE_1__ data; } ;
struct qeth_card {TYPE_4__* gdev; } ;
typedef enum qeth_ipa_sbp_cmd { ____Placeholder_qeth_ipa_sbp_cmd } qeth_ipa_sbp_cmd ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*,int,char*,int) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_7,
      struct qeth_ipa_cmd *VAR_8)
{
 struct qeth_ipacmd_setbridgeport *VAR_9 = &VAR_8->data.sbp;
 enum qeth_ipa_sbp_cmd VAR_10 = VAR_9->hdr.command_code;
 u16 VAR_11 = VAR_8->hdr.return_code;
 u16 VAR_12 = VAR_9->hdr.return_code;
 int VAR_13;

 if (VAR_11 == 131 && VAR_12 == 131)
  return 0;

 if ((FUNC_0(VAR_7) && VAR_11 == 131) ||
     (!FUNC_0(VAR_7) && VAR_11 == VAR_12)) {
  switch (VAR_12) {
  case 131:
   VAR_13 = 0;
   break;
  case 147:
  case 130:
   VAR_13 = -VAR_5;
   break;
  case 133:
  case 140:
   VAR_13 = -VAR_4;
   FUNC_2(&VAR_7->gdev->dev,
 "The device is not configured as a Bridge Port\n");
   break;
  case 132:
  case 139:
   VAR_13 = -VAR_6;
   FUNC_2(&VAR_7->gdev->dev,
 "A Bridge Port is already configured by a different operating system\n");
   break;
  case 138:
  case 145:
   switch (VAR_10) {
   case 129:
    VAR_13 = -VAR_2;
    FUNC_2(&VAR_7->gdev->dev,
 "The LAN already has a primary Bridge Port\n");
    break;
   case 128:
    VAR_13 = -VAR_1;
    FUNC_2(&VAR_7->gdev->dev,
 "The device is already a primary Bridge Port\n");
    break;
   default:
    VAR_13 = -VAR_3;
   }
   break;
  case 136:
  case 143:
   VAR_13 = -VAR_1;
   FUNC_2(&VAR_7->gdev->dev,
 "The device is already a secondary Bridge Port\n");
   break;
  case 135:
  case 142:
   VAR_13 = -VAR_2;
   FUNC_2(&VAR_7->gdev->dev,
 "The LAN cannot have more secondary Bridge Ports\n");
   break;
  case 137:
  case 144:
   VAR_13 = -VAR_1;
   FUNC_2(&VAR_7->gdev->dev,
 "The device is already a primary Bridge Port\n");
   break;
  case 134:
  case 141:
   VAR_13 = -VAR_0;
   FUNC_2(&VAR_7->gdev->dev,
 "The device is not authorized to be a Bridge Port\n");
   break;
  default:
   VAR_13 = -VAR_3;
  }
 } else {
  switch (VAR_11) {
  case 146:
   VAR_13 = -VAR_5;
   break;
  case 130:
   VAR_13 = -VAR_5;
   break;
  default:
   VAR_13 = -VAR_3;
  }
 }

 if (VAR_13) {
  FUNC_1(VAR_7, 2, "SBPi%04x", VAR_11);
  FUNC_1(VAR_7, 2, "SBPc%04x", VAR_12);
 }
 return VAR_13;
}
