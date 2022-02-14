
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hinic_dev {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hinic_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hinic_dev*,int ,struct net_device*,char*) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct net_device *VAR_3,
         netdev_features_t VAR_4)
{
 struct hinic_dev *VAR_5 = FUNC_0(VAR_3);


 if (!(VAR_4 & VAR_1)) {
  FUNC_1(VAR_5, VAR_2, VAR_3, "disabling LRO as RXCSUM is off\n");
  VAR_4 &= ~VAR_0;
 }

 return VAR_4;
}
