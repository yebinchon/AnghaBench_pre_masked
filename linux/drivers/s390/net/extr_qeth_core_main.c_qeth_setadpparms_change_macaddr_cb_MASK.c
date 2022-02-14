
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
struct TYPE_8__ {int addr; } ;
struct TYPE_9__ {TYPE_3__ change_addr; } ;
struct TYPE_6__ {int flags; } ;
struct qeth_ipacmd_setadpparms {TYPE_4__ data; TYPE_1__ hdr; } ;
struct TYPE_10__ {struct qeth_ipacmd_setadpparms setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_5__ data; } ;
struct qeth_card {TYPE_2__* dev; } ;
struct TYPE_7__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*,int,char*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct qeth_ipa_cmd*) ;

__attribute__((used)) static int FUNC_7(struct qeth_card *VAR_3,
  struct qeth_reply *VAR_4, unsigned long VAR_5)
{
 struct qeth_ipa_cmd *VAR_6 = (struct qeth_ipa_cmd *) VAR_5;
 struct qeth_ipacmd_setadpparms *VAR_7;

 FUNC_3(VAR_3, 4, "chgmaccb");
 if (FUNC_6(VAR_6))
  return -VAR_1;

 VAR_7 = &VAR_6->data.setadapterparms;
 if (!FUNC_5(VAR_7->data.change_addr.addr))
  return -VAR_0;

 if (FUNC_0(VAR_3) && FUNC_1(VAR_3) && !FUNC_2(VAR_3) &&
     !(VAR_7->hdr.flags & VAR_2))
  return -VAR_0;

 FUNC_4(VAR_3->dev->dev_addr, VAR_7->data.change_addr.addr);
 return 0;
}
