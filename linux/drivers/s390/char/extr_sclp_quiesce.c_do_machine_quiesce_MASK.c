
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int addr; } ;
typedef TYPE_1__ psw_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void)
{
 psw_t VAR_4;

 FUNC_1();
 VAR_4.mask =
  VAR_1 | VAR_2 | VAR_0 | VAR_3;
 VAR_4.addr = 0xfff;
 FUNC_0(VAR_4);
}
