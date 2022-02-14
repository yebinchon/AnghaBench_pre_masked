
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ehea_adapter {TYPE_3__** port; TYPE_2__* ofdev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int netdev; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ehea_adapter*) ;
 int FUNC_1 (struct ehea_adapter*) ;
 TYPE_3__* FUNC_2 (struct ehea_adapter*,int const,struct device_node*) ;
 int FUNC_3 (int ,char*,int const) ;
 struct device_node* FUNC_4 (struct device_node*,struct device_node*) ;
 int * FUNC_5 (struct device_node*,char*,int *) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int FUNC_8(struct ehea_adapter *VAR_1)
{
 struct device_node *VAR_2;
 struct device_node *VAR_3 = ((void*)0);

 const u32 *VAR_4;
 int VAR_5 = 0;

 VAR_2 = VAR_1->ofdev->dev.of_node;
 while ((VAR_3 = FUNC_4(VAR_2, VAR_3))) {

  VAR_4 = FUNC_5(VAR_3, "ibm,hea-port-no",
       ((void*)0));
  if (!VAR_4) {
   FUNC_7("bad device node: eth_dn name=%pOF\n", VAR_3);
   continue;
  }

  if (FUNC_0(VAR_1)) {
   FUNC_7("creating MR failed\n");
   FUNC_6(VAR_3);
   return -VAR_0;
  }

  VAR_1->port[VAR_5] = FUNC_2(VAR_1,
         *VAR_4,
         VAR_3);
  if (VAR_1->port[VAR_5])
   FUNC_3(VAR_1->port[VAR_5]->netdev,
        "logical port id #%d\n", *VAR_4);
  else
   FUNC_1(VAR_1);

  VAR_5++;
 }
 return 0;
}
