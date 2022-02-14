
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipw2100_priv {TYPE_3__* tx_buffers; int pci_dev; int tx_queue; } ;
struct ipw2100_data_header {int dummy; } ;
struct TYPE_4__ {int data_phys; scalar_t__ data; int * txb; } ;
struct TYPE_5__ {TYPE_1__ d_struct; } ;
struct TYPE_6__ {TYPE_2__ info; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ipw2100_priv*,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct ipw2100_priv *VAR_1)
{
 int VAR_2;

 FUNC_0("enter\n");

 FUNC_1(VAR_1, &VAR_1->tx_queue);

 if (!VAR_1->tx_buffers)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->tx_buffers[VAR_2].info.d_struct.txb) {
   FUNC_3(VAR_1->tx_buffers[VAR_2].info.d_struct.
        txb);
   VAR_1->tx_buffers[VAR_2].info.d_struct.txb = ((void*)0);
  }
  if (VAR_1->tx_buffers[VAR_2].info.d_struct.data)
   FUNC_4(VAR_1->pci_dev,
         sizeof(struct ipw2100_data_header),
         VAR_1->tx_buffers[VAR_2].info.d_struct.
         data,
         VAR_1->tx_buffers[VAR_2].info.d_struct.
         data_phys);
 }

 FUNC_2(VAR_1->tx_buffers);
 VAR_1->tx_buffers = ((void*)0);

 FUNC_0("exit\n");
}
