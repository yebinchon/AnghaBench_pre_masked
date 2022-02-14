
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ hw_enc_features; } ;
struct be_adapter {int flags; scalar_t__ vxlan_port; int if_handle; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*,int ,int ) ;
 int FUNC_1 (struct be_adapter*,int ) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;

 if (VAR_2->flags & VAR_0)
  FUNC_0(VAR_2, VAR_2->if_handle,
        VAR_1);

 if (VAR_2->vxlan_port)
  FUNC_1(VAR_2, 0);

 VAR_2->flags &= ~VAR_0;
 VAR_2->vxlan_port = 0;

 VAR_3->hw_enc_features = 0;
}
