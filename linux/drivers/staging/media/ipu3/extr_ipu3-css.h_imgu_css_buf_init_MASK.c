
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imgu_css_buffer {unsigned int queue; int daddr; int state; } ;
typedef int dma_addr_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct imgu_css_buffer *VAR_1,
         unsigned int VAR_2, dma_addr_t VAR_3)
{
 VAR_1->state = VAR_0;
 VAR_1->queue = VAR_2;
 VAR_1->daddr = VAR_3;
}
