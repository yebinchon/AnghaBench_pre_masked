
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {int num_rx_desc; int num_tx_desc; scalar_t__ num_req_vfs; scalar_t__ num_vmdq_vport; scalar_t__ num_tqps; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct hclge_dev *VAR_2)
{



 if (!FUNC_1())
  return;

 FUNC_0(&VAR_2->pdev->dev,
   "Running kdump kernel. Using minimal resources\n");


 VAR_2->num_tqps = VAR_2->num_vmdq_vport + VAR_2->num_req_vfs + 1;
 VAR_2->num_tx_desc = 64;
 VAR_2->num_rx_desc = 64;
}
