
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct macvlan_dev {struct net_device* lowerdev; } ;
typedef int __be16 ;


 struct macvlan_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
        __be16 VAR_1, u16 VAR_2)
{
 struct macvlan_dev *VAR_3 = FUNC_0(VAR_0);
 struct net_device *VAR_4 = VAR_3->lowerdev;

 FUNC_1(VAR_4, VAR_1, VAR_2);
 return 0;
}
