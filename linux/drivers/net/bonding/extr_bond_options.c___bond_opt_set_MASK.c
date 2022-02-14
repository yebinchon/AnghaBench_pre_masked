
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bonding {int dummy; } ;
struct bond_option {int (* set ) (struct bonding*,struct bond_opt_value const*) ;} ;
struct bond_opt_value {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct bonding*,struct bond_option const*) ;
 int FUNC_3 (struct bonding*,struct bond_option const*,int,struct bond_opt_value*) ;
 struct bond_option* FUNC_4 (unsigned int) ;
 struct bond_opt_value* FUNC_5 (struct bond_option const*,struct bond_opt_value*) ;
 int FUNC_6 (struct bonding*,struct bond_opt_value const*) ;

int FUNC_7(struct bonding *VAR_2,
     unsigned int VAR_3, struct bond_opt_value *VAR_4)
{
 const struct bond_opt_value *VAR_5 = ((void*)0);
 const struct bond_option *VAR_6;
 int VAR_7 = -VAR_1;

 FUNC_0();

 VAR_6 = FUNC_4(VAR_3);
 if (FUNC_1(!VAR_4) || FUNC_1(!VAR_6))
  goto out;
 VAR_7 = FUNC_2(VAR_2, VAR_6);
 if (VAR_7)
  goto out;
 VAR_5 = FUNC_5(VAR_6, VAR_4);
 if (!VAR_5) {
  VAR_7 = -VAR_0;
  goto out;
 }
 VAR_7 = VAR_6->set(VAR_2, VAR_5);
out:
 if (VAR_7)
  FUNC_3(VAR_2, VAR_6, VAR_7, VAR_4);

 return VAR_7;
}
