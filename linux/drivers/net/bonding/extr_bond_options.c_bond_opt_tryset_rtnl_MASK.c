
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bonding {int dummy; } ;
struct bond_opt_value {int dummy; } ;


 int FUNC_0 (struct bonding*,unsigned int,struct bond_opt_value*) ;
 int FUNC_1 (struct bond_opt_value*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(struct bonding *VAR_0, unsigned int VAR_1, char *VAR_2)
{
 struct bond_opt_value VAR_3;
 int VAR_4;

 if (!FUNC_3())
  return FUNC_2();
 FUNC_1(&VAR_3, VAR_2);
 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 FUNC_4();

 return VAR_4;
}
