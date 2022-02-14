
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;
struct mv88e6xxx_atu_entry {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,struct mv88e6xxx_atu_entry*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,struct mv88e6xxx_atu_entry*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,struct mv88e6xxx_atu_entry*) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int ,int ) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;

int FUNC_5(struct mv88e6xxx_chip *VAR_1, u16 VAR_2,
        struct mv88e6xxx_atu_entry *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4)
  return VAR_4;


 if (!VAR_3->state) {
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_1, VAR_3);
}
