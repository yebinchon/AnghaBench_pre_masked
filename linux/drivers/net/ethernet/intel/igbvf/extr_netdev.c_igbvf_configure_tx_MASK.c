
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union e1000_adv_tx_desc {int dummy; } e1000_adv_tx_desc ;
typedef int u64 ;
typedef int u32 ;
struct igbvf_ring {int count; int dma; int tail; int head; } ;
struct e1000_hw {int dummy; } ;
struct igbvf_adapter {int txd_cmd; struct igbvf_ring* tx_ring; struct e1000_hw hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct igbvf_adapter *VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_5->hw;
 struct igbvf_ring *VAR_7 = VAR_5->tx_ring;
 u64 VAR_8;
 u32 VAR_9, VAR_10;


 VAR_9 = FUNC_11(FUNC_9(0));
 FUNC_12(FUNC_9(0), VAR_9 & ~VAR_4);
 FUNC_10();
 FUNC_13(10);


 FUNC_12(FUNC_7(0), VAR_7->count * sizeof(union e1000_adv_tx_desc));
 VAR_8 = VAR_7->dma;
 FUNC_12(FUNC_5(0), (VAR_8 & FUNC_1(32)));
 FUNC_12(FUNC_4(0), (VAR_8 >> 32));
 FUNC_12(FUNC_6(0), 0);
 FUNC_12(FUNC_8(0), 0);
 VAR_7->head = FUNC_2(0);
 VAR_7->tail = FUNC_3(0);





 VAR_10 = FUNC_11(FUNC_0(0));
 VAR_10 &= ~VAR_3;
 FUNC_12(FUNC_0(0), VAR_10);


 VAR_9 |= VAR_4;
 FUNC_12(FUNC_9(0), VAR_9);


 VAR_5->txd_cmd = VAR_0 | VAR_1;


 VAR_5->txd_cmd |= VAR_2;
}
