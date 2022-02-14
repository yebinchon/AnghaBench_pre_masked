
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eg20t_port {scalar_t__ membase; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned char FUNC_1(struct eg20t_port *VAR_4)
{
 return FUNC_0(VAR_4->membase + VAR_3) & (VAR_0 | VAR_2 | VAR_1);

}
