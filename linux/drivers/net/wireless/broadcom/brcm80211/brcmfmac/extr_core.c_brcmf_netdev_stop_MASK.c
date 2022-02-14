
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct brcmf_if {TYPE_2__* drvr; int bsscfgidx; } ;
struct TYPE_4__ {TYPE_1__* bus_if; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct brcmf_if*,char*,int *,int ) ;
 int FUNC_3 (struct brcmf_if*,int) ;
 struct brcmf_if* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2)
{
 struct brcmf_if *VAR_3 = FUNC_4(VAR_2);

 FUNC_1(VAR_1, "Enter, bsscfgidx=%d\n", VAR_3->bsscfgidx);

 FUNC_0(VAR_2);

 if (VAR_3->drvr->bus_if->state == VAR_0)
  FUNC_2(VAR_3, "arp_hostip_clear", ((void*)0), 0);

 FUNC_3(VAR_3, 0);

 return 0;
}
