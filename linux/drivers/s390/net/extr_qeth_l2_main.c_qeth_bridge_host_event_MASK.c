
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_ipacmd_addr_change_entry {int dummy; } ;
struct qeth_ipacmd_addr_change {int lost_event_mask; int num_entries; } ;
struct TYPE_4__ {int return_code; } ;
struct TYPE_3__ {struct qeth_ipacmd_addr_change addrchange; } ;
struct qeth_ipa_cmd {TYPE_2__ hdr; TYPE_1__ data; } ;
struct qeth_card {int event_wq; } ;
struct qeth_bridge_host_data {int worker; int hostevs; struct qeth_card* card; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (struct qeth_card*,int,char*,int) ;
 struct qeth_bridge_host_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct qeth_ipacmd_addr_change*,int) ;
 int VAR_1 ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct qeth_card *VAR_2,
     struct qeth_ipa_cmd *VAR_3)
{
 struct qeth_ipacmd_addr_change *VAR_4 =
   &VAR_3->data.addrchange;
 struct qeth_bridge_host_data *VAR_5;
 int VAR_6;

 FUNC_1(VAR_2, 2, "brhostev");
 if (VAR_3->hdr.return_code != 0x0000) {
  if (VAR_3->hdr.return_code == 0x0010) {
   if (VAR_4->lost_event_mask == 0x00)
    VAR_4->lost_event_mask = 0xff;
  } else {
   FUNC_2(VAR_2, 2, "BPHe%04x",
    VAR_3->hdr.return_code);
   return;
  }
 }
 VAR_6 = sizeof(struct qeth_ipacmd_addr_change_entry) *
      VAR_4->num_entries;
 VAR_5 = FUNC_3(sizeof(struct qeth_bridge_host_data) + VAR_6,
  VAR_0);
 if (!VAR_5) {
  FUNC_1(VAR_2, 2, "BPHalloc");
  return;
 }
 FUNC_0(&VAR_5->worker, VAR_1);
 VAR_5->card = VAR_2;
 FUNC_4(&VAR_5->hostevs, VAR_4,
   sizeof(struct qeth_ipacmd_addr_change) + VAR_6);
 FUNC_5(VAR_2->event_wq, &VAR_5->worker);
}
