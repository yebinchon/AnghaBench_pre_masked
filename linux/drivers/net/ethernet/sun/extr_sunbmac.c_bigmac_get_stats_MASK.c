
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {struct net_device_stats stats; } ;
struct bigmac {int bregs; } ;


 int FUNC_0 (struct bigmac*,int ) ;
 struct bigmac* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_0)
{
 struct bigmac *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_1->bregs);
 return &VAR_0->stats;
}
