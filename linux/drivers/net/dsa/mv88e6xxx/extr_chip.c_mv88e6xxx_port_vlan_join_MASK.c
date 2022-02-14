
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlan ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct mv88e6xxx_vtu_entry {scalar_t__ vid; int valid; scalar_t__* member; int fid; } ;
struct mv88e6xxx_chip {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,scalar_t__) ;
 int FUNC_1 (struct mv88e6xxx_vtu_entry*,int ,int) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int *) ;
 int FUNC_3 (struct mv88e6xxx_chip*,scalar_t__) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;
 int FUNC_5 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;
 int FUNC_6 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;

__attribute__((used)) static int FUNC_7(struct mv88e6xxx_chip *VAR_2, int VAR_3,
        u16 VAR_4, u8 VAR_5)
{
 const u8 VAR_6 = VAR_1;
 struct mv88e6xxx_vtu_entry VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_4)
  return -VAR_0;

 VAR_7.vid = VAR_4 - 1;
 VAR_7.valid = 0;

 VAR_9 = FUNC_5(VAR_2, &VAR_7);
 if (VAR_9)
  return VAR_9;

 if (VAR_7.vid != VAR_4 || !VAR_7.valid) {
  FUNC_1(&VAR_7, 0, sizeof(VAR_7));

  VAR_9 = FUNC_2(VAR_2, &VAR_7.fid);
  if (VAR_9)
   return VAR_9;

  for (VAR_8 = 0; VAR_8 < FUNC_4(VAR_2); ++VAR_8)
   if (VAR_8 == VAR_3)
    VAR_7.member[VAR_8] = VAR_5;
   else
    VAR_7.member[VAR_8] = VAR_6;

  VAR_7.vid = VAR_4;
  VAR_7.valid = 1;

  VAR_9 = FUNC_6(VAR_2, &VAR_7);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_3(VAR_2, VAR_7.vid);
  if (VAR_9)
   return VAR_9;
 } else if (VAR_7.member[VAR_3] != VAR_5) {
  VAR_7.member[VAR_3] = VAR_5;

  VAR_9 = FUNC_6(VAR_2, &VAR_7);
  if (VAR_9)
   return VAR_9;
 } else {
  FUNC_0(VAR_2->dev, "p%d: already a member of VLAN %d\n",
    VAR_3, VAR_4);
 }

 return 0;
}
