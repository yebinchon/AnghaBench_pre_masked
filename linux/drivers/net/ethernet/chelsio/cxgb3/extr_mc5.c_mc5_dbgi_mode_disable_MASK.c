
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc5 {scalar_t__ mode; int parity_enabled; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(const struct mc5 *VAR_3)
{
 FUNC_3(VAR_3->adapter, VAR_0,
       FUNC_2(VAR_3->mode == VAR_2) |
       FUNC_0(VAR_3->mode == VAR_2) |
       FUNC_1(VAR_3->parity_enabled) | VAR_1);
}
