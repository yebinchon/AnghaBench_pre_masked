
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct TYPE_6__ {TYPE_2__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_3__ data; } ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_ipa_promisc_modes { ____Placeholder_qeth_ipa_promisc_modes } qeth_ipa_promisc_modes ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,int,char*,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct qeth_ipa_cmd* FUNC_3 (struct qeth_cmd_buffer*) ;
 struct qeth_cmd_buffer* FUNC_4 (struct qeth_card*,int ,int ) ;
 int FUNC_5 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_3 ;

void FUNC_6(struct qeth_card *VAR_4, bool VAR_5)
{
 enum qeth_ipa_promisc_modes VAR_6 = VAR_5 ? VAR_2 :
          VAR_1;
 struct qeth_cmd_buffer *VAR_7;
 struct qeth_ipa_cmd *VAR_8;

 FUNC_0(VAR_4, 4, "setprom");
 FUNC_1(VAR_4, 4, "mode:%x", VAR_6);

 VAR_7 = FUNC_4(VAR_4, VAR_0,
       FUNC_2(VAR_6));
 if (!VAR_7)
  return;
 VAR_8 = FUNC_3(VAR_7);
 VAR_8->data.setadapterparms.data.mode = VAR_6;
 FUNC_5(VAR_4, VAR_7, VAR_3, ((void*)0));
}
