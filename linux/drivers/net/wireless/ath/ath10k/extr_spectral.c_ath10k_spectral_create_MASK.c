
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int debugfs_phy; } ;
struct TYPE_3__ {int rfs_chan_spec_scan; } ;
struct ath10k {TYPE_2__ debug; TYPE_1__ spectral; } ;


 int FUNC_0 (char*,int,int ,struct ath10k*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int,int,int *,int *) ;
 int VAR_3 ;

int FUNC_2(struct ath10k *VAR_4)
{



 VAR_4->spectral.rfs_chan_spec_scan = FUNC_1("spectral_scan",
           VAR_4->debug.debugfs_phy,
           1140, 2500,
           &VAR_3, ((void*)0));
 FUNC_0("spectral_scan_ctl",
       0600,
       VAR_4->debug.debugfs_phy, VAR_4,
       &VAR_0);
 FUNC_0("spectral_count",
       0600,
       VAR_4->debug.debugfs_phy, VAR_4,
       &VAR_2);
 FUNC_0("spectral_bins",
       0600,
       VAR_4->debug.debugfs_phy, VAR_4,
       &VAR_1);

 return 0;
}
