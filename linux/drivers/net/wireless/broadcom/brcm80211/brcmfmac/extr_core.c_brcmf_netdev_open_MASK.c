
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int features; } ;
struct brcmf_pub {struct brcmf_bus* bus_if; } ;
struct brcmf_if {int pend_8021x_cnt; int bsscfgidx; struct brcmf_pub* drvr; } ;
struct brcmf_bus {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct brcmf_pub*,char*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (struct brcmf_if*,char*,int*) ;
 struct brcmf_if* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_6)
{
 struct brcmf_if *VAR_7 = FUNC_5(VAR_6);
 struct brcmf_pub *VAR_8 = VAR_7->drvr;
 struct brcmf_bus *VAR_9 = VAR_8->bus_if;
 u32 VAR_10;

 FUNC_3(VAR_5, "Enter, bsscfgidx=%d\n", VAR_7->bsscfgidx);


 if (VAR_9->state != VAR_0) {
  FUNC_1(VAR_8, "failed bus is not ready\n");
  return -VAR_1;
 }

 FUNC_0(&VAR_7->pend_8021x_cnt, 0);


 if (FUNC_4(VAR_7, "toe_ol", &VAR_10) >= 0
     && (VAR_10 & VAR_4) != 0)
  VAR_6->features |= VAR_3;
 else
  VAR_6->features &= ~VAR_3;

 if (FUNC_2(VAR_6)) {
  FUNC_1(VAR_8, "failed to bring up cfg80211\n");
  return -VAR_2;
 }


 FUNC_6(VAR_6);
 return 0;
}
