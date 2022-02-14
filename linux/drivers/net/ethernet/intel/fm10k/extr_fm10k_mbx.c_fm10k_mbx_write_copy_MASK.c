
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct fm10k_mbx_fifo {scalar_t__* buffer; scalar_t__ size; } ;
struct fm10k_mbx_info {int tx_mbmem_pulled; int pulled; scalar_t__ tail_len; scalar_t__ mbmem_len; scalar_t__ mbmem_reg; struct fm10k_mbx_fifo tx; } ;
struct fm10k_hw {int dummy; } ;


 scalar_t__ FUNC_0 (struct fm10k_mbx_fifo*,int ) ;
 scalar_t__ FUNC_1 (struct fm10k_mbx_info*,scalar_t__) ;
 int FUNC_2 (struct fm10k_hw*,scalar_t__,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct fm10k_hw *VAR_0,
     struct fm10k_mbx_info *VAR_1)
{
 struct fm10k_mbx_fifo *VAR_2 = &VAR_1->tx;
 u32 VAR_3 = VAR_1->mbmem_reg;
 u32 *VAR_4 = VAR_2->buffer;
 u16 VAR_5, VAR_6, VAR_7, VAR_8;

 if (!VAR_1->tail_len)
  return;


 VAR_8 = VAR_1->mbmem_len - 1;
 VAR_6 = VAR_1->tail_len;
 VAR_7 = FUNC_1(VAR_1, VAR_6);
 if (VAR_7 > VAR_8)
  VAR_7++;


 VAR_5 = FUNC_0(VAR_2, VAR_1->pulled);
 VAR_4 += VAR_5;


 FUNC_3();


 for (VAR_5 = VAR_2->size - VAR_5; VAR_6; VAR_4 = VAR_2->buffer) {
  do {

   VAR_7 &= VAR_8;
   if (!VAR_7)
    VAR_7++;

   VAR_1->tx_mbmem_pulled++;


   FUNC_2(VAR_0, VAR_3 + VAR_7++, *(VAR_4++));
  } while (--VAR_6 && --VAR_5);
 }
}
