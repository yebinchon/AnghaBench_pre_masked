
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_11__ {int lan_type; int supported_cmds; } ;
struct TYPE_12__ {TYPE_4__ query_cmds_supp; } ;
struct TYPE_13__ {TYPE_5__ data; } ;
struct TYPE_14__ {TYPE_6__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_7__ data; } ;
struct TYPE_9__ {int supported_funcs; } ;
struct TYPE_10__ {TYPE_2__ adp; } ;
struct TYPE_8__ {int link_type; } ;
struct qeth_card {TYPE_3__ options; TYPE_1__ info; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,int,char*,int) ;
 scalar_t__ FUNC_2 (struct qeth_ipa_cmd*) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_1,
  struct qeth_reply *VAR_2, unsigned long VAR_3)
{
 struct qeth_ipa_cmd *VAR_4 = (struct qeth_ipa_cmd *) VAR_3;

 FUNC_0(VAR_1, 3, "quyadpcb");
 if (FUNC_2(VAR_4))
  return -VAR_0;

 if (VAR_4->data.setadapterparms.data.query_cmds_supp.lan_type & 0x7f) {
  VAR_1->info.link_type =
        VAR_4->data.setadapterparms.data.query_cmds_supp.lan_type;
  FUNC_1(VAR_1, 2, "lnk %d", VAR_1->info.link_type);
 }
 VAR_1->options.adp.supported_funcs =
  VAR_4->data.setadapterparms.data.query_cmds_supp.supported_cmds;
 return 0;
}
