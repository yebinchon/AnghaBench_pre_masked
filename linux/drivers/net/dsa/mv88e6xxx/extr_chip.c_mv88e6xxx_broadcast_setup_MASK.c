
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_0, u16 VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_3 = FUNC_1(VAR_0, VAR_2, VAR_1);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
