
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int mac_addr; TYPE_1__* ndev; int bsscfgidx; struct brcmf_pub* drvr; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct brcmf_if*,char*,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct brcmf_if* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, void *VAR_3)
{
 struct brcmf_if *VAR_4 = FUNC_4(VAR_2);
 struct sockaddr *VAR_5 = (struct sockaddr *)VAR_3;
 struct brcmf_pub *VAR_6 = VAR_4->drvr;
 int VAR_7;

 FUNC_1(VAR_1, "Enter, bsscfgidx=%d\n", VAR_4->bsscfgidx);

 VAR_7 = FUNC_2(VAR_4, "cur_etheraddr", VAR_5->sa_data,
           VAR_0);
 if (VAR_7 < 0) {
  FUNC_0(VAR_6, "Setting cur_etheraddr failed, %d\n", VAR_7);
 } else {
  FUNC_1(VAR_1, "updated to %pM\n", VAR_5->sa_data);
  FUNC_3(VAR_4->mac_addr, VAR_5->sa_data, VAR_0);
  FUNC_3(VAR_4->ndev->dev_addr, VAR_4->mac_addr, VAR_0);
 }
 return VAR_7;
}
