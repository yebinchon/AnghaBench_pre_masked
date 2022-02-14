
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_bulk_data {int consumer; int ret; } ;
typedef int async_cookie_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, async_cookie_t VAR_1)
{
 struct regulator_bulk_data *VAR_2 = VAR_0;

 VAR_2->ret = FUNC_0(VAR_2->consumer);
}
