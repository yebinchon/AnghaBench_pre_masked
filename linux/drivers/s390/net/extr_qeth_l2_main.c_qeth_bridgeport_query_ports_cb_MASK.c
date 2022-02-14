
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct qeth_sbp_query_ports {int entry_length; scalar_t__ num_entries; TYPE_6__* entry; } ;
struct qeth_sbp_port_entry {int dummy; } ;
struct qeth_reply {scalar_t__ param; } ;
struct TYPE_7__ {struct qeth_sbp_query_ports query_ports; } ;
struct TYPE_8__ {TYPE_1__ data; } ;
struct TYPE_9__ {TYPE_2__ sbp; } ;
struct qeth_ipa_cmd {TYPE_3__ data; } ;
struct qeth_card {int dummy; } ;
struct TYPE_10__ {int * state; int * role; } ;
struct TYPE_11__ {TYPE_4__ qports; } ;
struct _qeth_sbp_cbctl {TYPE_5__ data; } ;
struct TYPE_12__ {int state; int role; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,int,char*,int) ;
 int FUNC_2 (struct qeth_card*,struct qeth_ipa_cmd*) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_1,
 struct qeth_reply *VAR_2, unsigned long VAR_3)
{
 struct qeth_ipa_cmd *VAR_4 = (struct qeth_ipa_cmd *) VAR_3;
 struct qeth_sbp_query_ports *VAR_5 = &VAR_4->data.sbp.data.query_ports;
 struct _qeth_sbp_cbctl *VAR_6 = (struct _qeth_sbp_cbctl *)VAR_2->param;
 int VAR_7;

 FUNC_0(VAR_1, 2, "brqprtcb");
 VAR_7 = FUNC_2(VAR_1, VAR_4);
 if (VAR_7)
  return VAR_7;

 if (VAR_5->entry_length != sizeof(struct qeth_sbp_port_entry)) {
  FUNC_1(VAR_1, 2, "SBPs%04x", VAR_5->entry_length);
  return -VAR_0;
 }

 if (VAR_5->num_entries > 0) {
  if (VAR_6->data.qports.role)
   *VAR_6->data.qports.role = VAR_5->entry[0].role;
  if (VAR_6->data.qports.state)
   *VAR_6->data.qports.state = VAR_5->entry[0].state;
 }
 return 0;
}
