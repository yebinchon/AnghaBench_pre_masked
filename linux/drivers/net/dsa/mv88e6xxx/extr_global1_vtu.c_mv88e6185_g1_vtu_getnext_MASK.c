
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_vtu_entry {int fid; scalar_t__ valid; } ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int ,int*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;

int FUNC_3(struct mv88e6xxx_chip *VAR_1,
        struct mv88e6xxx_vtu_entry *VAR_2)
{
 u16 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 if (VAR_2->valid) {
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  if (VAR_4)
   return VAR_4;




  VAR_4 = FUNC_1(VAR_1, VAR_0, &VAR_3);
  if (VAR_4)
   return VAR_4;

  VAR_2->fid = VAR_3 & 0x000f;
  VAR_2->fid |= (VAR_3 & 0x0f00) >> 4;
 }

 return 0;
}
