
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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_4,
     int VAR_5, u16 VAR_6, u8 VAR_7, u16 VAR_8)
{
 u16 VAR_9;

 VAR_9 = VAR_3 | VAR_6 |
  (VAR_7 << FUNC_0(VAR_2)) |
  (VAR_8 & VAR_1);

 return FUNC_1(VAR_4, VAR_5,
        VAR_0, VAR_9);
}
