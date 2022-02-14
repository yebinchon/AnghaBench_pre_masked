
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int command; int return_code; } ;
struct qeth_ipa_cmd {TYPE_1__ hdr; } ;
struct TYPE_7__ {int hwtrap; int chpid; } ;
struct qeth_card {TYPE_4__* discipline; TYPE_3__ info; TYPE_2__* gdev; int dev; int close_dev_work; } ;
struct TYPE_8__ {int (* control_event_handler ) (struct qeth_card*,struct qeth_ipa_cmd*) ;} ;
struct TYPE_6__ {int dev; } ;



 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 scalar_t__ FUNC_0 (struct qeth_ipa_cmd*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*,int,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int ,int ) ;
 int FUNC_6 (int *,char*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct qeth_ipa_cmd*,int ,struct qeth_card*) ;
 int FUNC_9 (struct qeth_card*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct qeth_card*,struct qeth_ipa_cmd*) ;

__attribute__((used)) static struct qeth_ipa_cmd *FUNC_12(struct qeth_card *VAR_4,
      struct qeth_ipa_cmd *VAR_5)
{
 FUNC_2(VAR_4, 5, "chkipad");

 if (FUNC_0(VAR_5)) {
  if (VAR_5->hdr.command != VAR_1 &&
      VAR_5->hdr.command != VAR_0 &&
      VAR_5->hdr.command != 134 &&
      VAR_5->hdr.command != VAR_2)
   FUNC_8(VAR_5, VAR_5->hdr.return_code, VAR_4);
  return VAR_5;
 }


 switch (VAR_5->hdr.command) {
 case 129:
  if (VAR_5->hdr.return_code == VAR_3) {
   FUNC_4(&VAR_4->gdev->dev,
    "Interface %s is down because the adjacent port is no longer in reflective relay mode\n",
    FUNC_1(VAR_4));
   FUNC_10(&VAR_4->close_dev_work);
  } else {
   FUNC_6(&VAR_4->gdev->dev,
     "The link for interface %s on CHPID 0x%X failed\n",
     FUNC_1(VAR_4), VAR_4->info.chpid);
   FUNC_8(VAR_5, VAR_5->hdr.return_code, VAR_4);
   FUNC_7(VAR_4->dev);
  }
  return ((void*)0);
 case 130:
  FUNC_5(&VAR_4->gdev->dev,
    "The link for %s on CHPID 0x%X has been restored\n",
    FUNC_1(VAR_4), VAR_4->info.chpid);
  if (VAR_4->info.hwtrap)
   VAR_4->info.hwtrap = 2;
  FUNC_9(VAR_4);
  return ((void*)0);
 case 132:
 case 131:
 case 135:
  if (VAR_4->discipline->control_event_handler(VAR_4, VAR_5))
   return VAR_5;
  return ((void*)0);
 case 134:
  return VAR_5;
 case 133:
  FUNC_2(VAR_4, 3, "irla");
  return ((void*)0);
 case 128:
  FUNC_2(VAR_4, 3, "urla");
  return ((void*)0);
 default:
  FUNC_3(2, "Received data is IPA but not a reply!\n");
  return VAR_5;
 }
}
