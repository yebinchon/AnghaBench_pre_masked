
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* owner; } ;
struct vnt_tx_desc {TYPE_2__ td0; } ;
struct TYPE_3__ {unsigned int* tx_descs; } ;
struct vnt_private {int tx_beacon_dma; int PortOffset; int td1_pool_dma; int td0_pool_dma; struct vnt_tx_desc* apTD1Rings; TYPE_1__ opts; struct vnt_tx_desc* apTD0Rings; scalar_t__* iTDUsed; struct vnt_tx_desc** apCurrTD; struct vnt_tx_desc** apTailTD; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct vnt_private*,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;

void FUNC_2(struct vnt_private *VAR_4)
{
 unsigned int VAR_5;
 struct vnt_tx_desc *VAR_6;


 VAR_4->apTailTD[0] = &VAR_4->apTD0Rings[0];
 VAR_4->apCurrTD[0] = &VAR_4->apTD0Rings[0];

 VAR_4->apTailTD[1] = &VAR_4->apTD1Rings[0];
 VAR_4->apCurrTD[1] = &VAR_4->apTD1Rings[0];

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_4->iTDUsed[VAR_5] = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4->opts.tx_descs[0]; VAR_5++) {
  VAR_6 = &VAR_4->apTD0Rings[VAR_5];
  VAR_6->td0.owner = VAR_0;

 }
 for (VAR_5 = 0; VAR_5 < VAR_4->opts.tx_descs[1]; VAR_5++) {
  VAR_6 = &VAR_4->apTD1Rings[VAR_5];
  VAR_6->td0.owner = VAR_0;

 }


 FUNC_1(VAR_3, VAR_4, VAR_4->td0_pool_dma);

 FUNC_1(VAR_1, VAR_4, VAR_4->td1_pool_dma);


 FUNC_0(VAR_4->PortOffset,
     (VAR_4->tx_beacon_dma));
}
