
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int ) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int,int ) ;

int FUNC_3(struct mv88e6xxx_chip *VAR_2, int VAR_3,
        u8 VAR_4, int VAR_5, u16 VAR_6)
{
 int VAR_7;


 if (VAR_5 == VAR_1)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (!VAR_7) {
  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_1, VAR_4);
  if (!VAR_7)
   VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_5, VAR_6);

  FUNC_1(VAR_2, VAR_3);
 }

 return VAR_7;
}
