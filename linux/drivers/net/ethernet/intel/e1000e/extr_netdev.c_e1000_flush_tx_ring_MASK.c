
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int data; } ;
struct e1000_tx_desc {TYPE_2__ upper; TYPE_1__ lower; int buffer_addr; } ;
struct e1000_ring {int next_to_use; int count; int dma; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct e1000_ring* tx_ring; struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct e1000_tx_desc* FUNC_1 (struct e1000_ring,int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct e1000_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 struct e1000_ring *VAR_5 = VAR_3->tx_ring;
 struct e1000_tx_desc *VAR_6 = ((void*)0);
 u32 VAR_7, VAR_8, VAR_9 = VAR_1;
 u16 VAR_10 = 512;

 VAR_8 = FUNC_4(VAR_2);
 FUNC_5(VAR_2, VAR_8 | VAR_0);
 VAR_7 = FUNC_4(FUNC_2(0));
 FUNC_0(VAR_7 != VAR_5->next_to_use);
 VAR_6 = FUNC_1(*VAR_5, VAR_5->next_to_use);
 VAR_6->buffer_addr = VAR_5->dma;

 VAR_6->lower.data = FUNC_3(VAR_9 | VAR_10);
 VAR_6->upper.data = 0;

 FUNC_7();
 VAR_5->next_to_use++;
 if (VAR_5->next_to_use == VAR_5->count)
  VAR_5->next_to_use = 0;
 FUNC_5(FUNC_2(0), VAR_5->next_to_use);
 FUNC_6(200, 250);
}
