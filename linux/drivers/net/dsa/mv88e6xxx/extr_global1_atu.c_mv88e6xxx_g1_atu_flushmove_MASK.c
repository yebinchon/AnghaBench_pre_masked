
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mv88e6xxx_chip {int dummy; } ;
struct mv88e6xxx_atu_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mv88e6xxx_chip*,struct mv88e6xxx_atu_entry*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_3(struct mv88e6xxx_chip *VAR_4, u16 VAR_5,
          struct mv88e6xxx_atu_entry *VAR_6,
          bool VAR_7)
{
 u16 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_4, VAR_6);
 if (VAR_9)
  return VAR_9;


 if (VAR_7 && VAR_5)
  VAR_8 = VAR_1;
 else if (VAR_5)
  VAR_8 = VAR_3;
 else if (VAR_7)
  VAR_8 = VAR_0;
 else
  VAR_8 = VAR_2;

 return FUNC_1(VAR_4, VAR_5, VAR_8);
}
