
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef void* u32 ;
struct sxgbe_tx_ctxt_desc {void* tstamp_hi; void* tstamp_lo; scalar_t__ ostc; } ;



__attribute__((used)) static void FUNC_0(struct sxgbe_tx_ctxt_desc *VAR_0,
       u8 VAR_1, u64 VAR_2)
{
 if (VAR_1) {
  VAR_0->ostc = VAR_1;
  VAR_0->tstamp_lo = (u32) VAR_2;
  VAR_0->tstamp_hi = (u32) (VAR_2>>32);
 }
}
