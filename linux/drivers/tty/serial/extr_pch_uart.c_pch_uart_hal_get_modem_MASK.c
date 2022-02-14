
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eg20t_port {unsigned int dmsr; scalar_t__ membase; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(struct eg20t_port *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2->membase + VAR_1);
 VAR_2->dmsr = VAR_3 & VAR_0;
 return (u8)VAR_3;
}
