
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mv88e6xxx_vtu_entry {scalar_t__ vid; int valid; scalar_t__* member; int fid; } ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int ,int,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;
 int FUNC_3 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;

__attribute__((used)) static int FUNC_4(struct mv88e6xxx_chip *VAR_2,
         int VAR_3, u16 VAR_4)
{
 struct mv88e6xxx_vtu_entry VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_4)
  return -VAR_0;

 VAR_5.vid = VAR_4 - 1;
 VAR_5.valid = 0;

 VAR_7 = FUNC_2(VAR_2, &VAR_5);
 if (VAR_7)
  return VAR_7;




 if (VAR_5.vid != VAR_4 || !VAR_5.valid ||
     VAR_5.member[VAR_3] == VAR_1)
  return -VAR_0;

 VAR_5.member[VAR_3] = VAR_1;


 VAR_5.valid = 0;
 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_2); ++VAR_6) {
  if (VAR_5.member[VAR_6] !=
      VAR_1) {
   VAR_5.valid = 1;
   break;
  }
 }

 VAR_7 = FUNC_3(VAR_2, &VAR_5);
 if (VAR_7)
  return VAR_7;

 return FUNC_0(VAR_2, VAR_5.fid, VAR_3, 0);
}
