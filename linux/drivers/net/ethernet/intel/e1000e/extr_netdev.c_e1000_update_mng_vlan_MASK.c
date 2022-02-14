
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ vlan_id; int status; } ;
struct TYPE_4__ {TYPE_1__ mng_cookie; } ;
struct e1000_adapter {scalar_t__ mng_vlan_id; TYPE_2__ hw; struct net_device* netdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ,scalar_t__) ;
 int FUNC_1 (struct net_device*,int ,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct e1000_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 u16 VAR_5 = VAR_3->hw.mng_cookie.vlan_id;
 u16 VAR_6 = VAR_3->mng_vlan_id;

 if (VAR_3->hw.mng_cookie.status & VAR_0) {
  FUNC_0(VAR_4, FUNC_2(VAR_2), VAR_5);
  VAR_3->mng_vlan_id = VAR_5;
 }

 if ((VAR_6 != (u16)VAR_1) && (VAR_5 != VAR_6))
  FUNC_1(VAR_4, FUNC_2(VAR_2), VAR_6);
}
