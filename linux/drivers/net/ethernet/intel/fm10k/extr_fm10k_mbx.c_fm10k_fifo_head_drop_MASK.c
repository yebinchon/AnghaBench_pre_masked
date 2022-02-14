
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fm10k_mbx_fifo {int head; } ;


 scalar_t__ FUNC_0 (struct fm10k_mbx_fifo*) ;

__attribute__((used)) static u16 FUNC_1(struct fm10k_mbx_fifo *VAR_0)
{
 u16 VAR_1 = FUNC_0(VAR_0);


 VAR_0->head += VAR_1;

 return VAR_1;
}
