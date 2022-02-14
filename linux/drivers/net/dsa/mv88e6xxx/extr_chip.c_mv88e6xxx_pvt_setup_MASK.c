
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int) ;

__attribute__((used)) static int FUNC_3(struct mv88e6xxx_chip *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5;

 if (!FUNC_1(VAR_2))
  return 0;




 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5)
  return VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
   VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
   if (VAR_5)
    return VAR_5;
  }
 }

 return 0;
}
