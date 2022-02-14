
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hw_features; int vlan_features; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_11)
{
 VAR_11->hw_features = VAR_8 | VAR_0 | VAR_5 |
         VAR_4 | VAR_9 | VAR_10 |
         VAR_7 | VAR_6 |
         VAR_3 | VAR_2;

 VAR_11->vlan_features = VAR_11->hw_features;

 VAR_11->features = VAR_11->hw_features | VAR_1;
}
