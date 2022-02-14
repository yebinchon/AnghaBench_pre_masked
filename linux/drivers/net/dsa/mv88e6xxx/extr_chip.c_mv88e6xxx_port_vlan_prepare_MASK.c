
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_obj_port_vlan {int vid_end; int vid_begin; } ;
struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;
struct TYPE_2__ {int max_vid; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch*,int,int ,int ) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int
FUNC_3(struct dsa_switch *VAR_1, int VAR_2,
       const struct switchdev_obj_port_vlan *VAR_3)
{
 struct mv88e6xxx_chip *VAR_4 = VAR_1->priv;
 int VAR_5;

 if (!VAR_4->info->max_vid)
  return -VAR_0;




 FUNC_1(VAR_4);
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3->vid_begin,
        VAR_3->vid_end);
 FUNC_2(VAR_4);




 return VAR_5;
}
