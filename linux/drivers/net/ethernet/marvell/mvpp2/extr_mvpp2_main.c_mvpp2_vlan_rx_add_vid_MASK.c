
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mvpp2_port {int dummy; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mvpp2_port*,int ) ;
 int FUNC_1 (struct net_device*,char*,scalar_t__) ;
 struct mvpp2_port* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, __be16 VAR_2, u16 VAR_3)
{
 struct mvpp2_port *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_3);
 if (VAR_5)
  FUNC_1(VAR_1, "rx-vlan-filter offloading cannot accept more than %d VIDs per port\n",
      VAR_0 - 1);
 return VAR_5;
}
