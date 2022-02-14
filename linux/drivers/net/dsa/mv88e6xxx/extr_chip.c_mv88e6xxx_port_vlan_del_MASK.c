
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct switchdev_obj_port_vlan {scalar_t__ vid_begin; scalar_t__ vid_end; } ;
struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;
struct TYPE_2__ {int max_vid; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,scalar_t__*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,scalar_t__) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_5(struct dsa_switch *VAR_1, int VAR_2,
       const struct switchdev_obj_port_vlan *VAR_3)
{
 struct mv88e6xxx_chip *VAR_4 = VAR_1->priv;
 u16 VAR_5, VAR_6;
 int VAR_7 = 0;

 if (!VAR_4->info->max_vid)
  return -VAR_0;

 FUNC_3(VAR_4);

 VAR_7 = FUNC_0(VAR_4, VAR_2, &VAR_5);
 if (VAR_7)
  goto unlock;

 for (VAR_6 = VAR_3->vid_begin; VAR_6 <= VAR_3->vid_end; ++VAR_6) {
  VAR_7 = FUNC_2(VAR_4, VAR_2, VAR_6);
  if (VAR_7)
   goto unlock;

  if (VAR_6 == VAR_5) {
   VAR_7 = FUNC_1(VAR_4, VAR_2, 0);
   if (VAR_7)
    goto unlock;
  }
 }

unlock:
 FUNC_4(VAR_4);

 return VAR_7;
}
