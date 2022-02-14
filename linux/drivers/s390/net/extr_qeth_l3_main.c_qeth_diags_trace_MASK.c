
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int action; int type; } ;
struct TYPE_4__ {TYPE_1__ diagass; } ;
struct qeth_ipa_cmd {TYPE_2__ data; } ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_diags_trace_cmds { ____Placeholder_qeth_diags_trace_cmds } qeth_diags_trace_cmds ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct qeth_ipa_cmd* FUNC_1 (struct qeth_cmd_buffer*) ;
 int VAR_3 ;
 struct qeth_cmd_buffer* FUNC_2 (struct qeth_card*,int ,int ) ;
 int FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct qeth_card *VAR_4, enum qeth_diags_trace_cmds VAR_5)
{
 struct qeth_cmd_buffer *VAR_6;
 struct qeth_ipa_cmd *VAR_7;

 FUNC_0(VAR_4, 2, "diagtrac");

 VAR_6 = FUNC_2(VAR_4, VAR_1, 0);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = FUNC_1(VAR_6);
 VAR_7->data.diagass.type = VAR_2;
 VAR_7->data.diagass.action = VAR_5;
 return FUNC_3(VAR_4, VAR_6, VAR_3, ((void*)0));
}
