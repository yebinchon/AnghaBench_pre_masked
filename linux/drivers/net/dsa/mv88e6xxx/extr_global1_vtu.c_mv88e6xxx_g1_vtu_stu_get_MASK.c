
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_vtu_entry {scalar_t__ sid; int valid; } ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_1,
        struct mv88e6xxx_vtu_entry *VAR_2)
{
 struct mv88e6xxx_vtu_entry VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3.sid = VAR_2->sid - 1;

 VAR_4 = FUNC_1(VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_3.sid != VAR_2->sid || !VAR_3.valid)
  return -VAR_0;

 return 0;
}
