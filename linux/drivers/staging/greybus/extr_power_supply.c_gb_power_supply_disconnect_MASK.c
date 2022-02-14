
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supplies {int connection; } ;
struct gb_bundle {int dummy; } ;


 int FUNC_0 (struct gb_power_supplies*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct gb_power_supplies* FUNC_3 (struct gb_bundle*) ;

__attribute__((used)) static void FUNC_4(struct gb_bundle *VAR_0)
{
 struct gb_power_supplies *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1->connection);
 FUNC_1(VAR_1->connection);

 FUNC_0(VAR_1);
}
