
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct qeth_set_access_ctrl {int subcmd_code; } ;
struct qeth_reply {scalar_t__ param; } ;
struct TYPE_14__ {scalar_t__ return_code; } ;
struct TYPE_9__ {int return_code; } ;
struct TYPE_8__ {struct qeth_set_access_ctrl set_access_ctrl; } ;
struct TYPE_10__ {TYPE_2__ hdr; TYPE_1__ data; } ;
struct TYPE_11__ {TYPE_3__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_7__ hdr; TYPE_4__ data; } ;
struct TYPE_13__ {int prev_isolation; int isolation; } ;
struct qeth_card {TYPE_6__ options; TYPE_5__* gdev; } ;
struct TYPE_12__ {int dev; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (struct qeth_card*,int,char*,int) ;
 int FUNC_3 (int,char*,int ,...) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct qeth_ipa_cmd*) ;

__attribute__((used)) static int FUNC_8(struct qeth_card *VAR_2,
  struct qeth_reply *VAR_3, unsigned long VAR_4)
{
 struct qeth_ipa_cmd *VAR_5 = (struct qeth_ipa_cmd *) VAR_4;
 struct qeth_set_access_ctrl *VAR_6;
 int VAR_7 = *(int *)VAR_3->param;

 FUNC_1(VAR_2, 4, "setaccb");
 if (VAR_5->hdr.return_code)
  return -VAR_0;
 FUNC_7(VAR_5);

 VAR_6 = &VAR_5->data.setadapterparms.data.set_access_ctrl;
 FUNC_2(VAR_2, 2, "rc=%d",
   VAR_5->data.setadapterparms.hdr.return_code);
 if (VAR_5->data.setadapterparms.hdr.return_code !=
      128)
  FUNC_3(3, "ERR:SET_ACCESS_CTRL(%#x) on device %x: %#x\n",
     VAR_6->subcmd_code, FUNC_0(VAR_2),
     VAR_5->data.setadapterparms.hdr.return_code);
 switch (VAR_5->data.setadapterparms.hdr.return_code) {
 case 128:
  if (VAR_2->options.isolation == VAR_1) {
   FUNC_5(&VAR_2->gdev->dev,
       "QDIO data connection isolation is deactivated\n");
  } else {
   FUNC_5(&VAR_2->gdev->dev,
       "QDIO data connection isolation is activated\n");
  }
  break;
 case 134:
  FUNC_3(2, "QDIO data connection isolation on device %x already deactivated\n",
     FUNC_0(VAR_2));
  if (VAR_7)
   VAR_2->options.isolation = VAR_2->options.prev_isolation;
  break;
 case 135:
  FUNC_3(2, "QDIO data connection isolation on device %x already activated\n",
     FUNC_0(VAR_2));
  if (VAR_7)
   VAR_2->options.isolation = VAR_2->options.prev_isolation;
  break;
 case 132:
  FUNC_4(&VAR_2->gdev->dev, "Adapter does not "
   "support QDIO data connection isolation\n");
  break;
 case 133:
  FUNC_4(&VAR_2->gdev->dev,
   "Adapter is dedicated. "
   "QDIO data connection isolation not supported\n");
  if (VAR_7)
   VAR_2->options.isolation = VAR_2->options.prev_isolation;
  break;
 case 136:
  FUNC_4(&VAR_2->gdev->dev,
   "TSO does not permit QDIO data connection isolation\n");
  if (VAR_7)
   VAR_2->options.isolation = VAR_2->options.prev_isolation;
  break;
 case 129:
  FUNC_4(&VAR_2->gdev->dev, "The adjacent switch port does not "
   "support reflective relay mode\n");
  if (VAR_7)
   VAR_2->options.isolation = VAR_2->options.prev_isolation;
  break;
 case 130:
  FUNC_4(&VAR_2->gdev->dev, "The reflective relay mode cannot be "
     "enabled at the adjacent switch port");
  if (VAR_7)
   VAR_2->options.isolation = VAR_2->options.prev_isolation;
  break;
 case 131:
  FUNC_6(&VAR_2->gdev->dev, "Turning off reflective relay mode "
     "at the adjacent switch failed\n");
  break;
 default:

  if (VAR_7)
   VAR_2->options.isolation = VAR_2->options.prev_isolation;
  break;
 }
 return (VAR_5->hdr.return_code) ? -VAR_0 : 0;
}
