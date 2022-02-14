
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mv88e6xxx_vtu_entry {scalar_t__ vid; int valid; int fid; } ;
struct mv88e6xxx_chip {TYPE_1__* info; } ;
typedef int dsa_fdb_dump_cb_t ;
struct TYPE_2__ {scalar_t__ max_vid; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,int ,scalar_t__,int,int *,void*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int *) ;
 int FUNC_2 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;

__attribute__((used)) static int FUNC_3(struct mv88e6xxx_chip *VAR_0, int VAR_1,
      dsa_fdb_dump_cb_t *VAR_2, void *VAR_3)
{
 struct mv88e6xxx_vtu_entry VAR_4;
 u16 VAR_5;
 int VAR_6;


 VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_5, 0, VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;


 VAR_4.vid = VAR_0->info->max_vid;
 VAR_4.valid = 0;

 do {
  VAR_6 = FUNC_2(VAR_0, &VAR_4);
  if (VAR_6)
   return VAR_6;

  if (!VAR_4.valid)
   break;

  VAR_6 = FUNC_0(VAR_0, VAR_4.fid, VAR_4.vid, VAR_1,
       VAR_2, VAR_3);
  if (VAR_6)
   return VAR_6;
 } while (VAR_4.vid < VAR_0->info->max_vid);

 return VAR_6;
}
