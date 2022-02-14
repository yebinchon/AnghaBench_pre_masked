
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {scalar_t__ sw_addr; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,scalar_t__,int,int *) ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_0,
       int VAR_1, int VAR_2, u16 *VAR_3)
{
 return FUNC_0(VAR_0, VAR_0->sw_addr + VAR_1, VAR_2, VAR_3);
}
