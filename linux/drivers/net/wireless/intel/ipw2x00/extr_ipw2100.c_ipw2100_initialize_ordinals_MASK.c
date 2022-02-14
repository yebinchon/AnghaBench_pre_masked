
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_ordinals {int table1_size; int table2_size; int table2_addr; int table1_addr; } ;
struct ipw2100_priv {int net_dev; struct ipw2100_ordinals ordinals; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ipw2100_priv *VAR_2)
{
 struct ipw2100_ordinals *VAR_3 = &VAR_2->ordinals;

 FUNC_0("enter\n");

 FUNC_2(VAR_2->net_dev, VAR_0,
        &VAR_3->table1_addr);

 FUNC_2(VAR_2->net_dev, VAR_1,
        &VAR_3->table2_addr);

 FUNC_1(VAR_2->net_dev, VAR_3->table1_addr, &VAR_3->table1_size);
 FUNC_1(VAR_2->net_dev, VAR_3->table2_addr, &VAR_3->table2_size);

 VAR_3->table2_size &= 0x0000FFFF;

 FUNC_0("table 1 size: %d\n", VAR_3->table1_size);
 FUNC_0("table 2 size: %d\n", VAR_3->table2_size);
 FUNC_0("exit\n");
}
