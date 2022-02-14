
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int addr; int addr_size; int cmd; } ;
struct TYPE_7__ {TYPE_1__ change_addr; } ;
struct TYPE_8__ {TYPE_2__ data; } ;
struct TYPE_9__ {TYPE_3__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_4__ data; } ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {TYPE_5__* dev; } ;
struct TYPE_10__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (int ) ;
 struct qeth_ipa_cmd* FUNC_2 (struct qeth_cmd_buffer*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 struct qeth_cmd_buffer* FUNC_4 (struct qeth_card*,int ,int ) ;
 int FUNC_5 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_5 ;

int FUNC_6(struct qeth_card *VAR_6)
{
 int VAR_7;
 struct qeth_cmd_buffer *VAR_8;
 struct qeth_ipa_cmd *VAR_9;

 FUNC_0(VAR_6, 4, "chgmac");

 VAR_8 = FUNC_4(VAR_6, VAR_3,
       FUNC_1(VAR_4));
 if (!VAR_8)
  return -VAR_1;
 VAR_9 = FUNC_2(VAR_8);
 VAR_9->data.setadapterparms.data.change_addr.cmd = VAR_0;
 VAR_9->data.setadapterparms.data.change_addr.addr_size = VAR_2;
 FUNC_3(VAR_9->data.setadapterparms.data.change_addr.addr,
   VAR_6->dev->dev_addr);
 VAR_7 = FUNC_5(VAR_6, VAR_8, VAR_5,
          ((void*)0));
 return VAR_7;
}
