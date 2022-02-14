
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int ,int ,int ,int*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_5, u8 VAR_6,
          bool VAR_7)
{
 u16 VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_0,
        VAR_1, &VAR_8);

 if (VAR_10)
  return VAR_10;

 if (VAR_7)
  VAR_9 = VAR_8 & ~(VAR_4 |
      VAR_2 |
      VAR_3);
 else
  VAR_9 = VAR_8 | VAR_3;

 if (VAR_8 != VAR_9)
  VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_0,
          VAR_1, VAR_9);

 return VAR_10;
}
