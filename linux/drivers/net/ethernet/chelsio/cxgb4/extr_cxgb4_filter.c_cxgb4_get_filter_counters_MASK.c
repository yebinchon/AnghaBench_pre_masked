
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,unsigned int,int *,int *,int) ;
 struct adapter* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_0, unsigned int VAR_1,
         u64 *VAR_2, u64 *VAR_3, bool VAR_4)
{
 struct adapter *VAR_5 = FUNC_1(VAR_0);

 return FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
