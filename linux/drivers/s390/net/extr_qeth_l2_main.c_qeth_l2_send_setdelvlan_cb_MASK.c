
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_6__ {scalar_t__ return_code; int command; } ;
struct TYPE_4__ {int vlan_id; } ;
struct TYPE_5__ {TYPE_1__ setdelvlan; } ;
struct qeth_ipa_cmd {TYPE_3__ hdr; TYPE_2__ data; } ;
struct qeth_card {int dummy; } ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (struct qeth_card*,int,char*,int ) ;
 int FUNC_3 (int,char*,int ,int ,scalar_t__) ;
 int FUNC_4 (struct qeth_card*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_0,
          struct qeth_reply *VAR_1,
          unsigned long VAR_2)
{
 struct qeth_ipa_cmd *VAR_3 = (struct qeth_ipa_cmd *) VAR_2;

 FUNC_1(VAR_0, 2, "L2sdvcb");
 if (VAR_3->hdr.return_code) {
  FUNC_3(2, "Error in processing VLAN %u on device %x: %#x.\n",
     VAR_3->data.setdelvlan.vlan_id,
     FUNC_0(VAR_0), VAR_3->hdr.return_code);
  FUNC_2(VAR_0, 2, "L2VL%4x", VAR_3->hdr.command);
 }
 return FUNC_4(VAR_0, VAR_3->hdr.return_code);
}
