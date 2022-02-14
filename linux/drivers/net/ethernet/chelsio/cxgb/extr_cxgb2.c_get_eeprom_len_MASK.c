
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct adapter* ml_priv; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct adapter*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1)
{
 struct adapter *VAR_2 = VAR_1->ml_priv;

 return FUNC_0(VAR_2) ? VAR_0 : 0;
}
