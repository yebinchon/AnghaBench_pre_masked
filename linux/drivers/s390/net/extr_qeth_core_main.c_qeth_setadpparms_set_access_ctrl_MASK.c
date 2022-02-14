
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_set_access_ctrl {int subcmd_code; } ;
struct TYPE_4__ {struct qeth_set_access_ctrl set_access_ctrl; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_5__ {TYPE_3__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_2__ data; } ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_ipa_isolation_modes { ____Placeholder_qeth_ipa_isolation_modes } qeth_ipa_isolation_modes ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,int,char*,int) ;
 int FUNC_2 (int ) ;
 struct qeth_ipa_cmd* FUNC_3 (struct qeth_cmd_buffer*) ;
 struct qeth_cmd_buffer* FUNC_4 (struct qeth_card*,int ,int ) ;
 int FUNC_5 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_4,
  enum qeth_ipa_isolation_modes VAR_5, int VAR_6)
{
 int VAR_7;
 struct qeth_cmd_buffer *VAR_8;
 struct qeth_ipa_cmd *VAR_9;
 struct qeth_set_access_ctrl *VAR_10;

 FUNC_0(VAR_4, 4, "setacctl");

 VAR_8 = FUNC_4(VAR_4, VAR_1,
       FUNC_2(VAR_3));
 if (!VAR_8)
  return -VAR_0;
 VAR_9 = FUNC_3(VAR_8);
 VAR_10 = &VAR_9->data.setadapterparms.data.set_access_ctrl;
 VAR_10->subcmd_code = VAR_5;

 VAR_7 = FUNC_5(VAR_4, VAR_8, VAR_2,
          &VAR_6);
 FUNC_1(VAR_4, 2, "rc=%d", VAR_7);
 return VAR_7;
}
