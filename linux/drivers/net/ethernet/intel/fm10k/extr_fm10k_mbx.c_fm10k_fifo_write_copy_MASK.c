
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fm10k_mbx_fifo {int size; int * buffer; } ;


 int FUNC_0 (struct fm10k_mbx_fifo*,int) ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_2(struct fm10k_mbx_fifo *VAR_0,
      const u32 *VAR_1, u16 VAR_2, u16 VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_0, VAR_2);
 u32 *VAR_5 = VAR_0->buffer + VAR_4;


 VAR_4 = VAR_0->size - VAR_4;


 if (VAR_4 < VAR_3)
  FUNC_1(VAR_0->buffer, VAR_1 + VAR_4, (VAR_3 - VAR_4) << 2);
 else
  VAR_4 = VAR_3;


 FUNC_1(VAR_5, VAR_1, VAR_4 << 2);
}
