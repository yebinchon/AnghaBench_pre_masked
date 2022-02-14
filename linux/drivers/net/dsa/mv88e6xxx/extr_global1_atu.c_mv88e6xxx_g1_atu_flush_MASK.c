
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;
struct mv88e6xxx_atu_entry {int state; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,int ,struct mv88e6xxx_atu_entry*,int) ;

int FUNC_1(struct mv88e6xxx_chip *VAR_0, u16 VAR_1, bool VAR_2)
{
 struct mv88e6xxx_atu_entry VAR_3 = {
  .state = 0,
 };

 return FUNC_0(VAR_0, VAR_1, &VAR_3, VAR_2);
}
