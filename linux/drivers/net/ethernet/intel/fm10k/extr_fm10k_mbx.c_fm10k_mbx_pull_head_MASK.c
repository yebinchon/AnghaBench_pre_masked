
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fm10k_mbx_fifo {int dummy; } ;
struct fm10k_mbx_info {scalar_t__ pulled; scalar_t__ tail_len; scalar_t__ mbmem_len; int tx_dwords; int tx_messages; int tail; struct fm10k_mbx_fifo tx; } ;
struct fm10k_hw {int dummy; } ;


 scalar_t__ FUNC_0 (struct fm10k_mbx_fifo*) ;
 scalar_t__ FUNC_1 (struct fm10k_mbx_fifo*) ;
 scalar_t__ FUNC_2 (struct fm10k_mbx_fifo*) ;
 scalar_t__ FUNC_3 (struct fm10k_mbx_info*,scalar_t__,int ) ;
 int FUNC_4 (struct fm10k_mbx_info*,scalar_t__) ;
 int FUNC_5 (struct fm10k_hw*,struct fm10k_mbx_info*) ;

__attribute__((used)) static void FUNC_6(struct fm10k_hw *VAR_0,
    struct fm10k_mbx_info *VAR_1, u16 VAR_2)
{
 u16 VAR_3, VAR_4, VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_1->tail);
 struct fm10k_mbx_fifo *VAR_6 = &VAR_1->tx;


 VAR_1->pulled += VAR_1->tail_len - VAR_5;


 VAR_3 = VAR_1->mbmem_len - 1;
 VAR_4 = FUNC_2(VAR_6) - VAR_1->pulled;
 if (VAR_4 > VAR_3)
  VAR_4 = VAR_3;


 VAR_1->tail = FUNC_4(VAR_1, VAR_4 - VAR_5);
 VAR_1->tail_len = VAR_4;


 for (VAR_4 = FUNC_1(VAR_6);
      VAR_4 && (VAR_1->pulled >= VAR_4);
      VAR_4 = FUNC_1(VAR_6)) {
  VAR_1->pulled -= FUNC_0(VAR_6);
  VAR_1->tx_messages++;
  VAR_1->tx_dwords += VAR_4;
 }


 FUNC_5(VAR_0, VAR_1);
}
