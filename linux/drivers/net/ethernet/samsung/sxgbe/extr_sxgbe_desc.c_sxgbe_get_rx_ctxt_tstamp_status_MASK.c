
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sxgbe_rx_ctxt_desc {int tstamp_hi; int tstamp_lo; int tstamp_available; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct sxgbe_rx_ctxt_desc *VAR_0)
{
 if ((VAR_0->tstamp_hi == 0xffffffff) && (VAR_0->tstamp_lo == 0xffffffff)) {
  FUNC_0("Time stamp corrupted\n");
  return 0;
 }

 return VAR_0->tstamp_available;
}
