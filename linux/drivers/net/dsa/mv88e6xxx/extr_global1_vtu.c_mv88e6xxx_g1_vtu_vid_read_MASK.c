
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_vtu_entry {int vid; int valid; } ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_3,
         struct mv88e6xxx_vtu_entry *VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->vid = VAR_5 & 0xfff;

 if (VAR_5 & VAR_0)
  VAR_4->vid |= 0x1000;

 VAR_4->valid = !!(VAR_5 & VAR_2);

 return 0;
}
