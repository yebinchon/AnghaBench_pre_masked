
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mace_data {struct mace* mace; } ;
struct mace {int imr; scalar_t__ maccc; } ;


 int FUNC_0 (struct net_device*) ;
 struct mace_data* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct mace_data *VAR_1 = FUNC_1(VAR_0);
 volatile struct mace *VAR_2 = VAR_1->mace;

 VAR_2->maccc = 0;
 VAR_2->imr = 0xFF;
 FUNC_0(VAR_0);

 return 0;
}
