
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct jme_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jme_adapter*,int ) ;
 struct jme_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_3)
{
 struct jme_adapter *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5;
 VAR_5 = FUNC_0(VAR_4, VAR_0);
 return (VAR_5 & VAR_2) ? VAR_1 : 0;
}
