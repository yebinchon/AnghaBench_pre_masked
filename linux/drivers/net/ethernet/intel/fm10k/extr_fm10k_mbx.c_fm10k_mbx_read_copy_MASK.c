
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fm10k_mbx_fifo {int* buffer; int size; } ;
struct fm10k_mbx_info {int mbmem_reg; int mbmem_len; int head_len; int rx_mbmem_pushed; int pushed; struct fm10k_mbx_fifo rx; } ;
struct fm10k_hw {int dummy; } ;


 int FUNC_0 (struct fm10k_mbx_fifo*,int ) ;
 int FUNC_1 (struct fm10k_mbx_info*,int) ;
 int FUNC_2 (struct fm10k_hw*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct fm10k_hw *VAR_0,
    struct fm10k_mbx_info *VAR_1)
{
 struct fm10k_mbx_fifo *VAR_2 = &VAR_1->rx;
 u32 VAR_3 = VAR_1->mbmem_reg ^ VAR_1->mbmem_len;
 u32 *VAR_4 = VAR_2->buffer;
 u16 VAR_5, VAR_6, VAR_7;


 VAR_6 = VAR_1->head_len;
 VAR_7 = FUNC_1(VAR_1, VAR_6);
 if (VAR_7 >= VAR_1->mbmem_len)
  VAR_7++;


 VAR_5 = FUNC_0(VAR_2, VAR_1->pushed);
 VAR_4 += VAR_5;


 for (VAR_5 = VAR_2->size - VAR_5; VAR_6; VAR_4 = VAR_2->buffer) {
  do {

   VAR_7 &= VAR_1->mbmem_len - 1;
   if (!VAR_7)
    VAR_7++;

   VAR_1->rx_mbmem_pushed++;


   *(VAR_4++) = FUNC_2(VAR_0, VAR_3 + VAR_7++);
  } while (--VAR_6 && --VAR_5);
 }


 FUNC_3();
}
