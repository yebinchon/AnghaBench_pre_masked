
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_therm_family_data {int dummy; } ;
struct w1_slave {int family_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct w1_slave *VAR_2)
{
 VAR_2->family_data = FUNC_2(sizeof(struct w1_therm_family_data),
  VAR_1);
 if (!VAR_2->family_data)
  return -VAR_0;
 FUNC_1(FUNC_0(VAR_2->family_data), 1);
 return 0;
}
