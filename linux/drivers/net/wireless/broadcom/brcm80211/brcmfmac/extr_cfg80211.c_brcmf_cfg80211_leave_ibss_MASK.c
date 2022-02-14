
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct brcmf_if {int vif; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct brcmf_if*,int) ;
 int FUNC_3 (int ) ;
 struct brcmf_if* FUNC_4 (struct net_device*) ;

__attribute__((used)) static s32
FUNC_5(struct wiphy *VAR_2, struct net_device *VAR_3)
{
 struct brcmf_if *VAR_4 = FUNC_4(VAR_3);

 FUNC_0(VAR_0, "Enter\n");
 if (!FUNC_3(VAR_4->vif)) {




  return 0;
 }

 FUNC_1(VAR_4->vif, VAR_1);
 FUNC_2(VAR_4, 0);

 FUNC_0(VAR_0, "Exit\n");

 return 0;
}
