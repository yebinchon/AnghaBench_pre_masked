
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_9__ {int action; } ;
struct TYPE_10__ {TYPE_4__ diagass; } ;
struct TYPE_6__ {scalar_t__ return_code; } ;
struct qeth_ipa_cmd {TYPE_5__ data; TYPE_1__ hdr; } ;
struct TYPE_7__ {int promisc_mode; } ;
struct qeth_card {TYPE_3__* gdev; TYPE_2__ info; } ;
typedef scalar_t__ __u16 ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;



 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (struct qeth_card*,int,char*,scalar_t__) ;
 int FUNC_3 (int,char*,int,int ) ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static int
FUNC_6(struct qeth_card *VAR_3, struct qeth_reply *VAR_4,
       unsigned long VAR_5)
{
 struct qeth_ipa_cmd *VAR_6;
 __u16 VAR_7;

 FUNC_1(VAR_3, 2, "diastrcb");

 VAR_6 = (struct qeth_ipa_cmd *)VAR_5;
 VAR_7 = VAR_6->hdr.return_code;
 if (VAR_7)
  FUNC_2(VAR_3, 2, "dxter%x", VAR_7);
 switch (VAR_6->data.diagass.action) {
 case 128:
  break;
 case 130:
  switch (VAR_7) {
  case 0:
  case 132:
   VAR_3->info.promisc_mode = VAR_1;
   FUNC_4(&VAR_3->gdev->dev, "The HiperSockets network "
    "traffic analyzer is deactivated\n");
   break;
  default:
   break;
  }
  break;
 case 129:
  switch (VAR_7) {
  case 0:
   VAR_3->info.promisc_mode = VAR_2;
   FUNC_4(&VAR_3->gdev->dev, "The HiperSockets network "
    "traffic analyzer is activated\n");
   break;
  case 133:
   FUNC_5(&VAR_3->gdev->dev, "The device is not "
    "authorized to run as a HiperSockets network "
    "traffic analyzer\n");
   break;
  case 131:
   FUNC_5(&VAR_3->gdev->dev, "A HiperSockets "
    "network traffic analyzer is already "
    "active in the HiperSockets LAN\n");
   break;
  default:
   break;
  }
  break;
 default:
  FUNC_3(2, "Unknown sniffer action (%#06x) on device %x\n",
     VAR_6->data.diagass.action, FUNC_0(VAR_3));
 }

 return VAR_7 ? -VAR_0 : 0;
}
