
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct brcmf_if {struct net_device* ndev; int bsscfgidx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct brcmf_if*,int ,int) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

void FUNC_5(struct brcmf_if *VAR_2, bool VAR_3)
{
 struct net_device *VAR_4;

 FUNC_0(VAR_1, "Enter, bsscfgidx=%d carrier=%d\n", VAR_2->bsscfgidx,
    VAR_3);

 VAR_4 = VAR_2->ndev;
 FUNC_1(VAR_2, VAR_0, !VAR_3);
 if (VAR_3) {
  if (!FUNC_3(VAR_4))
   FUNC_4(VAR_4);

 } else {
  if (FUNC_3(VAR_4))
   FUNC_2(VAR_4);
 }
}
