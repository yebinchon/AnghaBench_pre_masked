
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {char* name; } ;
struct ehea_port_res {int num_def_qps; TYPE_4__* qp_eq; struct ehea_port_res* port_res; TYPE_2__* eq; int int_send_name; int int_aff_name; } ;
struct ehea_port {int num_def_qps; TYPE_4__* qp_eq; struct ehea_port* port_res; TYPE_2__* eq; int int_send_name; int int_aff_name; } ;
struct TYPE_7__ {int ist1; } ;
struct TYPE_8__ {TYPE_3__ attr; } ;
struct TYPE_5__ {int ist1; } ;
struct TYPE_6__ {TYPE_1__ attr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ehea_port_res*) ;
 int FUNC_1 (int ,int ,int ,int ,struct ehea_port_res*) ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*,char*,int,...) ;
 struct ehea_port_res* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ehea_port_res*,int ,struct net_device*,char*,int ,...) ;
 int FUNC_5 (int ,scalar_t__,char*,char*,...) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4)
{
 struct ehea_port *VAR_5 = FUNC_3(VAR_4);
 struct ehea_port_res *VAR_6;
 int VAR_7, VAR_8;


 FUNC_5(VAR_5->int_aff_name, VAR_0 - 1, "%s-aff",
   VAR_4->name);

 VAR_8 = FUNC_1(VAR_5->qp_eq->attr.ist1,
      VAR_1,
      0, VAR_5->int_aff_name, VAR_5);
 if (VAR_8) {
  FUNC_2(VAR_4, "failed registering irq for qp_aff_irq_handler:ist=%X\n",
      VAR_5->qp_eq->attr.ist1);
  goto out_free_qpeq;
 }

 FUNC_4(VAR_5, VAR_3, VAR_4,
     "irq_handle 0x%X for function qp_aff_irq_handler registered\n",
     VAR_5->qp_eq->attr.ist1);


 for (VAR_7 = 0; VAR_7 < VAR_5->num_def_qps; VAR_7++) {
  VAR_6 = &VAR_5->port_res[VAR_7];
  FUNC_5(VAR_6->int_send_name, VAR_0 - 1,
    "%s-queue%d", VAR_4->name, VAR_7);
  VAR_8 = FUNC_1(VAR_6->eq->attr.ist1,
       VAR_2,
       0, VAR_6->int_send_name, VAR_6);
  if (VAR_8) {
   FUNC_2(VAR_4, "failed registering irq for ehea_queue port_res_nr:%d, ist=%X\n",
       VAR_7, VAR_6->eq->attr.ist1);
   goto out_free_req;
  }
  FUNC_4(VAR_5, VAR_3, VAR_4,
      "irq_handle 0x%X for function ehea_queue_int %d registered\n",
      VAR_6->eq->attr.ist1, VAR_7);
 }
out:
 return VAR_8;


out_free_req:
 while (--VAR_7 >= 0) {
  u32 VAR_9 = VAR_5->port_res[VAR_7].eq->attr.ist1;
  FUNC_0(VAR_9, &VAR_5->port_res[VAR_7]);
 }

out_free_qpeq:
 FUNC_0(VAR_5->qp_eq->attr.ist1, VAR_5);
 VAR_7 = VAR_5->num_def_qps;

 goto out;

}
