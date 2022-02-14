
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct adapter {int mbox; } ;


 int VAR_0 ;
 struct adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct adapter*,int ,int ) ;

int FUNC_2(struct net_device *VAR_1)
{
 struct adapter *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_2, VAR_2->mbox, VAR_0);
}
