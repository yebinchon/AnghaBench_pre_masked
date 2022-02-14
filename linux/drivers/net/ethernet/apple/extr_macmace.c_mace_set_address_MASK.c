
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mace_data {struct mace* mace; } ;
struct mace {int maccc; } ;


 int FUNC_0 (struct net_device*,void*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 struct mace_data* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, void *VAR_1)
{
 struct mace_data *VAR_2 = FUNC_3(VAR_0);
 volatile struct mace *VAR_3 = VAR_2->mace;
 unsigned long VAR_4;
 u8 VAR_5;

 FUNC_2(VAR_4);

 VAR_5 = VAR_3->maccc;

 FUNC_0(VAR_0, VAR_1);

 VAR_3->maccc = VAR_5;

 FUNC_1(VAR_4);

 return 0;
}
