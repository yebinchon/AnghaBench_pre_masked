
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mv88e6xxx_vtu_entry {scalar_t__ vid; int valid; scalar_t__ fid; } ;
struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct TYPE_2__ {scalar_t__ max_vid; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct mv88e6xxx_chip*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct mv88e6xxx_chip*) ;
 int FUNC_5 (struct mv88e6xxx_chip*) ;
 int FUNC_6 (struct mv88e6xxx_chip*,int,scalar_t__*) ;
 int FUNC_7 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;
 int FUNC_8 (scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct mv88e6xxx_chip *VAR_3, u16 *VAR_4)
{
 FUNC_0(VAR_2, VAR_1);
 struct mv88e6xxx_vtu_entry VAR_5;
 int VAR_6, VAR_7;

 FUNC_1(VAR_2, VAR_1);


 for (VAR_6 = 0; VAR_6 < FUNC_5(VAR_3); ++VAR_6) {
  VAR_7 = FUNC_6(VAR_3, VAR_6, VAR_4);
  if (VAR_7)
   return VAR_7;

  FUNC_8(*VAR_4, VAR_2);
 }


 VAR_5.vid = VAR_3->info->max_vid;
 VAR_5.valid = 0;

 do {
  VAR_7 = FUNC_7(VAR_3, &VAR_5);
  if (VAR_7)
   return VAR_7;

  if (!VAR_5.valid)
   break;

  FUNC_8(VAR_5.fid, VAR_2);
 } while (VAR_5.vid < VAR_3->info->max_vid);




 *VAR_4 = FUNC_2(VAR_2, VAR_1, 1);
 if (FUNC_9(*VAR_4 >= FUNC_4(VAR_3)))
  return -VAR_0;


 return FUNC_3(VAR_3, *VAR_4, 1);
}
