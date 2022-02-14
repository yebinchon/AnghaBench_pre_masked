
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(netdev_features_t VAR_2, u32 *VAR_3)
{
 if (VAR_2 & VAR_1) {

  *VAR_3 |= VAR_0;
 } else {

  *VAR_3 &= ~VAR_0;
 }
}
