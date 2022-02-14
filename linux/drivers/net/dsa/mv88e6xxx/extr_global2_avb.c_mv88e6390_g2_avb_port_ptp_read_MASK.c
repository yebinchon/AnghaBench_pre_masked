
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_3,
       int VAR_4, int VAR_5, u16 *VAR_6,
       int VAR_7)
{
 u16 VAR_8 = (VAR_7 == 1 ? VAR_1 :
     VAR_2) |
       (VAR_4 << 8) | (VAR_0 << 5) |
       VAR_5;

 return FUNC_0(VAR_3, VAR_8, VAR_6, VAR_7);
}
