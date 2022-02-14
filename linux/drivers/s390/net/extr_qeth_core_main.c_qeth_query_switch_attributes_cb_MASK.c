
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_switch_info {int settings; int capabilities; } ;
struct qeth_reply {scalar_t__ param; } ;
struct qeth_query_switch_attributes {int settings; int capabilities; } ;
struct TYPE_4__ {struct qeth_query_switch_attributes query_switch_attributes; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct TYPE_6__ {TYPE_2__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_3__ data; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,int,char*,int ,int ) ;
 scalar_t__ FUNC_2 (struct qeth_ipa_cmd*) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_1,
    struct qeth_reply *VAR_2, unsigned long VAR_3)
{
 struct qeth_ipa_cmd *VAR_4 = (struct qeth_ipa_cmd *) VAR_3;
 struct qeth_query_switch_attributes *VAR_5;
 struct qeth_switch_info *VAR_6;

 FUNC_0(VAR_1, 2, "qswiatcb");
 if (FUNC_2(VAR_4))
  return -VAR_0;

 VAR_6 = (struct qeth_switch_info *)VAR_2->param;
 VAR_5 = &VAR_4->data.setadapterparms.data.query_switch_attributes;
 VAR_6->capabilities = VAR_5->capabilities;
 VAR_6->settings = VAR_5->settings;
 FUNC_1(VAR_1, 2, "%04x%04x", VAR_6->capabilities,
   VAR_6->settings);
 return 0;
}
