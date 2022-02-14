
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_if {int dummy; } ;
struct brcmf_btcoex_info {int dhcp_done; int work; int bt_state; TYPE_1__* vif; } ;
struct TYPE_2__ {struct brcmf_if* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct brcmf_if*,int,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct brcmf_btcoex_info*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct brcmf_btcoex_info *VAR_5)
{
 struct brcmf_if *VAR_6 = VAR_5->vif->ifp;

 FUNC_2(VAR_5);

 FUNC_0(VAR_6, 66, VAR_1);
 FUNC_0(VAR_6, 41, VAR_0);
 FUNC_0(VAR_6, 68, VAR_2);
 VAR_5->dhcp_done = 0;
 VAR_5->bt_state = VAR_3;
 FUNC_3(&VAR_5->work);
 FUNC_1(VAR_4, "enable BT DHCP Timer\n");
}
