
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int changed_attr; } ;
struct TYPE_6__ {TYPE_1__ port_info; } ;
struct TYPE_8__ {TYPE_2__ params; int port; } ;
struct TYPE_7__ {TYPE_4__ port_mgmt_change; } ;
struct mlx4_eqe {TYPE_3__ event; int subtype; int type; } ;
struct mlx4_dev {int dummy; } ;
typedef int eqe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_eqe*,int ,int) ;
 int FUNC_2 (struct mlx4_dev*,int ,struct mlx4_eqe*) ;

int FUNC_3(struct mlx4_dev *VAR_3, u8 VAR_4, int VAR_5)
{
 struct mlx4_eqe VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.type = VAR_2;
 VAR_6.subtype = VAR_1;
 VAR_6.event.port_mgmt_change.port = VAR_4;
 VAR_6.event.port_mgmt_change.params.port_info.changed_attr =
  FUNC_0((u32) VAR_5);

 FUNC_2(VAR_3, VAR_0, &VAR_6);
 return 0;
}
