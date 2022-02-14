
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_2__ {int return_code; } ;
struct qeth_ipa_cmd {TYPE_1__ hdr; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





__attribute__((used)) static int FUNC_0(struct qeth_card *VAR_4, struct qeth_reply *VAR_5,
          unsigned long VAR_6)
{
 struct qeth_ipa_cmd *VAR_7 = (struct qeth_ipa_cmd *) VAR_6;

 switch (VAR_7->hdr.return_code) {
 case 128:
  return 0;
 case 131:
  return -VAR_0;
 case 129:
  return -VAR_3;
 case 130:
  return -VAR_2;
 default:
  return -VAR_1;
 }
}
