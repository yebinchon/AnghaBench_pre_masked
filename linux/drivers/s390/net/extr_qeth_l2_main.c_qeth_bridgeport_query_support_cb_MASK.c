
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qeth_reply {scalar_t__ param; } ;
struct TYPE_7__ {int supported_cmds; } ;
struct TYPE_8__ {TYPE_2__ query_cmds_supp; } ;
struct TYPE_9__ {TYPE_3__ data; } ;
struct TYPE_10__ {TYPE_4__ sbp; } ;
struct qeth_ipa_cmd {TYPE_5__ data; } ;
struct qeth_card {int dummy; } ;
struct TYPE_6__ {int supported; } ;
struct _qeth_sbp_cbctl {TYPE_1__ data; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,struct qeth_ipa_cmd*) ;

__attribute__((used)) static int FUNC_2(struct qeth_card *VAR_0,
 struct qeth_reply *VAR_1, unsigned long VAR_2)
{
 struct qeth_ipa_cmd *VAR_3 = (struct qeth_ipa_cmd *) VAR_2;
 struct _qeth_sbp_cbctl *VAR_4 = (struct _qeth_sbp_cbctl *)VAR_1->param;
 int VAR_5;

 FUNC_0(VAR_0, 2, "brqsupcb");
 VAR_5 = FUNC_1(VAR_0, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4->data.supported =
  VAR_3->data.sbp.data.query_cmds_supp.supported_cmds;
 return 0;
}
