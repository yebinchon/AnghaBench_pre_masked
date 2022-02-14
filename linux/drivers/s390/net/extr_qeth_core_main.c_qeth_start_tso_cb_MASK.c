
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qeth_tso_start_data {int supported; int mss; } ;
struct qeth_reply {struct qeth_tso_start_data* param; } ;
struct TYPE_8__ {int supported; int mss; } ;
struct TYPE_5__ {TYPE_4__ tso; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_7__ {TYPE_2__ setassparms; } ;
struct qeth_ipa_cmd {TYPE_3__ data; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qeth_ipa_cmd*) ;

__attribute__((used)) static int FUNC_1(struct qeth_card *VAR_1, struct qeth_reply *VAR_2,
        unsigned long VAR_3)
{
 struct qeth_ipa_cmd *VAR_4 = (struct qeth_ipa_cmd *) VAR_3;
 struct qeth_tso_start_data *VAR_5 = VAR_2->param;

 if (FUNC_0(VAR_4))
  return -VAR_0;

 VAR_5->mss = VAR_4->data.setassparms.data.tso.mss;
 VAR_5->supported = VAR_4->data.setassparms.data.tso.supported;
 return 0;
}
