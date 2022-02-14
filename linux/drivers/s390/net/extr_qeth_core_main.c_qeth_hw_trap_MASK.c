
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_trap_id {int dummy; } ;
struct TYPE_3__ {int type; int action; int options; int ext; scalar_t__ cdata; } ;
struct TYPE_4__ {TYPE_1__ diagass; } ;
struct qeth_ipa_cmd {TYPE_2__ data; } ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_diags_trap_action { ____Placeholder_qeth_diags_trap_action } qeth_diags_trap_action ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_1 ;



 struct qeth_ipa_cmd* FUNC_1 (struct qeth_cmd_buffer*) ;
 struct qeth_cmd_buffer* FUNC_2 (struct qeth_card*,int ,int) ;
 int FUNC_3 (struct qeth_card*,struct qeth_trap_id*) ;
 int VAR_2 ;
 int FUNC_4 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

int FUNC_5(struct qeth_card *VAR_3, enum qeth_diags_trap_action VAR_4)
{
 struct qeth_cmd_buffer *VAR_5;
 struct qeth_ipa_cmd *VAR_6;

 FUNC_0(VAR_3, 2, "diagtrap");
 VAR_5 = FUNC_2(VAR_3, VAR_1, 64);
 if (!VAR_5)
  return -VAR_0;
 VAR_6 = FUNC_1(VAR_5);
 VAR_6->data.diagass.type = 1;
 VAR_6->data.diagass.action = VAR_4;
 switch (VAR_4) {
 case 130:
  VAR_6->data.diagass.options = 0x0003;
  VAR_6->data.diagass.ext = 0x00010000 +
   sizeof(struct qeth_trap_id);
  FUNC_3(VAR_3,
   (struct qeth_trap_id *)VAR_6->data.diagass.cdata);
  break;
 case 128:
  VAR_6->data.diagass.options = 0x0001;
  break;
 case 129:
  break;
 }
 return FUNC_4(VAR_3, VAR_5, VAR_2, ((void*)0));
}
