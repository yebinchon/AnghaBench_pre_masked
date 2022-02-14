
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hw_features; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_4)
{
 VAR_4->hw_features = VAR_3 | VAR_0 | VAR_2;
 VAR_4->features |= VAR_4->hw_features | VAR_1;
}
