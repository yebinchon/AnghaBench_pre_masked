
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;
struct mv88e6xxx_atu_entry {int state; int trunk; int portvec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int ,int*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_2,
          struct mv88e6xxx_atu_entry *VAR_3)
{
 u16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3->state = VAR_4 & 0xf;
 if (VAR_3->state) {
  VAR_3->trunk = !!(VAR_4 & VAR_1);
  VAR_3->portvec = (VAR_4 >> 4) & FUNC_1(VAR_2);
 }

 return 0;
}
