
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fm10k_mbx_fifo {int * buffer; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct fm10k_mbx_fifo*) ;
 int FUNC_2 (struct fm10k_mbx_fifo*,int ) ;

__attribute__((used)) static u16 FUNC_3(struct fm10k_mbx_fifo *VAR_0)
{
 u32 *VAR_1 = VAR_0->buffer + FUNC_2(VAR_0, 0);


 if (FUNC_1(VAR_0))
  return 0;


 return FUNC_0(*VAR_1);
}
