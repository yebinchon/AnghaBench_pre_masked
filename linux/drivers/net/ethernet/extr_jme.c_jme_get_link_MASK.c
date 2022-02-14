
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct jme_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jme_adapter*,int ) ;
 struct jme_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u32
FUNC_2(struct net_device *VAR_2)
{
 struct jme_adapter *VAR_3 = FUNC_1(VAR_2);
 return FUNC_0(VAR_3, VAR_0) & VAR_1;
}
