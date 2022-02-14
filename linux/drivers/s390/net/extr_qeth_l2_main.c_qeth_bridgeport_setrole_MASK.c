
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_cmd_buffer {int dummy; } ;
struct TYPE_3__ {int supported_funcs; } ;
struct TYPE_4__ {TYPE_1__ sbp; } ;
struct qeth_card {TYPE_2__ options; } ;
typedef enum qeth_sbp_roles { ____Placeholder_qeth_sbp_roles } qeth_sbp_roles ;
typedef enum qeth_ipa_sbp_cmd { ____Placeholder_qeth_ipa_sbp_cmd } qeth_ipa_sbp_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;



 unsigned int FUNC_1 (int ) ;
 int VAR_6 ;
 struct qeth_cmd_buffer* FUNC_2 (struct qeth_card*,int,unsigned int) ;
 int FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_7 ;

int FUNC_4(struct qeth_card *VAR_8, enum qeth_sbp_roles VAR_9)
{
 struct qeth_cmd_buffer *VAR_10;
 enum qeth_ipa_sbp_cmd VAR_11;
 unsigned int VAR_12 = 0;

 FUNC_0(VAR_8, 2, "brsetrol");
 switch (VAR_9) {
 case 130:
  VAR_11 = VAR_3;
  break;
 case 129:
  VAR_11 = VAR_4;
  VAR_12 = FUNC_1(VAR_7);
  break;
 case 128:
  VAR_11 = VAR_5;
  break;
 default:
  return -VAR_0;
 }
 if (!(VAR_8->options.sbp.supported_funcs & VAR_11))
  return -VAR_2;
 VAR_10 = FUNC_2(VAR_8, VAR_11, VAR_12);
 if (!VAR_10)
  return -VAR_1;

 return FUNC_3(VAR_8, VAR_10, VAR_6, ((void*)0));
}
