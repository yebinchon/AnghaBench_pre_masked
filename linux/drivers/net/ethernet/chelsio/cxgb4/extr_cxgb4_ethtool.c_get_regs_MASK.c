
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*) ;
 struct adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct adapter*,void*,size_t) ;
 size_t FUNC_3 (struct adapter*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0, struct ethtool_regs *VAR_1,
       void *VAR_2)
{
 struct adapter *VAR_3 = FUNC_1(VAR_0);
 size_t VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 VAR_1->version = FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_2, VAR_4);
}
