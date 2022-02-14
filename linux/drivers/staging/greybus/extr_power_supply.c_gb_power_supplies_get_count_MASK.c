
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply_get_supplies_response {scalar_t__ supplies_count; } ;
struct gb_power_supplies {scalar_t__ supplies_count; int connection; } ;
typedef int resp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ,struct gb_power_supply_get_supplies_response*,int) ;

__attribute__((used)) static int FUNC_1(struct gb_power_supplies *VAR_2)
{
 struct gb_power_supply_get_supplies_response VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->connection,
    VAR_1,
    ((void*)0), 0, &VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 if (!VAR_3.supplies_count)
  return -VAR_0;

 VAR_2->supplies_count = VAR_3.supplies_count;

 return VAR_4;
}
