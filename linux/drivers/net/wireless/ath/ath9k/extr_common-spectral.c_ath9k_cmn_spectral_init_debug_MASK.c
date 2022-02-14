
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct ath_spec_scan_priv {int rfs_chan_spec_scan; } ;


 int FUNC_0 (char*,int,struct dentry*,struct ath_spec_scan_priv*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,struct dentry*,int,int,int *,int *) ;
 int VAR_5 ;

void FUNC_2(struct ath_spec_scan_priv *VAR_6,
       struct dentry *VAR_7)
{
 VAR_6->rfs_chan_spec_scan = FUNC_1("spectral_scan",
         VAR_7,
         1024, 256, &VAR_5,
         ((void*)0));
 if (!VAR_6->rfs_chan_spec_scan)
  return;

 FUNC_0("spectral_scan_ctl",
       0600,
       VAR_7, VAR_6,
       &VAR_0);
 FUNC_0("spectral_short_repeat",
       0600,
       VAR_7, VAR_6,
       &VAR_4);
 FUNC_0("spectral_count",
       0600,
       VAR_7, VAR_6,
       &VAR_1);
 FUNC_0("spectral_period",
       0600,
       VAR_7, VAR_6,
       &VAR_3);
 FUNC_0("spectral_fft_period",
       0600,
       VAR_7, VAR_6,
       &VAR_2);
}
