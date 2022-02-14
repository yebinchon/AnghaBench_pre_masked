
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_vtu_entry {scalar_t__ valid; } ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int ) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;
 int FUNC_4 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;
 int FUNC_5 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;

int FUNC_6(struct mv88e6xxx_chip *VAR_2,
          struct mv88e6xxx_vtu_entry *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_5(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->valid) {

  VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_4(VAR_2, VAR_3);
  if (VAR_4)
   return VAR_4;


  VAR_4 = FUNC_2(VAR_2,
       VAR_0);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (VAR_4)
   return VAR_4;
 }


 return FUNC_2(VAR_2, VAR_1);
}
