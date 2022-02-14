
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_spec_scan_priv {int * rfs_chan_spec_scan; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ath_spec_scan_priv *VAR_0)
{
 if (VAR_0->rfs_chan_spec_scan) {
  FUNC_0(VAR_0->rfs_chan_spec_scan);
  VAR_0->rfs_chan_spec_scan = ((void*)0);
 }
}
