
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct mlx5dr_domain {int dummy; } ;
struct TYPE_7__ {TYPE_4__* caps; int dmn; } ;
struct TYPE_5__ {int rx_icm_addr; } ;
struct TYPE_6__ {TYPE_1__ fw_tbl; int is_fw_tbl; } ;
struct mlx5dr_action {int action_type; TYPE_3__ vport; TYPE_2__ dest_tbl; } ;
struct TYPE_8__ {int num; } ;




 int VAR_0 ;
 int FUNC_0 (struct mlx5dr_domain*,char*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct mlx5dr_domain*,char*) ;

__attribute__((used)) static int FUNC_3(struct mlx5dr_domain *VAR_1,
          struct mlx5dr_action *VAR_2,
          u64 *VAR_3)
{
 int VAR_4;

 switch (VAR_2->action_type) {
 case 129:




  if (VAR_2->dest_tbl.is_fw_tbl) {
   *VAR_3 = VAR_2->dest_tbl.fw_tbl.rx_icm_addr;
  } else {
   FUNC_0(VAR_1,
       "Destination FT should be terminating when modify TTL is used\n");
   return -VAR_0;
  }
  break;

 case 128:



  VAR_4 = FUNC_1(VAR_2->vport.dmn,
        VAR_2->vport.caps->num,
        VAR_3);
  if (VAR_4) {
   FUNC_2(VAR_1, "Failed to get FW cs recalc flow table\n");
   return VAR_4;
  }
  break;

 default:
  break;
 }

 return 0;
}
