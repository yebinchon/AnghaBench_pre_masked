
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int offload_flags; int rx_csum; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;

__attribute__((used)) static netdev_features_t FUNC_1(struct qlcnic_adapter *VAR_8,
           netdev_features_t VAR_9)
{
 u32 VAR_10 = VAR_8->offload_flags;

 if (VAR_10 & VAR_0) {
  VAR_9 |= VAR_5 | VAR_4 |
       VAR_3;
  VAR_8->rx_csum = 1;
  if (FUNC_0(VAR_8)) {
   if (!(VAR_10 & VAR_1))
    VAR_9 &= ~VAR_6;
   else
    VAR_9 |= VAR_6;

   if (!(VAR_10 & VAR_2))
    VAR_9 &= ~VAR_7;
   else
    VAR_9 |= VAR_7;
  }
 } else {
  VAR_9 &= ~(VAR_5 |
         VAR_4 |
         VAR_3);

  if (FUNC_0(VAR_8))
   VAR_9 &= ~(VAR_6 | VAR_7);
  VAR_8->rx_csum = 0;
 }

 return VAR_9;
}
