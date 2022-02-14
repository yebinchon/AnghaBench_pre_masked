
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char dma_lo; unsigned char dma_md; unsigned char dma_hi; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline void FUNC_1(unsigned long VAR_1)
{
 VAR_0.dma_lo = (unsigned char)VAR_1;
 FUNC_0();
 VAR_1 >>= 8;
 VAR_0.dma_md = (unsigned char)VAR_1;
 FUNC_0();
 VAR_1 >>= 8;
 VAR_0.dma_hi = (unsigned char)VAR_1;
 FUNC_0();
}
