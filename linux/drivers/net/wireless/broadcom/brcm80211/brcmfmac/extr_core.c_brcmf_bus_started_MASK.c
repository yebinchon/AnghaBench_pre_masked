
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cfg80211_ops {int dummy; } ;
struct TYPE_6__ {int notifier_call; } ;
struct TYPE_7__ {int notifier_call; } ;
struct brcmf_pub {TYPE_1__* settings; struct brcmf_if** iflist; int * config; int bus_reset; TYPE_2__ inetaddr_notifier; TYPE_4__ inet6addr_notifier; struct brcmf_bus* bus_if; } ;
struct brcmf_if {int ndev; } ;
struct brcmf_bus {int dummy; } ;
struct TYPE_5__ {scalar_t__ ignore_probe_fail; scalar_t__ p2p_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct brcmf_if*) ;
 int FUNC_2 (struct brcmf_if*) ;
 int VAR_2 ;
 int FUNC_3 (struct brcmf_pub*,char*,int) ;
 struct brcmf_if* FUNC_4 (struct brcmf_pub*,int ,int ,int,char*,int *) ;
 int FUNC_5 (struct brcmf_bus*,int ) ;
 int FUNC_6 (struct brcmf_bus*) ;
 int FUNC_7 (struct brcmf_bus*) ;
 int FUNC_8 (struct brcmf_if*) ;
 int * FUNC_9 (struct brcmf_pub*,struct cfg80211_ops*,scalar_t__) ;
 int FUNC_10 (int *) ;
 int VAR_3 ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct brcmf_pub*,char*,int ) ;
 int FUNC_13 (struct brcmf_pub*) ;
 int FUNC_14 (struct brcmf_pub*) ;
 int FUNC_15 (struct brcmf_pub*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_16 (struct brcmf_if*,int) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (struct brcmf_if*) ;
 int FUNC_19 (struct brcmf_pub*,struct brcmf_if*) ;
 int FUNC_20 (struct brcmf_pub*) ;
 int FUNC_21 (struct brcmf_pub*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_22 (char*,int,int ,struct brcmf_pub*,int *) ;
 int FUNC_23 (TYPE_4__*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_26(struct brcmf_pub *VAR_8, struct cfg80211_ops *VAR_9)
{
 int VAR_10 = -1;
 struct brcmf_bus *VAR_11 = VAR_8->bus_if;
 struct brcmf_if *VAR_12;
 struct brcmf_if *VAR_13;

 FUNC_11(VAR_2, "\n");


 VAR_12 = FUNC_4(VAR_8, 0, 0, 0, "wlan%d", ((void*)0));
 if (FUNC_1(VAR_12))
  return FUNC_2(VAR_12);

 VAR_13 = ((void*)0);


 FUNC_5(VAR_11, VAR_0);


 VAR_10 = FUNC_7(VAR_11);
 if (VAR_10 < 0)
  goto fail;


 VAR_10 = FUNC_8(VAR_12);
 if (VAR_10 < 0)
  goto fail;

 FUNC_14(VAR_8);

 VAR_10 = FUNC_21(VAR_8);
 if (VAR_10 < 0)
  goto fail;

 FUNC_19(VAR_8, VAR_12);

 VAR_8->config = FUNC_9(VAR_8, VAR_9,
          VAR_8->settings->p2p_enable);
 if (VAR_8->config == ((void*)0)) {
  VAR_10 = -VAR_1;
  goto fail;
 }

 VAR_10 = FUNC_16(VAR_12, 0);

 if ((!VAR_10) && (VAR_8->settings->p2p_enable)) {
  VAR_13 = VAR_8->iflist[1];
  if (VAR_13)
   VAR_10 = FUNC_18(VAR_13);
 }

 if (VAR_10)
  goto fail;
 FUNC_0(&VAR_8->bus_reset, VAR_3);


 FUNC_12(VAR_8, "revinfo", VAR_6);
 FUNC_22("reset", 0600, FUNC_13(VAR_8), VAR_8,
       &VAR_7);
 FUNC_15(VAR_8);
 FUNC_20(VAR_8);
 FUNC_6(VAR_11);

 return 0;

fail:
 FUNC_3(VAR_8, "failed: %d\n", VAR_10);
 if (VAR_8->config) {
  FUNC_10(VAR_8->config);
  VAR_8->config = ((void*)0);
 }
 FUNC_17(VAR_12->ndev, 0);
 if (VAR_13)
  FUNC_17(VAR_13->ndev, 0);
 VAR_8->iflist[0] = ((void*)0);
 VAR_8->iflist[1] = ((void*)0);
 if (VAR_8->settings->ignore_probe_fail)
  VAR_10 = 0;

 return VAR_10;
}
