
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;
struct mv88e6xxx_atu_entry {int* mac; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_1,
         struct mv88e6xxx_atu_entry *VAR_2)
{
 u16 VAR_3;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  VAR_5 = FUNC_0(VAR_1, VAR_0 + VAR_4, &VAR_3);
  if (VAR_5)
   return VAR_5;

  VAR_2->mac[VAR_4 * 2] = VAR_3 >> 8;
  VAR_2->mac[VAR_4 * 2 + 1] = VAR_3 & 0xff;
 }

 return 0;
}
