
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_ipacmd_diagass {int subcmd; scalar_t__ subcmd_len; } ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_diags_cmds { ____Placeholder_qeth_diags_cmds } qeth_diags_cmds ;
struct TYPE_3__ {struct qeth_ipacmd_diagass diagass; } ;
struct TYPE_4__ {TYPE_1__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct qeth_cmd_buffer*) ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int ,int ,scalar_t__) ;

struct qeth_cmd_buffer *FUNC_2(struct qeth_card *VAR_4,
       enum qeth_diags_cmds VAR_5,
       unsigned int VAR_6)
{
 struct qeth_ipacmd_diagass *VAR_7;
 struct qeth_cmd_buffer *VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_2, VAR_3,
     VAR_0 + VAR_6);
 if (!VAR_8)
  return ((void*)0);

 VAR_7 = &FUNC_0(VAR_8)->data.diagass;
 VAR_7->subcmd_len = VAR_1 + VAR_6;
 VAR_7->subcmd = VAR_5;
 return VAR_8;
}
