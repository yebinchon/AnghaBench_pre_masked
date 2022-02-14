
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct iavf_adapter {int aq_required; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iavf_adapter*) ;
 struct iavf_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4,
        netdev_features_t VAR_5)
{
 struct iavf_adapter *VAR_6 = FUNC_1(VAR_4);




 if (!FUNC_0(VAR_6)) {
  if ((VAR_4->features ^ VAR_5) & VAR_3)
   return -VAR_0;
 } else if ((VAR_4->features ^ VAR_5) & VAR_3) {
  if (VAR_5 & VAR_3)
   VAR_6->aq_required |=
    VAR_2;
  else
   VAR_6->aq_required |=
    VAR_1;
 }

 return 0;
}
