
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_core_data {scalar_t__ open_deadline; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct watchdog_core_data *VAR_2)
{
 VAR_2->open_deadline = VAR_1 ?
  FUNC_0() + FUNC_1(VAR_1, 0) : VAR_0;
}
