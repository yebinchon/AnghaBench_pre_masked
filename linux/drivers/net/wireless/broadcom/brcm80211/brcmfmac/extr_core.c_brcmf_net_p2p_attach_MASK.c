
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * netdev_ops; int name; int dev_addr; } ;
struct brcmf_pub {int ** iflist; } ;
struct brcmf_if {size_t bsscfgidx; struct brcmf_pub* drvr; int mac_addr; struct net_device* ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (int ,char*,size_t,...) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct brcmf_if *VAR_5)
{
 struct brcmf_pub *VAR_6 = VAR_5->drvr;
 struct net_device *VAR_7;

 FUNC_1(VAR_3, "Enter, bsscfgidx=%d mac=%pM\n", VAR_5->bsscfgidx,
    VAR_5->mac_addr);
 VAR_7 = VAR_5->ndev;

 VAR_7->netdev_ops = &VAR_4;


 FUNC_2(VAR_7->dev_addr, VAR_5->mac_addr, VAR_1);

 if (FUNC_3(VAR_7) != 0) {
  FUNC_0(VAR_6, "couldn't register the p2p net device\n");
  goto fail;
 }

 FUNC_1(VAR_2, "%s: Broadcom Dongle Host Driver\n", VAR_7->name);

 return 0;

fail:
 VAR_5->drvr->iflist[VAR_5->bsscfgidx] = ((void*)0);
 VAR_7->netdev_ops = ((void*)0);
 return -VAR_0;
}
