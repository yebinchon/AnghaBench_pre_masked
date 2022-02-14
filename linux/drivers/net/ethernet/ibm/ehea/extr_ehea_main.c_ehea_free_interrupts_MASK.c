
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ehea_port_res {int num_def_qps; TYPE_4__* qp_eq; TYPE_2__* eq; struct ehea_port_res* port_res; } ;
struct ehea_port {int num_def_qps; TYPE_4__* qp_eq; TYPE_2__* eq; struct ehea_port* port_res; } ;
struct TYPE_7__ {int ist1; } ;
struct TYPE_8__ {TYPE_3__ attr; } ;
struct TYPE_5__ {int ist1; } ;
struct TYPE_6__ {TYPE_1__ attr; } ;


 int FUNC_0 (int ,struct ehea_port_res*) ;
 int VAR_0 ;
 struct ehea_port_res* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ehea_port_res*,int ,struct net_device*,char*,int,...) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct ehea_port *VAR_2 = FUNC_1(VAR_1);
 struct ehea_port_res *VAR_3;
 int VAR_4;



 for (VAR_4 = 0; VAR_4 < VAR_2->num_def_qps; VAR_4++) {
  VAR_3 = &VAR_2->port_res[VAR_4];
  FUNC_0(VAR_3->eq->attr.ist1, VAR_3);
  FUNC_2(VAR_2, VAR_0, VAR_1,
      "free send irq for res %d with handle 0x%X\n",
      VAR_4, VAR_3->eq->attr.ist1);
 }


 FUNC_0(VAR_2->qp_eq->attr.ist1, VAR_2);
 FUNC_2(VAR_2, VAR_0, VAR_1,
     "associated event interrupt for handle 0x%X freed\n",
     VAR_2->qp_eq->attr.ist1);
}
