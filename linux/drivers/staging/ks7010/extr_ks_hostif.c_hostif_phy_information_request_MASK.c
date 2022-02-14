
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ phy_info_timer; } ;
struct ks_wlan_private {TYPE_1__ reg; } ;
struct hostif_phy_information_request {void* time; void* type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 struct hostif_phy_information_request* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ks_wlan_private*,struct hostif_phy_information_request*,int ) ;

__attribute__((used)) static
void FUNC_4(struct ks_wlan_private *VAR_3)
{
 struct hostif_phy_information_request *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 if (VAR_3->reg.phy_info_timer) {
  VAR_4->type = FUNC_0(VAR_2);
  VAR_4->time = FUNC_0(VAR_3->reg.phy_info_timer);
 } else {
  VAR_4->type = FUNC_0(VAR_1);
  VAR_4->time = FUNC_0(0);
 }

 FUNC_3(VAR_3, VAR_4, FUNC_1(sizeof(*VAR_4)));
}
