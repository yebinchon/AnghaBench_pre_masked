
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union e1000_adv_rx_desc {int dummy; } e1000_adv_rx_desc ;
typedef int u64 ;
typedef int u32 ;
struct igbvf_ring {int dma; int count; int tail; int head; } ;
struct e1000_hw {int dummy; } ;
struct igbvf_adapter {struct igbvf_ring* rx_ring; struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct igbvf_adapter*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct igbvf_adapter *VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 struct igbvf_ring *VAR_6 = VAR_4->rx_ring;
 u64 VAR_7;
 u32 VAR_8;


 VAR_8 = FUNC_10(FUNC_8(0));
 FUNC_11(FUNC_8(0), VAR_8 & ~VAR_0);
 FUNC_9();
 FUNC_13(10);




 VAR_7 = VAR_6->dma;
 FUNC_11(FUNC_4(0), (VAR_7 & FUNC_0(32)));
 FUNC_11(FUNC_3(0), (VAR_7 >> 32));
 FUNC_11(FUNC_6(0), VAR_6->count * sizeof(union e1000_adv_rx_desc));
 VAR_6->head = FUNC_1(0);
 VAR_6->tail = FUNC_2(0);
 FUNC_11(FUNC_5(0), 0);
 FUNC_11(FUNC_7(0), 0);

 VAR_8 |= VAR_0;
 VAR_8 &= 0xFFF00000;
 VAR_8 |= VAR_2;
 VAR_8 |= VAR_1 << 8;
 VAR_8 |= VAR_3 << 16;

 FUNC_12(VAR_4);


 FUNC_11(FUNC_8(0), VAR_8);
}
