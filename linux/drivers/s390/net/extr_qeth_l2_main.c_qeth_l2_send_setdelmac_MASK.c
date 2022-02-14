
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mac; int mac_length; } ;
struct TYPE_4__ {TYPE_1__ setdelmac; } ;
struct qeth_ipa_cmd {TYPE_2__ data; } ;
struct qeth_cmd_buffer {int dummy; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_ipa_cmds { ____Placeholder_qeth_ipa_cmds } qeth_ipa_cmds ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int VAR_2 ;
 struct qeth_ipa_cmd* FUNC_2 (struct qeth_cmd_buffer*) ;
 int FUNC_3 (int ,int *) ;
 struct qeth_cmd_buffer* FUNC_4 (struct qeth_card*,int,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_5, __u8 *VAR_6,
      enum qeth_ipa_cmds VAR_7)
{
 struct qeth_ipa_cmd *VAR_8;
 struct qeth_cmd_buffer *VAR_9;

 FUNC_1(VAR_5, 2, "L2sdmac");
 VAR_9 = FUNC_4(VAR_5, VAR_7, VAR_2,
     FUNC_0(VAR_4));
 if (!VAR_9)
  return -VAR_0;
 VAR_8 = FUNC_2(VAR_9);
 VAR_8->data.setdelmac.mac_length = VAR_1;
 FUNC_3(VAR_8->data.setdelmac.mac, VAR_6);
 return FUNC_5(VAR_5, VAR_9, VAR_3, ((void*)0));
}
