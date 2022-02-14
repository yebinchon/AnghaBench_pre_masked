
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int pf; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 struct port_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct adapter*,int ,struct port_info*,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 struct port_info *VAR_1 = FUNC_2(VAR_0);
 struct adapter *VAR_2 = VAR_1->adapter;
 int VAR_3;

 FUNC_4(VAR_0);
 FUNC_3(VAR_0);
 VAR_3 = FUNC_5(VAR_2, VAR_2->pf, VAR_1,
      0, 0, 0);




 return VAR_3;
}
