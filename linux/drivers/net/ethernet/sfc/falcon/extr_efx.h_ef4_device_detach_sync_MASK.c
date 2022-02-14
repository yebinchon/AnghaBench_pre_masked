
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ef4_nic {struct net_device* net_dev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_3(struct ef4_nic *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->net_dev;





 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
}
