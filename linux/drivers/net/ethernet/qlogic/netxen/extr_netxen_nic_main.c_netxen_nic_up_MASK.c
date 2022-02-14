
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct netxen_adapter*,struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline int
FUNC_4(struct netxen_adapter *VAR_0, struct net_device *VAR_1)
{
 int VAR_2 = 0;

 FUNC_2();
 if (FUNC_1(VAR_1))
  VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_3();

 return VAR_2;
}
