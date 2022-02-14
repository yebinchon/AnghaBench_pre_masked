
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct macsec_dev {struct net_device* real_dev; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct macsec_dev* FUNC_0 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_1(struct net_device *VAR_4,
          netdev_features_t VAR_5)
{
 struct macsec_dev *VAR_6 = FUNC_0(VAR_4);
 struct net_device *VAR_7 = VAR_6->real_dev;

 VAR_5 &= (VAR_7->features & VAR_0) |
      VAR_1 | VAR_3;
 VAR_5 |= VAR_2;

 return VAR_5;
}
