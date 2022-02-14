
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_8__ {int* model; } ;
struct TYPE_6__ {int tag; } ;
struct TYPE_5__ {scalar_t__* plant; int tag; } ;
struct qeth_node_desc {TYPE_4__ nd3; TYPE_2__ nd2; TYPE_1__ nd1; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct TYPE_7__ {int is_vm_nic; int use_v1_blkt; void* cula; void* unit_addr2; void* chpid; } ;
struct qeth_card {TYPE_3__ info; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (struct qeth_cmd_buffer*,int) ;
 int FUNC_2 (struct qeth_cmd_buffer*) ;

__attribute__((used)) static void FUNC_3(struct qeth_card *VAR_2,
       struct qeth_cmd_buffer *VAR_3,
       unsigned int VAR_4)
{
 struct qeth_node_desc *VAR_5 = (struct qeth_node_desc *) VAR_3->data;
 int VAR_6 = 0;
 u8 *VAR_7;

 FUNC_0(VAR_2, 2, "cfgunit");

 if (VAR_4 < sizeof(*VAR_5)) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_2->info.is_vm_nic = VAR_5->nd1.plant[0] == VAR_1['V'] &&
          VAR_5->nd1.plant[1] == VAR_1['M'];
 VAR_7 = (u8 *)&VAR_5->nd1.tag;
 VAR_2->info.chpid = VAR_7[0];
 VAR_2->info.unit_addr2 = VAR_7[1];

 VAR_7 = (u8 *)&VAR_5->nd2.tag;
 VAR_2->info.cula = VAR_7[1];

 VAR_2->info.use_v1_blkt = VAR_5->nd3.model[0] == 0xF0 &&
     VAR_5->nd3.model[1] == 0xF0 &&
     VAR_5->nd3.model[2] >= 0xF1 &&
     VAR_5->nd3.model[2] <= 0xF4;

out:
 FUNC_1(VAR_3, VAR_6);
 FUNC_2(VAR_3);
}
