
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_obj_port_mdb {scalar_t__ vid; int addr; } ;
struct ksz_device {int num_statics; TYPE_1__* dev_ops; } ;
struct dsa_switch {struct ksz_device* priv; } ;
struct alu_struct {scalar_t__ fid; int is_static; int is_use_fid; int port_forward; int mac; } ;
typedef int alu ;
struct TYPE_2__ {int (* w_sta_mac_table ) (struct ksz_device*,int,struct alu_struct*) ;int (* r_sta_mac_table ) (struct ksz_device*,int,struct alu_struct*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct alu_struct*,int ,int) ;
 int FUNC_4 (struct ksz_device*,int,struct alu_struct*) ;
 int FUNC_5 (struct ksz_device*,int,struct alu_struct*) ;

void FUNC_6(struct dsa_switch *VAR_1, int VAR_2,
        const struct switchdev_obj_port_mdb *VAR_3)
{
 struct ksz_device *VAR_4 = VAR_1->priv;
 struct alu_struct VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 VAR_5.port_forward = 0;
 for (VAR_6 = 0; VAR_6 < VAR_4->num_statics; VAR_6++) {
  if (!VAR_4->dev_ops->r_sta_mac_table(VAR_4, VAR_6, &VAR_5)) {

   if (!FUNC_1(VAR_5.mac, VAR_3->addr, VAR_0) &&
       VAR_5.fid == VAR_3->vid)
    break;

  } else if (!VAR_7) {
   VAR_7 = VAR_6 + 1;
  }
 }


 if (VAR_6 == VAR_4->num_statics && !VAR_7)
  return;


 if (VAR_6 == VAR_4->num_statics) {
  VAR_6 = VAR_7 - 1;
  FUNC_3(&VAR_5, 0, sizeof(VAR_5));
  FUNC_2(VAR_5.mac, VAR_3->addr, VAR_0);
  VAR_5.is_static = 1;
 }
 VAR_5.port_forward |= FUNC_0(VAR_2);
 if (VAR_3->vid) {
  VAR_5.is_use_fid = 1;


  VAR_5.fid = VAR_3->vid;
 }
 VAR_4->dev_ops->w_sta_mac_table(VAR_4, VAR_6, &VAR_5);
}
