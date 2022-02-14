
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_eth_wrb {scalar_t__ rsvd0; scalar_t__ frag_len; scalar_t__ frag_pa_lo; scalar_t__ frag_pa_hi; } ;



__attribute__((used)) static inline void FUNC_0(struct be_eth_wrb *VAR_0)
{
 VAR_0->frag_pa_hi = 0;
 VAR_0->frag_pa_lo = 0;
 VAR_0->frag_len = 0;
 VAR_0->rsvd0 = 0;
}
