
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,int,int,int,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_0,
       bool VAR_1, int VAR_2, int VAR_3,
       u16 VAR_4)
{
 int VAR_5 = (VAR_3 >> 16) & 0x1f;
 int VAR_6 = VAR_3 & 0xffff;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5,
        VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5,
         VAR_4);
}
