
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_vtu_entry {scalar_t__ valid; } ;
struct mv88e6xxx_chip {int dummy; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;
 int FUNC_3 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;

int FUNC_4(struct mv88e6xxx_chip *VAR_0,
        struct mv88e6xxx_vtu_entry *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 if (VAR_1->valid) {

  VAR_2 = FUNC_3(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
