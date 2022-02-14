
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;
struct cyclecounter {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 struct mv88e6xxx_chip* FUNC_1 (struct cyclecounter const*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int ,int*,int ) ;

__attribute__((used)) static u64 FUNC_3(const struct cyclecounter *VAR_1)
{
 struct mv88e6xxx_chip *VAR_2 = FUNC_1(VAR_1);
 u16 VAR_3[2];
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_0, VAR_3,
     FUNC_0(VAR_3));
 if (VAR_4)
  return 0;
 else
  return ((u32)VAR_3[1] << 16) | VAR_3[0];
}
