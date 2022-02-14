
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sxgbe_rx_ctxt_desc {int tstamp_lo; scalar_t__ tstamp_hi; } ;



__attribute__((used)) static u64 FUNC_0(struct sxgbe_rx_ctxt_desc *VAR_0)
{
 u64 VAR_1;

 VAR_1 = VAR_0->tstamp_lo;
 VAR_1 |= ((u64)VAR_0->tstamp_hi) << 32;

 return VAR_1;
}
