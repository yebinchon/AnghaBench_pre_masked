
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mv88e6xxx_vtu_entry {scalar_t__ vid; int valid; scalar_t__* member; } ;
struct mv88e6xxx_chip {int dummy; } ;
struct dsa_switch {int dev; TYPE_1__* ports; struct mv88e6xxx_chip* priv; } ;
struct TYPE_4__ {scalar_t__ bridge_dev; } ;
struct TYPE_3__ {scalar_t__ bridge_dev; int slave; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,scalar_t__,int,int ) ;
 scalar_t__ FUNC_1 (struct dsa_switch*,int) ;
 scalar_t__ FUNC_2 (struct dsa_switch*,int) ;
 TYPE_2__* FUNC_3 (struct dsa_switch*,int) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;
 int FUNC_5 (struct mv88e6xxx_chip*,struct mv88e6xxx_vtu_entry*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct dsa_switch *VAR_2, int VAR_3,
     u16 VAR_4, u16 VAR_5)
{
 struct mv88e6xxx_chip *VAR_6 = VAR_2->priv;
 struct mv88e6xxx_vtu_entry VAR_7;
 int VAR_8, VAR_9;


 if (FUNC_2(VAR_2, VAR_3) || FUNC_1(VAR_2, VAR_3))
  return 0;

 if (!VAR_4)
  return -VAR_0;

 VAR_7.vid = VAR_4 - 1;
 VAR_7.valid = 0;

 do {
  VAR_9 = FUNC_5(VAR_6, &VAR_7);
  if (VAR_9)
   return VAR_9;

  if (!VAR_7.valid)
   break;

  if (VAR_7.vid > VAR_5)
   break;

  for (VAR_8 = 0; VAR_8 < FUNC_4(VAR_6); ++VAR_8) {
   if (FUNC_2(VAR_2, VAR_8) || FUNC_1(VAR_2, VAR_8))
    continue;

   if (!VAR_2->ports[VAR_8].slave)
    continue;

   if (VAR_7.member[VAR_8] ==
       VAR_1)
    continue;

   if (FUNC_3(VAR_2, VAR_8)->bridge_dev ==
       VAR_2->ports[VAR_3].bridge_dev)
    break;

   if (!FUNC_3(VAR_2, VAR_8)->bridge_dev)
    continue;

   FUNC_0(VAR_2->dev, "p%d: hw VLAN %d already used by port %d in %s\n",
    VAR_3, VAR_7.vid, VAR_8,
    FUNC_6(FUNC_3(VAR_2, VAR_8)->bridge_dev));
   return -VAR_0;
  }
 } while (VAR_7.vid < VAR_5);

 return 0;
}
