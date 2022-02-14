
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct fm10k_mbx_fifo {int * buffer; } ;
struct fm10k_mbx_info {scalar_t__ mbmem_len; scalar_t__ tail; scalar_t__ tail_len; struct fm10k_mbx_fifo tx; } ;
struct fm10k_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct fm10k_mbx_fifo*,scalar_t__) ;
 int FUNC_2 (struct fm10k_hw*,struct fm10k_mbx_info*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct fm10k_mbx_info*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct fm10k_hw *VAR_0,
      struct fm10k_mbx_info *VAR_1, u16 VAR_2)
{
 struct fm10k_mbx_fifo *VAR_3 = &VAR_1->tx;

 u16 VAR_4 = VAR_1->mbmem_len - 1;
 u16 VAR_5, VAR_6 = 0;


 if (VAR_1->tail < VAR_2)
  VAR_2 += VAR_4;

 FUNC_2(VAR_0, VAR_1, VAR_2);


 do {
  u32 *VAR_7;

  VAR_7 = VAR_3->buffer + FUNC_1(VAR_3, VAR_6);
  VAR_5 = VAR_6;
  VAR_6 += FUNC_0(*VAR_7);
 } while ((VAR_6 <= VAR_1->tail_len) && (VAR_6 < VAR_4));


 if (VAR_1->tail_len > VAR_5) {
  VAR_1->tail = FUNC_3(VAR_1, VAR_1->tail_len - VAR_5);
  VAR_1->tail_len = VAR_5;
 }


 if (VAR_1->tail > VAR_4)
  VAR_1->tail -= VAR_4;
}
