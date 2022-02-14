
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * netdev_ops; int name; int priv_destructor; int dev_addr; int * ethtool_ops; int needed_headroom; } ;
struct brcmf_pub {int ** iflist; int config; scalar_t__ hdrlen; } ;
struct brcmf_if {size_t bsscfgidx; int ndoffload_work; int multicast_work; int mac_addr; struct net_device* ndev; struct brcmf_pub* drvr; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct brcmf_pub*,char*) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,size_t,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct brcmf_if *VAR_9, bool VAR_10)
{
 struct brcmf_pub *VAR_11 = VAR_9->drvr;
 struct net_device *VAR_12;
 s32 VAR_13;

 FUNC_2(VAR_3, "Enter, bsscfgidx=%d mac=%pM\n", VAR_9->bsscfgidx,
    VAR_9->mac_addr);
 VAR_12 = VAR_9->ndev;


 VAR_12->netdev_ops = &VAR_8;

 VAR_12->needed_headroom += VAR_11->hdrlen;
 VAR_12->ethtool_ops = &VAR_7;


 FUNC_5(VAR_12->dev_addr, VAR_9->mac_addr, VAR_1);
 FUNC_4(VAR_12, FUNC_8(FUNC_3(VAR_11->config)));

 FUNC_0(&VAR_9->multicast_work, VAR_4);
 FUNC_0(&VAR_9->ndoffload_work, VAR_5);

 if (VAR_10)
  VAR_13 = FUNC_7(VAR_12);
 else
  VAR_13 = FUNC_6(VAR_12);
 if (VAR_13 != 0) {
  FUNC_1(VAR_11, "couldn't register the net device\n");
  goto fail;
 }

 VAR_12->priv_destructor = VAR_6;
 FUNC_2(VAR_2, "%s: Broadcom Dongle Host Driver\n", VAR_12->name);
 return 0;

fail:
 VAR_11->iflist[VAR_9->bsscfgidx] = ((void*)0);
 VAR_12->netdev_ops = ((void*)0);
 return -VAR_0;
}
