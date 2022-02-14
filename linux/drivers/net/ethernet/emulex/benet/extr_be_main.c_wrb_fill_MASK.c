
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct be_eth_wrb {scalar_t__ rsvd0; void* frag_len; void* frag_pa_lo; void* frag_pa_hi; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct be_eth_wrb *VAR_1, u64 VAR_2, int VAR_3)
{
 VAR_1->frag_pa_hi = FUNC_0(FUNC_2(VAR_2));
 VAR_1->frag_pa_lo = FUNC_0(FUNC_1(VAR_2));
 VAR_1->frag_len = FUNC_0(VAR_3 & VAR_0);
 VAR_1->rsvd0 = 0;
}
