
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_sbp_state_change {int entry_length; int num_entries; } ;
struct qeth_sbp_port_entry {int dummy; } ;
struct TYPE_4__ {struct qeth_sbp_state_change state_change; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct TYPE_6__ {TYPE_2__ sbp; } ;
struct qeth_ipa_cmd {TYPE_3__ data; } ;
struct qeth_card {int event_wq; } ;
struct qeth_bridge_state_data {int worker; int qports; struct qeth_card* card; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (struct qeth_card*,int,char*,int) ;
 struct qeth_bridge_state_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct qeth_sbp_state_change*,int) ;
 int VAR_1 ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct qeth_card *VAR_2,
     struct qeth_ipa_cmd *VAR_3)
{
 struct qeth_sbp_state_change *VAR_4 =
   &VAR_3->data.sbp.data.state_change;
 struct qeth_bridge_state_data *VAR_5;
 int VAR_6;

 FUNC_1(VAR_2, 2, "brstchng");
 if (VAR_4->entry_length != sizeof(struct qeth_sbp_port_entry)) {
  FUNC_2(VAR_2, 2, "BPsz%04x", VAR_4->entry_length);
  return;
 }
 VAR_6 = sizeof(struct qeth_sbp_port_entry) * VAR_4->num_entries;
 VAR_5 = FUNC_3(sizeof(struct qeth_bridge_state_data) + VAR_6,
  VAR_0);
 if (!VAR_5) {
  FUNC_1(VAR_2, 2, "BPSalloc");
  return;
 }
 FUNC_0(&VAR_5->worker, VAR_1);
 VAR_5->card = VAR_2;
 FUNC_4(&VAR_5->qports, VAR_4,
   sizeof(struct qeth_sbp_state_change) + VAR_6);
 FUNC_5(VAR_2->event_wq, &VAR_5->worker);
}
