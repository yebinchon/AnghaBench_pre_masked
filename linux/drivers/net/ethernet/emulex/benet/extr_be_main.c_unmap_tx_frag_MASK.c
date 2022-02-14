
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct be_eth_wrb {int frag_pa_lo; int frag_pa_hi; int frag_len; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int,scalar_t__,int ) ;
 int FUNC_1 (struct device*,int,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1, struct be_eth_wrb *VAR_2,
     bool VAR_3)
{
 dma_addr_t VAR_4;
 u32 VAR_5 = FUNC_2(VAR_2->frag_len);


 VAR_4 = (u64)FUNC_2(VAR_2->frag_pa_hi) << 32 |
  (u64)FUNC_2(VAR_2->frag_pa_lo);
 if (VAR_5) {
  if (VAR_3)
   FUNC_1(VAR_1, VAR_4, VAR_5, VAR_0);
  else
   FUNC_0(VAR_1, VAR_4, VAR_5, VAR_0);
 }
}
