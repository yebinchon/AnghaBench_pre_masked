
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct l2t_entry {int dummy; } ;
struct adapter {int dummy; } ;


 struct adapter* FUNC_0 (struct net_device*) ;
 struct l2t_entry* FUNC_1 (struct adapter*,int ,int ,int *) ;

struct l2t_entry *FUNC_2(struct net_device *VAR_0, u16 VAR_1,
         u8 VAR_2, u8 *VAR_3)
{
 struct adapter *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
}
