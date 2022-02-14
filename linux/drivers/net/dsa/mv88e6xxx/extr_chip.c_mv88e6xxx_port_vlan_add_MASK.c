
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct switchdev_obj_port_vlan {int flags; scalar_t__ vid_begin; scalar_t__ vid_end; } ;
struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct dsa_switch {int dev; struct mv88e6xxx_chip* priv; } ;
struct TYPE_2__ {int max_vid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,scalar_t__,...) ;
 scalar_t__ FUNC_1 (struct dsa_switch*,int) ;
 scalar_t__ FUNC_2 (struct dsa_switch*,int) ;
 scalar_t__ FUNC_3 (struct mv88e6xxx_chip*,int,scalar_t__) ;
 scalar_t__ FUNC_4 (struct mv88e6xxx_chip*,int,scalar_t__,int ) ;
 int FUNC_5 (struct mv88e6xxx_chip*) ;
 int FUNC_6 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static void FUNC_7(struct dsa_switch *VAR_5, int VAR_6,
        const struct switchdev_obj_port_vlan *VAR_7)
{
 struct mv88e6xxx_chip *VAR_8 = VAR_5->priv;
 bool VAR_9 = VAR_7->flags & VAR_1;
 bool VAR_10 = VAR_7->flags & VAR_0;
 u8 VAR_11;
 u16 VAR_12;

 if (!VAR_8->info->max_vid)
  return;

 if (FUNC_2(VAR_5, VAR_6) || FUNC_1(VAR_5, VAR_6))
  VAR_11 = VAR_3;
 else if (VAR_9)
  VAR_11 = VAR_4;
 else
  VAR_11 = VAR_2;

 FUNC_5(VAR_8);

 for (VAR_12 = VAR_7->vid_begin; VAR_12 <= VAR_7->vid_end; ++VAR_12)
  if (FUNC_4(VAR_8, VAR_6, VAR_12, VAR_11))
   FUNC_0(VAR_5->dev, "p%d: failed to add VLAN %d%c\n", VAR_6,
    VAR_12, VAR_9 ? 'u' : 't');

 if (VAR_10 && FUNC_3(VAR_8, VAR_6, VAR_7->vid_end))
  FUNC_0(VAR_5->dev, "p%d: failed to set PVID %d\n", VAR_6,
   VAR_7->vid_end);

 FUNC_6(VAR_8);
}
