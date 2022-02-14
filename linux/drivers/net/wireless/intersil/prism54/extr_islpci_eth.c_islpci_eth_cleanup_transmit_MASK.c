
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {int len; int truesize; int data; } ;
struct TYPE_5__ {size_t free_data_tx; scalar_t__* pci_map_tx_address; int pdev; struct sk_buff** data_low_tx; } ;
typedef TYPE_1__ islpci_private ;
struct TYPE_6__ {int * device_curr_frag; } ;
typedef TYPE_2__ isl38xx_control_block ;


 int FUNC_0 (int ,char*,struct sk_buff*,int ,int ,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;

void
FUNC_4(islpci_private *VAR_4,
       isl38xx_control_block *VAR_5)
{
 struct sk_buff *VAR_6;
 u32 VAR_7;


 while (VAR_4->free_data_tx !=
        FUNC_2(VAR_5->
      device_curr_frag[VAR_0])) {

  VAR_7 = VAR_4->free_data_tx % VAR_1;



  if (VAR_4->pci_map_tx_address[VAR_7]) {


   VAR_6 = VAR_4->data_low_tx[VAR_7];







   FUNC_3(VAR_4->pdev,
      VAR_4->pci_map_tx_address[VAR_7],
      VAR_6->len, VAR_2);
   FUNC_1(VAR_6);
   VAR_6 = ((void*)0);
  }

  VAR_4->free_data_tx++;
 }
}
