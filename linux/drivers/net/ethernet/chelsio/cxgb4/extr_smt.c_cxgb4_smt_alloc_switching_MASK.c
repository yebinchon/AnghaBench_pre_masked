
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smt_entry {int dummy; } ;
struct net_device {int dummy; } ;
struct adapter {int dummy; } ;


 struct adapter* FUNC_0 (struct net_device*) ;
 struct smt_entry* FUNC_1 (struct adapter*,int,int *) ;

struct smt_entry *FUNC_2(struct net_device *VAR_0, u8 *VAR_1)
{
 struct adapter *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, 0x0, VAR_1);
}
